/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef CPHF_HPP 
#define CPHF_HPP

#include<memory>
#include<vector>

#include<armadillo>
#include<petsc.h>

#include<core_kit/system.hpp>
#include<core_kit/integral_engine.hpp>
#include<core_kit/pseudo_fock_matrix_generator.hpp>
#include<scf_kit/scf.hpp>

namespace niedoida {
  namespace cphf {

    //#################################################################################
    //####################   CPHF_linearResponse     ##################################
    //#################################################################################

    /*
     * When the electronic Hamiltonian depends on an arbitrary parameter
     * so does the electronic wave function.
     * In the lowest nontrivial order the latter is quantified by the
     * wave function LCAO coefficients derivatives (with respect to the parameter).
     *
     * The derivatives may be calculated as a solution of CPHF equations system,
     * see eq. 27 in [1].
     *
     * CPHF_linearResponse interface class and its concrete subclasses
     * are to provide an implementation of calculations of
     * the wave function coefficients derivatives.
     * The implementation includes both:
     * (1) construction of the CPHF equations system, and
     * (2) solving of the system.
     *
     * The CPHF equations system is build up on the HF/DFT LCAO SCF methodology.
     * The equations take the SCF calculations results as their parameters.
     * Hence the concrete subclasses take the corresponding SCF calculations results
     * as their instances initialization parameters.
     *
     * The class follows the strategy design pattern --
     * allowing the two-electron integrals calculations
     * to be implemented in an arbitrary class.
     * The strategy is set during a CPHF_linearResponse
     * class instance initialization.
     *
     * Once a CPHF_linearResponse class instance is initialized
     * it may be reused many times to calculate the LCAO coefficients derivatives,
     * (each time with with respect to an arbitrary parameter
     * describing the Hamiltonian dependence).
     *
     * At the class client endpoint the calculations requires two member functions call.
     * (i)  solveCPHFequations_given_DDE member function call
     *      to perform the calculations and save the results internally
     *      (inside the solveCPHFequations_given_DDE class instance),
     * (ii) get_solution member function call to retrieve the saved results.
     *
     * The former function takes the Hamiltonian - its parameter dependency as its input.
     * The dependency is not defined directly, but by means of a set of mixed derivative
     * \frac{\partial^2 E}{\partial \kappa_{ar\sigma} \partial x} values.
     * where: x \in \mathbf{R} is the parameter introduced to describe the \hat H(x) dependence,
     *        \kappa_{ar\sigma} are the orbital rotation coefficients with
     *        a, r, \sigma indices denoting the occupied MO, virtual MO and the spin projection.
     *        E = E(x, \kappa) the mean value of \hat H(x) for the electronic state 
     *        corresponding to \kappa,
     * The values are arranged in the matrix layout as follows:
     * there are two matrices - one for each spin projection value;
     * the row index of the matrices corresponds to occupied MO and
     * the col index of the matrices corresponds to virtual MO.
     *
     * The calculation solutions -- the values of
     * \frac{\partial \kappa_{ar\sigma}}{partial x}
     * are arranged in matrix layout analogical to the layout described above:
     * there are two matrices - one for each spin projection value;
     * the row index of the matrices corresponds to occupied MO and
     * the col index of the matrices corresponds to virtual MO.
     * 
     * References:
     * [1] http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.707.1405&rep=rep1&type=pdf
     */

    /* 
     * Abstract class for common open/close shell interface.
     */
    class CPHF_linearResponse{
    public:
      virtual ~CPHF_linearResponse() = default;
      virtual void solveCPHFequations_given_DDE(
        const arma::mat & DDE_over_DxDkappa_alpha,
        const arma::mat & DDE_over_DxDkappa_beta) = 0;
      virtual arma::mat get_solution(core::Spin) const = 0;
      virtual bool is_restricted() const = 0;
    };


    /* 
     * Concrete class for open shell calculations.
     */
    class CPHF_linearResponse_UHF : public CPHF_linearResponse, boost::noncopyable  {
    private:
      const unsigned N;
      const unsigned Nocc_alpha;
      const unsigned Nocc_beta;
      const unsigned Nvirt_alpha;
      const unsigned Nvirt_beta;
      const arma::mat matS;
      const arma::mat matFreeC_alpha;
      const arma::mat matFreeC_beta;
      const arma::vec vecFreeEorb_alpha;
      const arma::vec vecFreeEorb_beta;
      const std::shared_ptr<const core::System> system;
      arma::mat Dkappa_over_Dx[2];
      void * ctx_ptr;
      Mat A;
      KSP ksp;
    public:
      CPHF_linearResponse_UHF(std::shared_ptr<const core::System> system,
        std::shared_ptr<const core::TwoElectronIntegralEngineFactory> ie_factory,
        const arma::mat& mo_coeffs_alpha,
        const arma::mat& mo_coeffs_beta,
        const arma::vec& mo_energies_alpha,
        const arma::vec& mo_energies_beta);
      CPHF_linearResponse_UHF(const CPHF_linearResponse_UHF &) = delete;
      const CPHF_linearResponse_UHF & operator=(const CPHF_linearResponse_UHF &) = delete;
      ~CPHF_linearResponse_UHF(); 
      void solveCPHFequations_given_DDE(
        const arma::mat & DDE_over_DxDkappa_alpha,
        const arma::mat & DDE_over_DxDkappa_beta) override;
      arma::mat get_solution(core::Spin) const override;
      bool is_restricted() const override;
    };


