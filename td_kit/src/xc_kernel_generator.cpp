/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "td_kit/xc_kernel_generator.hpp"

#include <boost/ref.hpp>

#include <boost/lambda/algorithm.hpp>
#include <boost/lambda/bind.hpp>
#include <boost/lambda/lambda.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>

#include "io_kit/logger.hpp"
#include "misc/blackbox.hpp"

#include <cmath>

#include <mpi.h>

#include "misc/dispatcher.hpp"
#include "misc/misc_utils.hpp"
#include "misc/mpi_utils.hpp"

#include <ext/numeric>

namespace {
    const double threshold = 1e-10;

    inline const std::size_t _index(Spin s1, Spin s2) { return s1 + s2; }
}

XCKernelGenerator::XCKernelGenerator(
    boost::shared_ptr<const System> system,
    std::unique_ptr<Grid> grid,
    std::unique_ptr<AOValueEngine> ao_value_engine,
    LocalXCFunctional lda_functional,
    std::size_t max_cache_size) :
    GridIntegralImplementation(system, std::move(ao_value_engine)),
    m_system(system),
    m_grid(std::move(grid)),
    m_lda_functional(lda_functional),
    m_gga_functional(0),
    m_b2g_map(new std::size_t[m_bs_info.m_no_contractions]),
    m_g2b_map(new std::size_t[m_bs_info.m_no_contractions]),
    m_block_indices(new std::size_t[m_bs_info.m_no_contractions]),
    m_max_cache_size(max_cache_size),
    m_cache_size(0)
{
    m_xc_ints[_index(SPIN_ALPHA, SPIN_ALPHA)] = arma::zeros<arma::mat>(
        m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

    m_xc_ints[_index(SPIN_ALPHA, SPIN_BETA)] = arma::zeros<arma::mat>(
        m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

    m_xc_ints[_index(SPIN_BETA, SPIN_BETA)] = arma::zeros<arma::mat>(
        m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

    m_overlap_buf[0].reset(new double[(m_bs_info.m_no_contractions *
                                       (m_bs_info.m_no_contractions + 1)) /
                                      2]);
}

XCKernelGenerator::XCKernelGenerator(
    boost::shared_ptr<const System> system,
    std::unique_ptr<Grid> grid,
    std::unique_ptr<AOValueEngine> ao_value_engine,
    GGAXCFunctional gga_functional,
    std::size_t max_cache_size) :
    GridIntegralImplementation(system, std::move(ao_value_engine)),
    m_system(system),
    m_grid(std::move(grid)),
    m_lda_functional(0),
    m_gga_functional(gga_functional),
    m_b2g_map(new std::size_t[m_bs_info.m_no_contractions]),
    m_g2b_map(new std::size_t[m_bs_info.m_no_contractions]),
    m_block_indices(new std::size_t[m_bs_info.m_no_contractions]),
    m_max_cache_size(max_cache_size),
    m_cache_size(0)
{
    m_xc_ints[_index(SPIN_ALPHA, SPIN_ALPHA)] = arma::zeros<arma::mat>(
        m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

    m_xc_ints[_index(SPIN_ALPHA, SPIN_BETA)] = arma::zeros<arma::mat>(
        m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

    m_xc_ints[_index(SPIN_BETA, SPIN_BETA)] = arma::zeros<arma::mat>(
        m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

    const std::size_t n =
        (m_bs_info.m_no_contractions * (m_bs_info.m_no_contractions + 1)) / 2;

    for (int i = 0; i < 4; ++i)
        m_overlap_buf[i].reset(new double[n]);
}

void XCKernelGenerator::set_density_matrix(const arma::mat& P_alpha,
                                           const arma::mat& P_beta,
                                           const arma::mat& fake_P_alpha,
                                           const arma::mat& fake_P_beta)
{
    Logger::Section section(Log::instance(), "grid integration");

    m_P[SPIN_ALPHA] = P_alpha;
    m_P[SPIN_BETA] = P_beta;
    m_fake_P[SPIN_ALPHA] = fake_P_alpha;
    m_fake_P[SPIN_BETA] = fake_P_beta;

    m_density_integral = 0;

    m_block_ao_data_cache_hits = 0;
    m_block_ao_data_cache_misses = 0;

    // Note: I assume that no matter how the expression is actually
    // calculated, difference between _exactly_ the same matrices should
    // give _exactly_ 0. Fingers crossed...
    const bool unpolarized = norm(P_alpha - P_beta, "inf") == 0;

    if (unpolarized)
        update_unpolarized();
    else
        update_polarized();

    const double cache_hit_ratio =
        double(m_block_ao_data_cache_hits) /
        (m_block_ao_data_cache_hits + m_block_ao_data_cache_misses);

    Log::instance().write("ao_cache_hit_ratio", cache_hit_ratio);

    const std::size_t n = m_system->no_electrons();
    const double d = m_density_integral - n;

    Log::instance().write("absolute_grid_accuracy", -std::log10(std::abs(d)));
    Log::instance().write("relative_grid_accuracy",
                          -std::log10(std::abs(d) / n));
}

void XCKernelGenerator::update_polarized()
{
    m_xc_ints[SPIN_ALPHA] = arma::zeros<arma::mat>(m_bs_info.m_no_contractions,
                                                   m_bs_info.m_no_contractions);

    m_xc_ints[SPIN_BETA] = arma::zeros<arma::mat>(m_bs_info.m_no_contractions,
                                                  m_bs_info.m_no_contractions);

    {
        std::unique_ptr<Dispatcher> d(dispatcher(m_grid->no_blocks()));

        while (const Dispatcher::TaskInfo task_info = d->get_task()) {

            // for each grid block...
            for (std::size_t b = task_info->first; b < task_info->second; ++b)
                update_block_polarized(b);
        }
    }

    reduce_polarized();
}

void XCKernelGenerator::update_unpolarized()
{
    m_xc_ints[_index(SPIN_ALPHA, SPIN_ALPHA)] = arma::zeros<arma::mat>(
        m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

    m_xc_ints[_index(SPIN_ALPHA, SPIN_BETA)] = arma::zeros<arma::mat>(
        m_bs_info.m_no_contractions, m_bs_info.m_no_contractions);

    {
        std::unique_ptr<Dispatcher> d(dispatcher(m_grid->no_blocks()));

        while (const Dispatcher::TaskInfo task_info = d->get_task()) {

            // for each grid block...
            for (std::size_t b = task_info->first; b < task_info->second; ++b)
                update_block_unpolarized(b);
        }
    }

    reduce_unpolarized();

    m_xc_ints[_index(SPIN_BETA, SPIN_BETA)] =
        m_xc_ints[_index(SPIN_ALPHA, SPIN_ALPHA)];
}

boost::shared_ptr<const GridIntegralImplementation::BlockAOData>
XCKernelGenerator::get_block_data(std::size_t block_idx,
                                  boost::shared_ptr<const Grid::Block> block)
{
    // retrieve or create block AO data, cache if possible
    const BlockAODataCache::const_iterator i =
        m_block_ao_data_cache.find(block_idx);

    boost::shared_ptr<const BlockAOData> data;

    if (i != m_block_ao_data_cache.end()) {
        m_block_ao_data_cache_hits += 1;
        data = (*i).second;
    } else {
        m_block_ao_data_cache_misses += 1;
        data = block_ao_data(*block, threshold, m_gga_functional ? 1 : 0);

        const std::size_t n = data->no_contractions *
                              ((*m_gga_functional ? 4 : 1) * sizeof(double) +
                               sizeof(std::size_t));

        if (m_cache_size + n < m_max_cache_size) {
            m_block_ao_data_cache.insert(std::make_pair(block_idx, data));
            m_cache_size += n;
        }
    }

    return data;
}

std::size_t
XCKernelGenerator::initialize_block_mapping(const Grid::Block& block)
{
    const std::size_t no_block_shells = block.block_significant_shells.size();

    const std::size_t* const block_shells =
        &(block.block_significant_shells[0]);

    std::size_t no_block_contractions = 0;
    for (std::size_t i = 0; i < no_block_shells; ++i)
        no_block_contractions += m_bs_info.m_shell_sizes[block_shells[i]];

    std::size_t j = 0;
    for (std::size_t i = 0; i < no_block_shells; ++i) {
        const std::size_t first_contraction =
            m_bs_info.m_first_contraction_in_shell[block_shells[i]];
        const std::size_t no_contractions =
            m_bs_info.m_shell_sizes[block_shells[i]];
        for (std::size_t c = 0; c < no_contractions; ++c) {
            m_b2g_map[j] = first_contraction + c;
            m_g2b_map[first_contraction + c] = j;
            j += 1;
        }
    }

    return no_block_contractions;
}

void XCKernelGenerator::update_block_polarized(std::size_t b)
{
    // initialize block-specific data
    boost::shared_ptr<const Grid::Block> block = m_grid->get_block(b);

    const std::size_t no_block_contractions = initialize_block_mapping(*block);

    m_block_P[SPIN_ALPHA].resize(no_block_contractions, false);
    m_block_P[SPIN_BETA].resize(no_block_contractions, false);

    for (std::size_t i = 0; i < no_block_contractions; ++i) {
        double* NIEDOIDA_RESTRICT p_a = &m_block_P[SPIN_ALPHA](i, 0);
        double* NIEDOIDA_RESTRICT p_b = &m_block_P[SPIN_BETA](i, 0);

        double* NIEDOIDA_RESTRICT q_a = &m_P[SPIN_ALPHA](m_b2g_map[i], 0);
        double* NIEDOIDA_RESTRICT q_b = &m_P[SPIN_BETA](m_b2g_map[i], 0);

        for (std::size_t j = 0; j <= i; ++j) {
            const std::size_t t = m_b2g_map[j];
            p_a[j] = q_a[t];
            p_b[j] = q_b[t];
        }
    }

    m_block_xc_ints[SPIN_ALPHA] =
        arma::zeros<arma::mat>(no_block_contractions, no_block_contractions);
    m_block_xc_ints[SPIN_BETA] =
        arma::zeros<arma::mat>(no_block_contractions, no_block_contractions);

    // retrieve AO data
    boost::shared_ptr<const BlockAOData> data = get_block_data(b, block);

    // calculate the integrals
    if (m_gga_functional)
        update_block_gga_polarized(*block, *data);
    else
        update_block_lda_polarized(*block, *data);

    // propagate the block integrals to global matrices
    for (std::size_t i = 0; i < no_block_contractions; ++i) {
        double* NIEDOIDA_RESTRICT p_a = &m_block_xc_ints[SPIN_ALPHA](i, 0);
        double* NIEDOIDA_RESTRICT p_b = &m_block_xc_ints[SPIN_BETA](i, 0);

        double* NIEDOIDA_RESTRICT q_a = &m_xc_ints[SPIN_ALPHA](m_b2g_map[i], 0);
        double* NIEDOIDA_RESTRICT q_b = &m_xc_ints[SPIN_BETA](m_b2g_map[i], 0);

        for (std::size_t j = 0; j <= i; ++j) {
            const std::size_t t = m_b2g_map[j];
            q_a[t] += p_a[j];
            q_b[t] += p_b[j];
        }
    }
}

void XCKernelGenerator::update_block_unpolarized(std::size_t b)
{
    // initialize block-specific data
    boost::shared_ptr<const Grid::Block> block = m_grid->get_block(b);

    const std::size_t no_block_contractions = initialize_block_mapping(*block);

    m_block_P[SPIN_ALPHA].resize(no_block_contractions, false);
    m_block_fake_P[SPIN_ALPHA].resize(no_block_contractions, false);

    // a to zrobic takze dla m_block_fake_P

    for (std::size_t i = 0; i < no_block_contractions; ++i) {
        double* NIEDOIDA_RESTRICT p_a = &m_block_P[SPIN_ALPHA](i, 0);

        double* NIEDOIDA_RESTRICT q_a = &m_P[SPIN_ALPHA](m_b2g_map[i], 0);

        double* NIEDOIDA_RESTRICT fp_a = &m_block_fake_P[SPIN_ALPHA](i, 0);

        double* NIEDOIDA_RESTRICT fq_a = &m_fake_P[SPIN_ALPHA](m_b2g_map[i], 0);

        for (std::size_t j = 0; j <= i; ++j) {
            const std::size_t t = m_b2g_map[j];
            p_a[j] = q_a[t];
            fp_a[j] = fq_a[t];
        }
    }

    m_block_xc_ints[_index(SPIN_ALPHA, SPIN_ALPHA)] =
        arma::zeros<arma::mat>(no_block_contractions, no_block_contractions);

    m_block_xc_ints[_index(SPIN_ALPHA, SPIN_BETA)] =
        arma::zeros<arma::mat>(no_block_contractions, no_block_contractions);

    // retrieve AO data
    boost::shared_ptr<const BlockAOData> data = get_block_data(b, block);

    // calculate the integrals
    if (m_gga_functional)
        update_block_gga_unpolarized(*block, *data);
    else
        update_block_lda_unpolarized(*block, *data);

    // propagate the block integrals to global matrices
    for (std::size_t i = 0; i < no_block_contractions; ++i) {
        double* NIEDOIDA_RESTRICT p_a =
            &m_block_xc_ints[_index(SPIN_ALPHA, SPIN_ALPHA)](i, 0);
        double* NIEDOIDA_RESTRICT p_ab =
            &m_block_xc_ints[_index(SPIN_ALPHA, SPIN_BETA)](i, 0);

        double* NIEDOIDA_RESTRICT q_a =
            &m_xc_ints[_index(SPIN_ALPHA, SPIN_ALPHA)](m_b2g_map[i], 0);
        double* NIEDOIDA_RESTRICT q_ab =
            &m_xc_ints[_index(SPIN_ALPHA, SPIN_BETA)](m_b2g_map[i], 0);

        for (std::size_t j = 0; j <= i; ++j) {
            const std::size_t t = m_b2g_map[j];
            q_a[t] += p_a[j];
            q_ab[t] += p_ab[j];
        }
    }
}

void XCKernelGenerator::update_block_lda_polarized(const Grid::Block& block,
                                                   const BlockAOData& data)
{
    // in each point of the block...
    for (std::size_t p = 0; p < block.size; ++p) {

        if (data.point_ao_data[p].no_contractions == 0)
            continue;

        // calculate overlap
        const std::size_t n = data.point_ao_data[p].no_contractions;
        const double* const v = data.point_ao_data[p].values;
        const std::size_t* NIEDOIDA_RESTRICT const indices =
            data.point_ao_data[p].indices;

        for (std::size_t i = 0; i < n; ++i)
            m_block_indices[i] = m_g2b_map[indices[i]];

        double* const overlap = m_overlap_buf[0].get();
        calc_overlap(n, v, overlap);

        // then density
        std::pair<double, double> rho =
            density(m_block_P, n, overlap, m_block_indices.get());

        // account for numerical inaccuracies - density cannot be negative
        if (rho.first < 0)
            rho.first = 0;

        if (rho.second < 0)
            rho.second = 0;

        // then energy, potential & kernel
        XCFunctionalData functional =
            m_lda_functional(rho.first, rho.second, 2);

        // and finally, form the Fock matrix contribution
        sandwich_lda_polarized(
            functional, block.weights[p], data.point_ao_data[p], overlap);

        m_density_integral += (rho.first + rho.second) * block.weights[p];
    }
}

void XCKernelGenerator::update_block_lda_unpolarized(const Grid::Block& block,
                                                     const BlockAOData& data)
{
    // in each point of the block...
    for (std::size_t p = 0; p < block.size; ++p) {

        if (data.point_ao_data[p].no_contractions == 0)
            continue;

        // calculate overlap
        const std::size_t n = data.point_ao_data[p].no_contractions;
        const double* const v = data.point_ao_data[p].values;
        const std::size_t* NIEDOIDA_RESTRICT const indices =
            data.point_ao_data[p].indices;

        for (std::size_t i = 0; i < n; ++i)
            m_block_indices[i] = m_g2b_map[indices[i]];

        double* const overlap = m_overlap_buf[0].get();
        calc_overlap(n, v, overlap);

        // then density
        double rho =
            density(m_block_P[SPIN_ALPHA], n, overlap, m_block_indices.get());

        // then pseudodensity
        double fake_rho =
            density(m_block_fake_P[SPIN_ALPHA],
                    n,
                    overlap,
                    m_block_indices.get()); // wskaznik na tablice z mapowaniem

        // account for numerical inaccuracies - density cannot be negative
        if (rho < 0)
            rho = 0;

        // then energy, potential & kernel
        XCFunctionalData functional = m_lda_functional(rho, rho, 2);

        // and finally, form the Fock matrix contribution
        sandwich_lda_unpolarized(functional,
                                 block.weights[p],
                                 data.point_ao_data[p],
                                 overlap,
                                 fake_rho);

        m_density_integral += 2 * rho * block.weights[p];
    }
}

void XCKernelGenerator::update_block_gga_polarized(const Grid::Block& block,
                                                   const BlockAOData& data)
{
    // in each point of the block...
    for (std::size_t p = 0; p < block.size; ++p) {

        if (data.point_ao_data[p].no_contractions == 0)
            continue;

        // form the overlap
        const std::size_t n = data.point_ao_data[p].no_contractions;
        const double* const v = data.point_ao_data[p].values;

        double* const overlap = m_overlap_buf[0].get();
        calc_overlap(n, v, overlap);

        const std::size_t* NIEDOIDA_RESTRICT const indices =
            data.point_ao_data[p].indices;

        for (std::size_t i = 0; i < n; ++i)
            m_block_indices[i] = m_g2b_map[indices[i]];

        // calculate density
        std::pair<double, double> rho =
            density(m_block_P, n, overlap, m_block_indices.get());

        // account for numerical inaccuracies - density cannot be negative
        if (rho.first < 0)
            rho.first = 0;

        if (rho.second < 0)
            rho.second = 0;

        // form the overlap derivs and calculate density derivs
        const double* const d_x = data.point_ao_data[p].derivs_x;
        const double* const d_y = data.point_ao_data[p].derivs_y;
        const double* const d_z = data.point_ao_data[p].derivs_z;

        double* const ds_x = m_overlap_buf[1].get();
        double* const ds_y = m_overlap_buf[2].get();
        double* const ds_z = m_overlap_buf[3].get();

        calc_overlap_derivs(n, v, d_x, ds_x);
        calc_overlap_derivs(n, v, d_y, ds_y);
        calc_overlap_derivs(n, v, d_z, ds_z);

        const std::pair<double, double> drho_dx =
            density(m_block_P, n, ds_x, m_block_indices.get());
        const std::pair<double, double> drho_dy =
            density(m_block_P, n, ds_y, m_block_indices.get());
        const std::pair<double, double> drho_dz =
            density(m_block_P, n, ds_z, m_block_indices.get());

        // calculate density gradient norm
        const double gamma_aa = std::sqrt(drho_dx.first * drho_dx.first +
                                          drho_dy.first * drho_dy.first +
                                          drho_dz.first * drho_dz.first);

        const double gamma_ab = std::sqrt(drho_dx.first * drho_dx.second +
                                          drho_dy.first * drho_dy.second +
                                          drho_dz.first * drho_dz.second);

        const double gamma_bb = std::sqrt(drho_dx.second * drho_dx.second +
                                          drho_dy.second * drho_dy.second +
                                          drho_dz.second * drho_dz.second);

        // then energy, potential & kernel
        XCFunctionalData functional = m_gga_functional(
            rho.first, rho.second, gamma_aa, gamma_ab, gamma_bb, 2);

        // finally, form the Fock matrix contribution
        const double rho_grad[2][3] = {
            {drho_dx.first, drho_dy.first, drho_dz.first},
            {drho_dx.second, drho_dy.second, drho_dz.second}};

        sandwich_gga_polarized(functional,
                               block.weights[p],
                               rho_grad,
                               data.point_ao_data[p],
                               overlap,
                               ds_x,
                               ds_y,
                               ds_z);

        m_density_integral += (rho.first + rho.second) * block.weights[p];
    }
}

void XCKernelGenerator::update_block_gga_unpolarized(const Grid::Block& block,
                                                     const BlockAOData& data)
{
    // in each point of the block...
    for (std::size_t p = 0; p < block.size; ++p) {

        if (data.point_ao_data[p].no_contractions == 0)
            continue;

        // form the overlap
        const std::size_t n = data.point_ao_data[p].no_contractions;
        const double* const v = data.point_ao_data[p].values;

        double* const overlap = m_overlap_buf[0].get();
        calc_overlap(n, v, overlap);

        const std::size_t* NIEDOIDA_RESTRICT const indices =
            data.point_ao_data[p].indices;

        for (std::size_t i = 0; i < n; ++i)
            m_block_indices[i] = m_g2b_map[indices[i]];

        // calculate density
        double rho =
            density(m_block_P[SPIN_ALPHA], n, overlap, m_block_indices.get());

        // then pseudodensity
        double fake_rho =
            density(m_block_fake_P[SPIN_ALPHA],
                    n,
                    overlap,
                    m_block_indices.get()); // wskaznik na tablice z mapowaniem

        // account for numerical inaccuracies - density cannot be negative
        if (rho < 0)
            rho = 0;

        // form the overlap derivs
        const double* const d_x = data.point_ao_data[p].derivs_x;
        const double* const d_y = data.point_ao_data[p].derivs_y;
        const double* const d_z = data.point_ao_data[p].derivs_z;

        double* const ds_x = m_overlap_buf[1].get();
        double* const ds_y = m_overlap_buf[2].get();
        double* const ds_z = m_overlap_buf[3].get();

        calc_overlap_derivs(n, v, d_x, ds_x);
        calc_overlap_derivs(n, v, d_y, ds_y);
        calc_overlap_derivs(n, v, d_z, ds_z);

        // calculate density derivs
        const double drho_dx =
            density(m_block_P[SPIN_ALPHA], n, ds_x, m_block_indices.get());
        const double drho_dy =
            density(m_block_P[SPIN_ALPHA], n, ds_y, m_block_indices.get());
        const double drho_dz =
            density(m_block_P[SPIN_ALPHA], n, ds_z, m_block_indices.get());

        // calculate pseudodensity derivs
        const double dfakerho_dx =
            density(m_block_fake_P[SPIN_ALPHA], n, ds_x, m_block_indices.get());
        const double dfakerho_dy =
            density(m_block_fake_P[SPIN_ALPHA], n, ds_y, m_block_indices.get());
        const double dfakerho_dz =
            density(m_block_fake_P[SPIN_ALPHA], n, ds_z, m_block_indices.get());

        // calculate density gradient norm
        const double gamma =
            drho_dx * drho_dx + drho_dy * drho_dy + drho_dz * drho_dz;

        // then energy, potential & kernel
        XCFunctionalData functional =
            m_gga_functional(rho, rho, gamma, gamma, gamma, 2);

        // finally, form the Fock matrix contribution
        const double rho_grad[3] = {drho_dx, drho_dy, drho_dz};

        const double fakerho_grad[3] = {dfakerho_dx, dfakerho_dy, dfakerho_dz};

        sandwich_gga_unpolarized(functional,
                                 block.weights[p],
                                 rho_grad,
                                 fake_rho,
                                 fakerho_grad,
                                 data.point_ao_data[p],
                                 overlap,
                                 ds_x,
                                 ds_y,
                                 ds_z);

        m_density_integral += 2 * rho * block.weights[p];
    }
}

void XCKernelGenerator::sandwich_lda_polarized(
    const XCFunctionalData& functional,
    double weight,
    const PointAOData& data,
    const double* overlap)
{
    const double weight_alpha = functional.de_dra * weight;
    const double weight_beta = functional.de_drb * weight;

    const double cutoff =
        threshold / (std::max(weight_alpha, weight_beta, abs_less<double>()) *
                     data.max_value);

    if (data.max_value < cutoff)
        return;

    arma::mat& xc_ints_alpha = m_block_xc_ints[SPIN_ALPHA];
    arma::mat& xc_ints_beta = m_block_xc_ints[SPIN_BETA];

    const std::size_t* NIEDOIDA_RESTRICT const indices = m_block_indices.get();

    for (std::size_t i = 0; i < data.no_contractions; ++i) {
        if (std::abs(data.values[i]) < cutoff) {
            overlap += i + 1;
            continue;
        }
        const std::size_t c1 = indices[i];
        double* NIEDOIDA_RESTRICT xc_a = &xc_ints_alpha(c1, 0);
        double* NIEDOIDA_RESTRICT xc_b = &xc_ints_beta(c1, 0);
        for (std::size_t j = 0; j <= i; ++j) {
            const std::size_t c2 = indices[j];
            const double value = *overlap++;
            xc_a[c2] += weight_alpha * value;
            xc_b[c2] += weight_beta * value;
        }
    }
}

void XCKernelGenerator::sandwich_lda_unpolarized(
    const XCFunctionalData& functional,
    double weight,
    const PointAOData& data,
    const double* overlap,
    const double fake_rho)
{
    const double waa = functional.d2e_drara * fake_rho * weight;
    const double wab = functional.d2e_drarb * fake_rho * weight;

    const double cutoff =
        threshold / (std::max(waa, wab, abs_less<double>()) * data.max_value);

    if (data.max_value < cutoff)
        return;

    arma::mat& xc_ints_aa = m_block_xc_ints[_index(SPIN_ALPHA, SPIN_ALPHA)];
    arma::mat& xc_ints_ab = m_block_xc_ints[_index(SPIN_ALPHA, SPIN_BETA)];

    const std::size_t* NIEDOIDA_RESTRICT const indices = m_block_indices.get();

    for (std::size_t i = 0; i < data.no_contractions; ++i) {
        if (std::abs(data.values[i]) < cutoff) {
            overlap += i + 1;
            continue;
        }
        const std::size_t c1 = indices[i];
        double* NIEDOIDA_RESTRICT xc_aa = &xc_ints_aa(c1, 0);
        double* NIEDOIDA_RESTRICT xc_ab = &xc_ints_ab(c1, 0);
        for (std::size_t j = 0; j <= i; ++j) {
            const std::size_t c2 = indices[j];
            const double value = *overlap++;
            xc_aa[c2] += waa * value;
            xc_ab[c2] += wab * value;
        }
    }
}

void XCKernelGenerator::sandwich_gga_polarized(
    const XCFunctionalData& functional,
    double weight,
    const double rho_grad[2][3],
    const PointAOData& data,
    const double* overlap,
    const double* overlap_derivs_x,
    const double* overlap_derivs_y,
    const double* overlap_derivs_z)
{
    const double cutoff = threshold / (std::max(functional.de_dra * weight,
                                                functional.de_drb * weight,
                                                abs_less<double>()) *
                                       data.max_value);

    if (data.max_value < cutoff)
        return;

    arma::mat& xc_ints_alpha = m_block_xc_ints[SPIN_ALPHA];
    arma::mat& xc_ints_beta = m_block_xc_ints[SPIN_BETA];

    const std::size_t* NIEDOIDA_RESTRICT const indices = m_block_indices.get();

    for (std::size_t i = 0; i < data.no_contractions; ++i) {
        if (std::abs(data.values[i]) < cutoff) {
            overlap += i + 1;
            overlap_derivs_x += i + 1;
            overlap_derivs_y += i + 1;
            overlap_derivs_z += i + 1;
            continue;
        }
        const std::size_t c1 = indices[i];
        double* NIEDOIDA_RESTRICT xc_a = &xc_ints_alpha(c1, 0);
        double* NIEDOIDA_RESTRICT xc_b = &xc_ints_beta(c1, 0);
        for (std::size_t j = 0; j <= i; ++j) {
            const std::size_t c2 = indices[j];
            const double s = *overlap++;
            const double ds_dx = *overlap_derivs_x++;
            const double ds_dy = *overlap_derivs_y++;
            const double ds_dz = *overlap_derivs_z++;

            const double ta = rho_grad[SPIN_ALPHA][0] * ds_dx +
                              rho_grad[SPIN_ALPHA][1] * ds_dy +
                              rho_grad[SPIN_ALPHA][2] * ds_dz;

            const double tb = rho_grad[SPIN_BETA][0] * ds_dx +
                              rho_grad[SPIN_BETA][1] * ds_dy +
                              rho_grad[SPIN_BETA][2] * ds_dz;

            xc_a[c2] +=
                weight * (functional.de_dra * s + 2 * functional.de_dgaa * ta +
                          functional.de_dgab * tb);
            xc_b[c2] +=
                weight * (functional.de_drb * s + 2 * functional.de_dgbb * tb +
                          functional.de_dgab * ta);
        }
    }
}

void XCKernelGenerator::sandwich_gga_unpolarized(
    const XCFunctionalData& functional,
    double weight,
    const double rho_grad[3],
    const double fake_rho,
    const double fakerho_grad[3],
    const PointAOData& data,
    const double* overlap,
    const double* overlap_derivs_x,
    const double* overlap_derivs_y,
    const double* overlap_derivs_z)
{

    const double gradrho_x_grad_fakerho = rho_grad[0] * fakerho_grad[0] +
                                          rho_grad[1] * fakerho_grad[1] +
                                          rho_grad[2] * fakerho_grad[2];

    // na wstep dla samego integrals_aa, za chwile poszerzyc o max z
    // integrals_aa, integrals_ab

    const double m_max = std::max(data.max_value, data.max_deriv);

    //             const double integrals_aa =
    //                 2 * fta * functional.de_dgaa +
    //                 s * functional.d2e_drara * fake_rho +
    //                 2 * s * functional.d2e_dragaa * gradrho_x_grad_fakerho +
    //                 2 * ta * functional.d2e_dragaa * fake_rho +
    //                 ta * functional.d2e_dragab * fake_rho +
    //                 s * functional.d2e_dragab * gradrho_x_grad_fakerho +
    //                 4 * ta * functional.d2e_dgaagaa * gradrho_x_grad_fakerho
    //                 + 2 * ta * functional.d2e_dgaagab *
    //                 gradrho_x_grad_fakerho + 2 * ta * functional.d2e_dgaagab
    //                 * gradrho_x_grad_fakerho + ta * functional.d2e_dgabgab *
    //                 gradrho_x_grad_fakerho;

    const double rho_grad_sum = (rho_grad[0] + rho_grad[1] + rho_grad[2]);
    const double fake_rho_grad_sum =
        (fakerho_grad[0] + fakerho_grad[1] + fakerho_grad[2]);

    const double int_aa_1 = 2 * functional.de_dgaa * weight;
    const double int_aa_2 = functional.d2e_drara * fake_rho * weight;
    const double int_aa_3 =
        2 * functional.d2e_dragaa * gradrho_x_grad_fakerho * weight;
    const double int_aa_4 = 2 * functional.d2e_dragaa * fake_rho * weight;
    const double int_aa_5 = functional.d2e_dragab * fake_rho * weight;
    const double int_aa_6 =
        functional.d2e_dragab * gradrho_x_grad_fakerho * weight;
    const double int_aa_7 =
        4 * functional.d2e_dgaagaa * gradrho_x_grad_fakerho * weight;
    const double int_aa_8 =
        2 * functional.d2e_dgaagab * gradrho_x_grad_fakerho * weight;
    const double int_aa_9 = int_aa_8;
    const double int_aa_10 =
        functional.d2e_dgabgab * gradrho_x_grad_fakerho * weight;

    const double max_int_aa_1 = fake_rho_grad_sum * int_aa_1;
    const double max_int_aa_2 = data.max_value * int_aa_2;
    const double max_int_aa_3 = data.max_value * int_aa_3;
    const double max_int_aa_4 = rho_grad_sum * int_aa_4;
    const double max_int_aa_5 = rho_grad_sum * int_aa_5;
    const double max_int_aa_6 = data.max_value * int_aa_6;
    const double max_int_aa_7 = rho_grad_sum * int_aa_7;
    const double max_int_aa_8 = rho_grad_sum * int_aa_8;
    const double max_int_aa_9 = rho_grad_sum * int_aa_9;
    const double max_int_aa_10 = rho_grad_sum * int_aa_10;

    //             const double integrals_ab =
    //                 fta * functional.de_dgab +
    //                 s * functional.d2e_drarb * fake_rho +
    //                 2 * s * functional.d2e_dragbb * gradrho_x_grad_fakerho +
    //                 2 * ta * functional.d2e_drbgaa * fake_rho +
    //                 s * functional.d2e_dragab * gradrho_x_grad_fakerho +
    //                 ta * functional.d2e_drbgab * fake_rho +
    //                 4 * ta * functional.d2e_dgaagbb * gradrho_x_grad_fakerho
    //                 + 2 * ta * functional.d2e_dgaagab *
    //                 gradrho_x_grad_fakerho + 2 * ta * functional.d2e_dgbbgab
    //                 * gradrho_x_grad_fakerho + ta * functional.d2e_dgabgab *
    //                 gradrho_x_grad_fakerho;

    const double int_ab_1 = functional.de_dgab * weight;
    const double int_ab_2 = functional.d2e_drarb * fake_rho * weight;
    const double int_ab_3 =
        2 * functional.d2e_dragbb * gradrho_x_grad_fakerho * weight;
    const double int_ab_4 = 2 * functional.d2e_drbgaa * fake_rho * weight;
    const double int_ab_5 =
        functional.d2e_dragab * gradrho_x_grad_fakerho * weight;
    const double int_ab_6 = functional.d2e_drbgab * fake_rho * weight;
    const double int_ab_7 =
        4 * functional.d2e_dgaagbb * gradrho_x_grad_fakerho * weight;
    const double int_ab_8 =
        2 * functional.d2e_dgaagab * gradrho_x_grad_fakerho * weight;
    const double int_ab_9 =
        2 * functional.d2e_dgbbgab * gradrho_x_grad_fakerho * weight;
    const double int_ab_10 =
        functional.d2e_dgabgab * gradrho_x_grad_fakerho * weight;

    const double max_int_ab_1 = fake_rho_grad_sum * int_ab_1;
    const double max_int_ab_2 = data.max_value * int_ab_2;
    const double max_int_ab_3 = data.max_value * int_ab_3;
    const double max_int_ab_4 = rho_grad_sum * int_ab_4;
    const double max_int_ab_5 = data.max_value * int_ab_5;
    const double max_int_ab_6 = rho_grad_sum * int_ab_6;
    const double max_int_ab_7 = rho_grad_sum * int_ab_7;
    const double max_int_ab_8 = rho_grad_sum * int_ab_8;
    const double max_int_ab_9 = rho_grad_sum * int_ab_9;
    const double max_int_ab_10 = rho_grad_sum * int_ab_10;

    const double max_of_all_ints = std::max(
        std::max(std::max(std::max(std::max(max_int_aa_1, max_int_aa_2),
                                   std::max(max_int_aa_3, max_int_aa_4)),
                          std::max(std::max(max_int_aa_5, max_int_aa_6),
                                   std::max(max_int_aa_7, max_int_aa_8))),
                 std::max(std::max(std::max(max_int_ab_1, max_int_ab_2),
                                   std::max(max_int_ab_3, max_int_ab_4)),
                          std::max(std::max(max_int_ab_5, max_int_ab_6),
                                   std::max(max_int_ab_7, max_int_ab_8)))),
        std::max(std::max(max_int_aa_9, max_int_aa_10),
                 std::max(max_int_ab_9, max_int_ab_10)));

    const double cutoff = 0;
    // theshold / max_of_all_ints;

    if (data.max_value < cutoff)
        return;

    arma::mat& xc_ints_aa = m_block_xc_ints[_index(SPIN_ALPHA, SPIN_ALPHA)];
    arma::mat& xc_ints_ab = m_block_xc_ints[_index(SPIN_ALPHA, SPIN_BETA)];

    const std::size_t* NIEDOIDA_RESTRICT const indices = m_block_indices.get();

    for (std::size_t i = 0; i < data.no_contractions; ++i) {
        if (std::abs(data.values[i]) < cutoff) {
            overlap += i + 1;
            overlap_derivs_x += i + 1;
            overlap_derivs_y += i + 1;
            overlap_derivs_z += i + 1;
            continue;
        }
        const std::size_t c1 = indices[i];
        double* NIEDOIDA_RESTRICT xc_aa = &xc_ints_aa(c1, 0);
        double* NIEDOIDA_RESTRICT xc_ab = &xc_ints_ab(c1, 0);
        for (std::size_t j = 0; j <= i; ++j) {
            const std::size_t c2 = indices[j];
            const double s = *overlap++;
            const double ds_dx = *overlap_derivs_x++;
            const double ds_dy = *overlap_derivs_y++;
            const double ds_dz = *overlap_derivs_z++;

            const double ta =
                rho_grad[0] * ds_dx + rho_grad[1] * ds_dy + rho_grad[2] * ds_dz;

            const double fta = fakerho_grad[0] * ds_dx +
                               fakerho_grad[1] * ds_dy +
                               fakerho_grad[2] * ds_dz;

            const double integrals_aa =
                2 * fta * functional.de_dgaa +
                s * functional.d2e_drara * fake_rho +
                2 * s * functional.d2e_dragaa * gradrho_x_grad_fakerho +
                2 * ta * functional.d2e_dragaa * fake_rho +
                ta * functional.d2e_dragab * fake_rho +
                s * functional.d2e_dragab * gradrho_x_grad_fakerho +
                4 * ta * functional.d2e_dgaagaa * gradrho_x_grad_fakerho +
                2 * ta * functional.d2e_dgaagab * gradrho_x_grad_fakerho +
                2 * ta * functional.d2e_dgaagab * gradrho_x_grad_fakerho +
                ta * functional.d2e_dgabgab * gradrho_x_grad_fakerho;

            const double integrals_ab =
                fta * functional.de_dgab + s * functional.d2e_drarb * fake_rho +
                2 * s * functional.d2e_dragbb * gradrho_x_grad_fakerho +
                2 * ta * functional.d2e_drbgaa * fake_rho +
                s * functional.d2e_dragab * gradrho_x_grad_fakerho +
                ta * functional.d2e_drbgab * fake_rho +
                4 * ta * functional.d2e_dgaagbb * gradrho_x_grad_fakerho +
                2 * ta * functional.d2e_dgaagab * gradrho_x_grad_fakerho +
                2 * ta * functional.d2e_dgbbgab * gradrho_x_grad_fakerho +
                ta * functional.d2e_dgabgab * gradrho_x_grad_fakerho;

            xc_aa[c2] += weight * integrals_aa;
            xc_ab[c2] += weight * integrals_ab;
        }
    }
}

void XCKernelGenerator::reduce_polarized()
{
    const std::size_t n =
        m_bs_info.m_no_contractions * m_bs_info.m_no_contractions;

    arma::mat tmp = m_xc_ints[SPIN_ALPHA];
    MPI::COMM_WORLD.Allreduce(
        tmp.memptr(), m_xc_ints[SPIN_ALPHA].memptr(), n, MPI::DOUBLE, MPI::SUM);

    tmp = m_xc_ints[SPIN_BETA];
    MPI::COMM_WORLD.Allreduce(
        tmp.memptr(), m_xc_ints[SPIN_BETA].memptr(), n, MPI::DOUBLE, MPI::SUM);

    const double partial_density_integral = m_density_integral;
    MPI::COMM_WORLD.Allreduce(&partial_density_integral,
                              &m_density_integral,
                              1,
                              MPI::DOUBLE,
                              MPI::SUM);

    unsigned long t = m_block_ao_data_cache_hits;
    MPI::COMM_WORLD.Allreduce(
        &t, &m_block_ao_data_cache_hits, 1, MPI::UNSIGNED_LONG, MPI::SUM);

    t = m_block_ao_data_cache_misses;
    MPI::COMM_WORLD.Allreduce(
        &t, &m_block_ao_data_cache_misses, 1, MPI::UNSIGNED_LONG, MPI::SUM);
}

void XCKernelGenerator::reduce_unpolarized()
{
    const std::size_t n =
        m_bs_info.m_no_contractions * m_bs_info.m_no_contractions;

    arma::mat tmp = m_xc_ints[_index(SPIN_ALPHA, SPIN_ALPHA)];
    MPI::COMM_WORLD.Allreduce(
        tmp.memptr(),
        m_xc_ints[_index(SPIN_ALPHA, SPIN_ALPHA)].memptr(),
        n,
        MPI::DOUBLE,
        MPI::SUM);

    tmp = m_xc_ints[_index(SPIN_ALPHA, SPIN_BETA)];
    MPI::COMM_WORLD.Allreduce(tmp.memptr(),
                              m_xc_ints[_index(SPIN_ALPHA, SPIN_BETA)].memptr(),
                              n,
                              MPI::DOUBLE,
                              MPI::SUM);

    const double partial_density_integral = m_density_integral;
    MPI::COMM_WORLD.Allreduce(&partial_density_integral,
                              &m_density_integral,
                              1,
                              MPI::DOUBLE,
                              MPI::SUM);

    unsigned long t = m_block_ao_data_cache_hits;
    MPI::COMM_WORLD.Allreduce(
        &t, &m_block_ao_data_cache_hits, 1, MPI::UNSIGNED_LONG, MPI::SUM);

    t = m_block_ao_data_cache_misses;
    MPI::COMM_WORLD.Allreduce(
        &t, &m_block_ao_data_cache_misses, 1, MPI::UNSIGNED_LONG, MPI::SUM);
}

const arma::mat& XCKernelGenerator::integrals(Spin s1, Spin s2) const
{
    return m_xc_ints[_index(s1, s2)];
}