    /* 
     * Concrete class for closed shell calculations.
     */
    class CPHF_linearResponse_RHF : public CPHF_linearResponse, boost::noncopyable {
    private:
      const unsigned N;
      const unsigned Nocc;
      const unsigned Nvirt;
      const arma::mat matS;
      const arma::mat matFreeC;
      const arma::vec vecFreeEorb;
      const std::shared_ptr<const core::System> system;
      arma::mat Dkappa_over_Dx;
      void * ctx_ptr;
      Mat A;
      KSP ksp;
    public:
      CPHF_linearResponse_RHF(
        std::shared_ptr<const core::System> system,
        std::shared_ptr<const core::TwoElectronIntegralEngineFactory> ie_factory,
        const arma::mat& mo_coeffs,
        const arma::vec& mo_energies);
      CPHF_linearResponse_RHF(
        std::shared_ptr<const core::System> system,
        std::shared_ptr<const core::TwoElectronIntegralEngineFactory> ie_factory,
        std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen_factory,
        const arma::mat& mo_coeffs,
        const arma::vec& mo_energies);
      CPHF_linearResponse_RHF(const CPHF_linearResponse_RHF &) = delete;
      const CPHF_linearResponse_RHF & operator=(const CPHF_linearResponse_RHF &) = delete;
      ~CPHF_linearResponse_RHF();
      void solveCPHFequations_given_DDE(
        const arma::mat & DDE_over_DxDkappa_alpha,
        const arma::mat & DDE_over_DxDkappa_beta) override;
      arma::mat get_solution(core::Spin) const override;
      bool is_restricted() const override;
    };


    /*
     * The exception class thrown when
     * solving CPHF equation system fails.
     */
    class CPHF_linearResponse_solver_exception : public std::exception {
    private:
      int petsc_converged_reason;
      int petsc_iterations_number;
    public:  
      CPHF_linearResponse_solver_exception(int petsc_converged_reason, int petsc_iterations_number) noexcept:
      petsc_converged_reason(petsc_converged_reason),
        petsc_iterations_number(petsc_iterations_number){
      }
      virtual const char* what() const noexcept {
        std::ostringstream message_stream;
        message_stream << "CPHF equations solver NOT converged! ";
        message_stream << "PETSC KSPConvergedReason = " << petsc_converged_reason << ". ";
        message_stream << "PETSC iterations_number = " << petsc_iterations_number << ".";
        message_stream << std::endl;
        return message_stream.str().c_str();
      }
    };

    /*
     * SFC calculations has to be carried out
     * before the CPHF calculations are triggered.
     *
     * This helper function is a factory function for
     * creating a CPHF solver class (instance of a subclass of CPHF_linearResponse class)
     * based on a SCF solver class.
     *
     * For closed (open) shell SCF solver classes the function creates
     * closed (open) shell CPHF solver classes.
     * In this way the function provides a common closed/open shell API and
     * eliminates the needs of using the CPHF solver classes constructors on the client side.
     */
    std::shared_ptr<CPHF_linearResponse>
    make_CPHF_linearResponse(
      std::shared_ptr<const core::System> system,
      const scf::SCF & free_scf,
      std::shared_ptr<const core::TwoElectronIntegralEngineFactory> ie_factory);


    /*
     * The CPHF_linearResponse API utilizes the mixed derivative
     * \frac{\partial^2 E}{\partial \kappa_{ar\sigma} \partial x} values
     * instead of an explicit Hamiltonian - its parameter dependency definition.
     *
     * This is a helper function that generates the derivative values
     * for a very special, yet common Hamiltonian - its parameter dependency type:
     * \hat H(x;1...N) = \hat H_0(1...N) + x * sum_{n=1...N} H'(n)
     * where: N denotes the total number of electron,
     *        \hat H(x;1...N) and \hat H_0(1...N) denotes
     *        a ‘full’ and a ‘not perturbed’ Hamiltonians
     *        defined the N-electron Hilbert space,
     *        (the semicolon is to distinguish between the Hamiltonian parameter
     *         and the Hamiltonian arguments),
     *        H'(n) denotes a one electron 'perturbation' Hamiltonian.
     * Here H' is assumed to be spin projection invariant
     * (i.e. depends only on the spatial part of an electron wave function).
     *
     * All the input matrix arguments are expressed in the AO basis set.
     */
    std::pair<arma::mat, arma::mat>
    transform_HperturbAO_to_DDE_over_DxDkappa(
      const arma::mat & HperturbAO,
      const arma::mat & matFreeC_alpha, const arma::mat & matFreeC_beta,
      unsigned Nocc_alpha, unsigned Nocc_beta);


    template<class RandomAccessBitIt>
    std::vector<std::pair<arma::mat, arma::mat>>
    transform_HperturbAO_to_DDE_over_DxDkappa(
        RandomAccessBitIt first, RandomAccessBitIt last,
        const arma::mat & matFreeC_alpha, const arma::mat & matFreeC_beta,
        unsigned Nocc_alpha, unsigned Nocc_beta){
      std::vector<std::pair<arma::mat, arma::mat>> retult(last - first);
      using fn_t = std::pair<arma::mat, arma::mat> (*)(
        const arma::mat & HperturbAO,
        const arma::mat & matFreeC_alpha, const arma::mat & matFreeC_beta,
        unsigned Nocc_alpha, unsigned Nocc_beta);
      fn_t basic_function = transform_HperturbAO_to_DDE_over_DxDkappa;
      std::transform(first, last, retult.begin(), std::bind(basic_function, std::placeholders::_1, matFreeC_alpha, matFreeC_beta, Nocc_alpha, Nocc_beta));
      return retult;
    }

  }
}


#endif
