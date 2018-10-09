/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <iostream>
#include <utility>
#include <vector>

#include "core_kit/pseudo_fock_matrix_generator.hpp"
#include "cphf_kit/cphf_linear_response.hpp"
#include "io_kit/log.hpp"
#include "scf_kit/scf_kit.hpp"

namespace {

    // ######################################################################################################
    // ###################################### [ funkcje pomocnicze ]
    // ########################################
    // ######################################################################################################

    //   ..................................................................................................
    //   ................................  pomocnicza funkcja robiaca konwersje:
    //   ..........................
    //   ...... arma::mat [macierz, dwa indeksy] <-> petsc Vec [wektor o jedym
    //   multiindeksie] .............
    //   ..................................................................................................

    void arma_mat_to_petsc_vec(const arma::mat& A, Vec a)
    {
        // Ta funkcja porzebna jest w CPHF_RHF'ie
        for (unsigned i = 0; i < A.n_rows; ++i)
            for (unsigned j = 0; j < A.n_cols; ++j) {
                const PetscInt ij = j * A.n_rows + i;
                const double v = A(i, j);
                VecSetValues(a, 1, &ij, &v, INSERT_VALUES);
            }
        VecAssemblyBegin(a);
        VecAssemblyEnd(a);
    }

    void arma_two_mat_to_petsc_vec(const arma::mat& A_alpha,
                                   const arma::mat& A_beta,
                                   Vec a)
    {
        // Ta funkcja porzebna jest w CPHF_UHF'ie
        for (unsigned i = 0; i < A_alpha.n_rows; ++i)
            for (unsigned j = 0; j < A_alpha.n_cols; ++j) {
                const PetscInt ij = j * A_alpha.n_rows + i;
                const double v = A_alpha(i, j);
                VecSetValues(a, 1, &ij, &v, INSERT_VALUES);
            }
        for (unsigned i = 0; i < A_beta.n_rows; ++i)
            for (unsigned j = 0; j < A_beta.n_cols; ++j) {
                const PetscInt ij =
                    A_alpha.n_rows * A_alpha.n_cols + j * A_beta.n_rows + i;
                const double v = A_beta(i, j);
                VecSetValues(a, 1, &ij, &v, INSERT_VALUES);
            }
        VecAssemblyBegin(a);
        VecAssemblyEnd(a);
    }

    void petsc_vec_to_arma_mat(Vec a, arma::mat& A)
    {
        // Ta funkcja porzebna jest w CPHF_RHF'ie
        for (unsigned i = 0; i < A.n_rows; ++i)
            for (unsigned j = 0; j < A.n_cols; ++j) {
                const PetscInt ij = j * A.n_rows + i;
                double v;
                VecGetValues(a, 1, &ij, &v);
                A(i, j) = v;
            }
    }

    void petsc_vec_to_arma_two_mat(Vec a, arma::mat& A_alpha, arma::mat& A_beta)
    {
        // Ta funkcja porzebna jest w CPHF_UHF'ie
        for (unsigned i = 0; i < A_alpha.n_rows; ++i)
            for (unsigned j = 0; j < A_alpha.n_cols; ++j) {
                const PetscInt ij = j * A_alpha.n_rows + i;
                double v;
                VecGetValues(a, 1, &ij, &v);
                A_alpha(i, j) = v;
            }
        for (unsigned i = 0; i < A_beta.n_rows; ++i)
            for (unsigned j = 0; j < A_beta.n_cols; ++j) {
                const PetscInt ij =
                    A_alpha.n_rows * A_alpha.n_cols + j * A_beta.n_rows + i;
                double v;
                VecGetValues(a, 1, &ij, &v);
                A_beta(i, j) = v;
            }
    }

    // ..............................................................................
    // .............................. DEFINICJA KONTEKSTOW
    // ..........................
    // ..............................................................................
    // .....  konteksty to obiekty wymyslone w PETSC by mogly dzialac:
    // ..............
    // ...... (i) MatShell
    // ..........................................................
    // ...... (ii) PCShell
    // ..........................................................
    // ...... Np. funkcja wykonujaca dzialanie x -> Ax moze poprosic o kontekst,
    // ....
    // ...... z ktorego czyta wszystkie potrzebne jej dane
    // ..........................
    // ..............................................................................

    struct cphf_context_UHF {
        cphf_context_UHF(
            arma::mat C_alpha,
            arma::mat C_beta,
            arma::vec eps_alpha,
            arma::vec eps_beta,
            unsigned n_occ_alpha,
            unsigned n_occ_beta,
            std::unique_ptr<niedoida::core::HFFockMatrixGenerator> fmg);
        arma::mat C_alpha;
        arma::mat C_beta;
        arma::vec eps_alpha;
        arma::vec eps_beta;
        unsigned n_occ_alpha;
        unsigned n_occ_beta;
        std::unique_ptr<niedoida::core::HFFockMatrixGenerator> fmg;
    };

    cphf_context_UHF::cphf_context_UHF(
        arma::mat C_alpha,
        arma::mat C_beta,
        arma::vec eps_alpha,
        arma::vec eps_beta,
        unsigned n_occ_alpha,
        unsigned n_occ_beta,
        std::unique_ptr<niedoida::core::HFFockMatrixGenerator> fmg) :
        C_alpha(C_alpha),
        C_beta(C_beta),
        eps_alpha(eps_alpha),
        eps_beta(eps_beta),
        n_occ_alpha(n_occ_alpha),
        n_occ_beta(n_occ_beta),
        fmg(std::move(fmg))
    {
    }

    struct cphf_context_RHF {
        cphf_context_RHF(
            arma::mat C,
            arma::vec eps,
            unsigned n_occ,
            std::unique_ptr<niedoida::core::FockMatrixGenerator> fmg);

        arma::mat C;
        arma::vec eps;
        unsigned n_occ;
        std::unique_ptr<niedoida::core::FockMatrixGenerator> fmg;
    };

    cphf_context_RHF::cphf_context_RHF(
        arma::mat C,
        arma::vec eps,
        unsigned n_occ,
        std::unique_ptr<niedoida::core::FockMatrixGenerator> fmg) :
        C(C),
        eps(eps),
        n_occ(n_occ),
        fmg(std::move(fmg))
    {
    }

    // ...................................................................................
    // .....................DEFINICJA FUNKCJI POTRZEBNYVH DO
    // .............................
    // .....................PRECONDITIONINGu
    // .............................................
    // ...................................................................................

    PetscErrorCode pcApply_UHF(PC pc, Vec x, Vec PCx)
    {
        // Logger::Section section(Log::instance(), "pcApply_UHF");
        cphf_context_UHF* ctx;
        PCShellGetContext(pc, (void**)&ctx);
        const arma::vec& eps_alpha = ctx->eps_alpha;
        const arma::vec& eps_beta = ctx->eps_beta;
        const std::size_t n = ctx->C_alpha.n_cols;
        const std::size_t n_occ_alpha = ctx->n_occ_alpha;
        const std::size_t n_occ_beta = ctx->n_occ_beta;
        const std::size_t n_virt_alpha = n - n_occ_alpha;
        const std::size_t n_virt_beta = n - n_occ_beta;
        arma::mat X_alpha(n_occ_alpha, n_virt_alpha);
        arma::mat X_beta(n_occ_beta, n_virt_beta);
        petsc_vec_to_arma_two_mat(x, X_alpha, X_beta);
        arma::mat PCX_alpha(n_occ_alpha, n_virt_alpha);
        arma::mat PCX_beta(n_occ_beta, n_virt_beta);
        for (std::size_t a = 0; a < n_occ_alpha; ++a)
            for (std::size_t r = n_occ_alpha; r < n; ++r)
                PCX_alpha(a, r - n_occ_alpha) = 0.7 * 1.0 / 2.0 /
                                                (eps_alpha(r) - eps_alpha(a)) *
                                                X_alpha(a, r - n_occ_alpha);
        for (std::size_t a = 0; a < n_occ_beta; ++a)
            for (std::size_t r = n_occ_beta; r < n; ++r)
                PCX_beta(a, r - n_occ_beta) = 0.7 * 1.0 / 2.0 /
                                              (eps_beta(r) - eps_beta(a)) *
                                              X_beta(a, r - n_occ_beta);
        arma_two_mat_to_petsc_vec(PCX_alpha, PCX_beta, PCx);
        return 0;
    }

    PetscErrorCode pcApply_RHF(PC pc, Vec x, Vec PCx)
    {
        // Logger::Section section(Log::instance(), "pcApply_RHF (cphf)");
        cphf_context_RHF* ctx;
        PCShellGetContext(pc, (void**)&ctx);
        const arma::vec& eps = ctx->eps;
        const arma::mat& C = ctx->C;
        const std::size_t n = C.n_cols;
        const std::size_t n_occ = ctx->n_occ;
        const std::size_t n_virt = n - n_occ;
        arma::mat X(n_occ, n_virt);
        petsc_vec_to_arma_mat(x, X);
        arma::mat PCX(n_occ, n_virt);
        for (std::size_t a = 0; a < n_occ; ++a)
            for (std::size_t r = n_occ; r < n; r++)
                PCX(a, r - n_occ) =
                    0.7 * 1.0 / 2.0 / (eps(r) - eps(a)) * X(a, r - n_occ);
        arma_mat_to_petsc_vec(PCX, PCx);
        return 0;
    }

    // ..................................................................................
    // .....................DEFINICJA FUNKCJI WYKONUJACYCH
    // .............................
    // .....................MNOZENIE: MACIERZ GLOWNA UKLADU ROWNAN CPHF (Mat A)
    // .........
    // .............................. razy
    // ..............................................
    // .............................. WEKTOR PROBNY (Vec x)
    // .............................
    // ..................................................................................
    // ... Vec x ma Nocc * Nvirt elementow [RHF], lub
    // ...................................
    // ... Vec x ma Nocc_alpha * Nvirt_alpha + Nocc_beta * Nvirt_beta elementow
    // [UHF] ...
    // ..................................................................................

    PetscErrorCode mult_UHF(Mat A, Vec x, Vec Ax)
    {
        // Logger::Section section(Log::instance(), "mult_UHF (cphf)");
        cphf_context_UHF* ctx;
        MatShellGetContext(A, (void**)&ctx);
        const arma::vec& eps_alpha = ctx->eps_alpha;
        const arma::vec& eps_beta = ctx->eps_beta;
        const arma::mat& C_alpha = ctx->C_alpha;
        const arma::mat& C_beta = ctx->C_beta;
        const std::size_t n = C_alpha.n_cols;
        const std::size_t n_occ_alpha = ctx->n_occ_alpha;
        const std::size_t n_occ_beta = ctx->n_occ_beta;
        const std::size_t n_virt_alpha = n - n_occ_alpha;
        const std::size_t n_virt_beta = n - n_occ_beta;
        niedoida::core::HFFockMatrixGenerator& fmg = *ctx->fmg;
        arma::mat X_alpha(n_occ_alpha, n_virt_alpha);
        arma::mat X_beta(n_occ_beta, n_virt_beta);
        petsc_vec_to_arma_two_mat(x, X_alpha, X_beta);
        arma::mat AX_alpha(n_occ_alpha, n_virt_alpha);
        arma::mat AX_beta(n_occ_beta, n_virt_beta);
        for (std::size_t a = 0; a < n_occ_alpha; ++a)
            for (std::size_t r = n_occ_alpha; r < n; ++r)
                AX_alpha(a, r - n_occ_alpha) = 2 *
                                               (eps_alpha(r) - eps_alpha(a)) *
                                               X_alpha(a, r - n_occ_alpha);
        for (std::size_t a = 0; a < n_occ_beta; ++a)
            for (std::size_t r = n_occ_beta; r < n; ++r)
                AX_beta(a, r - n_occ_beta) =
                    2 * (eps_beta(r) - eps_beta(a)) * X_beta(a, r - n_occ_beta);
        arma::mat P_alpha = C_alpha.cols(0, n_occ_alpha - 1) * X_alpha *
                            C_alpha.cols(n_occ_alpha, n - 1).t();
        P_alpha = P_alpha + P_alpha.t();
        arma::mat P_beta = C_beta.cols(0, n_occ_beta - 1) * X_beta *
                           C_beta.cols(n_occ_beta, n - 1).t();
        P_beta = P_beta + P_beta.t();
        fmg.set_density_matrix(P_alpha, P_beta);
        const arma::mat matJ = fmg.coulomb_matrix();
        const arma::mat matK_alpha =
            fmg.exchange_matrix(niedoida::core::SPIN_ALPHA);
        const arma::mat matK_beta =
            fmg.exchange_matrix(niedoida::core::SPIN_BETA);
        AX_alpha += C_alpha.cols(0, n_occ_alpha - 1).t() *
                    (2 * matJ + 2 * matK_alpha) *
                    C_alpha.cols(n_occ_alpha, n - 1);
        AX_beta += C_beta.cols(0, n_occ_beta - 1).t() *
                   (2 * matJ + 2 * matK_beta) * C_beta.cols(n_occ_beta, n - 1);
        arma_two_mat_to_petsc_vec(AX_alpha, AX_beta, Ax);
        return 0;
    }

    // ................................................. mult_RHF
    // ..............................................

    PetscErrorCode mult_RHF(Mat A, Vec x, Vec Ax)
    {
        // Logger::Section section(Log::instance(), "mult_RHF (cphf)");
        cphf_context_RHF* ctx;
        MatShellGetContext(A, (void**)&ctx);
        const arma::vec& eps = ctx->eps;
        const arma::mat& C = ctx->C;
        const std::size_t n = C.n_cols;
        const std::size_t n_occ = ctx->n_occ;
        const std::size_t n_virt = n - n_occ;
        niedoida::core::FockMatrixGenerator& fmg = *ctx->fmg;
        arma::mat X(n_occ, n_virt);
        petsc_vec_to_arma_mat(x, X);
        arma::mat AX(n_occ, n_virt);
        for (std::size_t a = 0; a < n_occ; ++a)
            for (std::size_t r = n_occ; r < n; r++)
                AX(a, r - n_occ) = 2 * (eps(r) - eps(a)) * X(a, r - n_occ);
        arma::mat P = niedoida::scf::density_matrix(C, n_occ);
        arma::mat fakeP = C.cols(0, n_occ - 1) * X * C.cols(n_occ, n - 1).t();
        fakeP = fakeP + fakeP.t();
        fmg.set_density_matrix_for_CPHF(P, P, fakeP, fakeP);
        const arma::mat matJ = fmg.coulomb_matrix();
        const arma::mat matK =
            fmg.exchange_matrix_deriv_C(niedoida::core::SPIN_ALPHA);
        AX += C.cols(0, n_occ - 1).t() * (2 * matJ + 2 * matK) *
              C.cols(n_occ, n - 1);
        arma_mat_to_petsc_vec(AX, Ax);
        return 0;
    }

} // Koniec anonimowej przestrzeni nazw

namespace niedoida {
    namespace cphf {

        // ###############################################################################################
        // ##################     CPHF_linearResponse_UHF
        // ###########################################
        // ###############################################################################################

        CPHF_linearResponse_UHF::CPHF_linearResponse_UHF(
            std::shared_ptr<const core::System> system,
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                ie_factory,
            const arma::mat& mo_coeffs_alpha,
            const arma::mat& mo_coeffs_beta,
            const arma::vec& mo_energies_alpha,
            const arma::vec& mo_energies_beta) :
            N(mo_energies_alpha.size()),
            Nocc_alpha(system->no_electrons(core::SPIN_ALPHA)),
            Nocc_beta(system->no_electrons(core::SPIN_BETA)),
            Nvirt_alpha(N - Nocc_alpha),
            Nvirt_beta(N - Nocc_beta),
            matS(*system->basis_set.overlap_matrix),
            matFreeC_alpha(mo_coeffs_alpha),
            matFreeC_beta(mo_coeffs_beta),
            vecFreeEorb_alpha(mo_energies_alpha),
            vecFreeEorb_beta(mo_energies_beta),
            system(system),
            ctx_ptr(new cphf_context_UHF(
                matFreeC_alpha,
                matFreeC_beta,
                vecFreeEorb_alpha,
                vecFreeEorb_beta,
                Nocc_alpha,
                Nocc_beta,
                std::unique_ptr<core::HFFockMatrixGenerator>(
                    new core::HFFockMatrixGenerator(
                        system,
                        std::unique_ptr<core::JKMatrixGenerator>(
                            new core::CombinedJKMatrixGenerator(
                                system,
                                ie_factory,
                                1e-11,
                                10 * 16 * 1024 * 1024,
                                std::unique_ptr<core::ShellQuartetPetiteList>(
                                    new core::NoSymmetryPetiteList())))))))

        {
            // Tworzymy macierz glowna ukladu rownan CPHF:
            MatCreateShell(PETSC_COMM_SELF,
                           Nocc_alpha * Nvirt_alpha + Nocc_beta * Nvirt_beta,
                           Nocc_alpha * Nvirt_alpha + Nocc_beta * Nvirt_beta,
                           Nocc_alpha * Nvirt_alpha + Nocc_beta * Nvirt_beta,
                           Nocc_alpha * Nvirt_alpha + Nocc_beta * Nvirt_beta,
                           ctx_ptr,
                           &A);
            MatShellSetOperation(A, MATOP_MULT, (void (*)(void))mult_UHF);
            // Tworzymy rozwiazywacz ukladu rownan CPHF:
            KSPCreate(PETSC_COMM_SELF, &ksp);
            KSPSetOperators(ksp, A, A);
            KSPSetType(ksp, KSPGMRES);
            // Ustawiamy lewostronny preconditioning (PC):
            PC pc;
            KSPGetPC(ksp, &pc);
            PCSetType(pc, PCSHELL);
            PCShellSetContext(pc, ctx_ptr);
            PCShellSetApply(pc, pcApply_UHF);
        }

        CPHF_linearResponse_UHF::~CPHF_linearResponse_UHF()
        {
            delete (static_cast<cphf_context_UHF*>(ctx_ptr));
        }

        void CPHF_linearResponse_UHF::solveCPHFequations_given_DDE(
            const arma::mat& DDE_over_DxDkappa_alpha,
            const arma::mat& DDE_over_DxDkappa_beta)
        {
            io::Log::Section log_section(
                "cphf linearResponse(unrestricted) solver");
            Vec b;
            VecCreateSeq(PETSC_COMM_SELF,
                         Nocc_alpha * Nvirt_alpha + Nocc_beta * Nvirt_beta,
                         &b);
            arma_two_mat_to_petsc_vec(
                -DDE_over_DxDkappa_alpha, -DDE_over_DxDkappa_beta, b);
            VecAssemblyBegin(b);
            VecAssemblyEnd(b);
            Vec x;
            VecCreateSeq(PETSC_COMM_SELF,
                         Nocc_alpha * Nvirt_alpha + Nocc_beta * Nvirt_beta,
                         &x);
            // Initial guess:
            arma::mat X_alpha(Nocc_alpha, Nvirt_alpha);
            arma::mat X_beta(Nocc_beta, Nvirt_beta);
            for (std::size_t a = 0; a < Nocc_alpha; ++a)
                for (std::size_t r = Nocc_alpha; r < N; r++)
                    X_alpha(a, r - Nocc_alpha) =
                        -1.0 / 2.0 /
                        (vecFreeEorb_alpha(r) - vecFreeEorb_alpha(a)) *
                        DDE_over_DxDkappa_alpha(a, r - Nocc_alpha);
            for (std::size_t a = 0; a < Nocc_beta; ++a)
                for (std::size_t r = Nocc_beta; r < N; r++)
                    X_beta(a, r - Nocc_beta) =
                        -1.0 / 2.0 /
                        (vecFreeEorb_beta(r) - vecFreeEorb_beta(a)) *
                        DDE_over_DxDkappa_beta(a, r - Nocc_beta);
            arma_two_mat_to_petsc_vec(X_alpha, X_beta, x);
            KSPSetInitialGuessNonzero(ksp, PETSC_TRUE);
            // Rozwiazanie rownan CPHF
            // io::Log::instance().write("solver - started");
            KSPSolve(ksp, b, x);
            // Zczytanie wynikow ukladu rownan:
            KSPConvergedReason reason;
            KSPGetConvergedReason(ksp, &reason);
            io::Log::instance().write(
                io::Logger::TERSE, "solver - convergence", int(reason));
            PetscInt its;
            KSPGetIterationNumber(ksp, &its);
            io::Log::instance().write(
                io::Logger::TERSE, "solver - iterations number", int(its));
            if (int(reason) < 0)
                throw CPHF_linearResponse_solver_exception(int(reason),
                                                           int(its));
            Vec u;
            KSPGetSolution(ksp, &u);
            Dkappa_over_Dx[0].resize(Nocc_alpha, Nvirt_alpha);
            Dkappa_over_Dx[1].resize(Nocc_beta, Nvirt_beta);
            petsc_vec_to_arma_two_mat(u, Dkappa_over_Dx[0], Dkappa_over_Dx[1]);
        }

        arma::mat CPHF_linearResponse_UHF::get_solution(core::Spin spin) const
        {
            return Dkappa_over_Dx[spin];
        }

        bool CPHF_linearResponse_UHF::is_restricted() const { return false; }

        // ###############################################################################################
        // ##################     CPHF_linearResponse_RHF
        // ###########################################
        // ###############################################################################################

        CPHF_linearResponse_RHF::CPHF_linearResponse_RHF(
            std::shared_ptr<const core::System> system,
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                ie_factory,
            const arma::mat& mo_coeffs,
            const arma::vec& mo_energies) :
            N(mo_energies.size()),
            Nocc(system->no_electrons(core::SPIN_ALPHA)),
            Nvirt(mo_energies.size() - Nocc),
            matS(*system->basis_set.overlap_matrix),
            matFreeC(mo_coeffs),
            vecFreeEorb(mo_energies),
            system(system),
            Dkappa_over_Dx(Nocc, Nvirt),
            ctx_ptr(new cphf_context_RHF(
                matFreeC,
                vecFreeEorb,
                Nocc,
                std::unique_ptr<core::HFFockMatrixGenerator>(
                    new core::HFFockMatrixGenerator(
                        system,
                        std::unique_ptr<core::JKMatrixGenerator>(
                            new core::CombinedJKMatrixGenerator(
                                system,
                                ie_factory,
                                1e-11,
                                10 * 16 * 1024 * 1024,
                                std::unique_ptr<core::ShellQuartetPetiteList>(
                                    new core::NoSymmetryPetiteList())))))))
        {
            // Tworzymy macierz glowna ukladu rownan CPHF:
            MatCreateShell(PETSC_COMM_SELF,
                           Nocc * Nvirt,
                           Nocc * Nvirt,
                           Nocc * Nvirt,
                           Nocc * Nvirt,
                           ctx_ptr,
                           &A);
            MatShellSetOperation(A, MATOP_MULT, (void (*)(void))mult_RHF);
            // Tworzymy rozwiazywacz ukladu rownan CPHF:
            KSPCreate(PETSC_COMM_SELF, &ksp);
            KSPSetOperators(ksp, A, A);
            KSPSetType(ksp, KSPGMRES); // lub: KSPSetType(ksp, KSPCG);
            // Ustawiamy lewostronny preconditioning (PC):
            PC pc;
            KSPGetPC(ksp, &pc);
            PCSetType(pc, PCSHELL);
            PCShellSetContext(pc, ctx_ptr);
            PCShellSetApply(pc, pcApply_RHF);
        }

        CPHF_linearResponse_RHF::CPHF_linearResponse_RHF(
            std::shared_ptr<const core::System> system,
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                ie_factory,
            std::shared_ptr<const core::FockMatrixGeneratorFactory>
                fm_gen_factory,
            const arma::mat& mo_coeffs,
            const arma::vec& mo_energies) :
            N(mo_energies.size()),
            Nocc(system->no_electrons(core::SPIN_ALPHA)),
            Nvirt(mo_energies.size() - Nocc),
            matS(*system->basis_set.overlap_matrix),
            matFreeC(mo_coeffs),
            vecFreeEorb(mo_energies),
            system(system),
            Dkappa_over_Dx(Nocc, Nvirt),
            ctx_ptr(
                new cphf_context_RHF(matFreeC,
                                     vecFreeEorb,
                                     Nocc,
                                     std::move(fm_gen_factory->make(system))))
        {
            // Tworzymy macierz glowna ukladu rownan CPHF:
            MatCreateShell(PETSC_COMM_SELF,
                           Nocc * Nvirt,
                           Nocc * Nvirt,
                           Nocc * Nvirt,
                           Nocc * Nvirt,
                           ctx_ptr,
                           &A);
            MatShellSetOperation(A, MATOP_MULT, (void (*)(void))mult_RHF);
            // Tworzymy rozwiazywacz ukladu rownan CPHF:
            KSPCreate(PETSC_COMM_SELF, &ksp);
            KSPSetOperators(ksp, A, A);
            KSPSetType(ksp, KSPGMRES); // lub: KSPSetType(ksp, KSPCG);
            // Ustawiamy lewostronny preconditioning (PC):
            PC pc;
            KSPGetPC(ksp, &pc);
            PCSetType(pc, PCSHELL);
            PCShellSetContext(pc, ctx_ptr);
            PCShellSetApply(pc, pcApply_RHF);
        }

        CPHF_linearResponse_RHF::~CPHF_linearResponse_RHF()
        {
            delete (static_cast<cphf_context_RHF*>(ctx_ptr));
        }

        void CPHF_linearResponse_RHF::solveCPHFequations_given_DDE(
            const arma::mat& DDE_over_DxDkappa_alpha,
            const arma::mat& DDE_over_DxDkappa_beta)
        {
            io::Log::Section log_section(
                "cphf linearResponse(restricted) solver");
            Vec b;
            VecCreateSeq(PETSC_COMM_SELF, Nocc * Nvirt, &b);
            arma_mat_to_petsc_vec(-DDE_over_DxDkappa_alpha, b);
            VecAssemblyBegin(b);
            VecAssemblyEnd(b);
            Vec x;
            VecCreateSeq(PETSC_COMM_SELF, Nocc * Nvirt, &x);
            // Initial guess:
            arma::mat X(Nocc, Nvirt);
            for (std::size_t a = 0; a < Nocc; ++a)
                for (std::size_t r = Nocc; r < N; r++)
                    X(a, r - Nocc) = -1.0 / 2.0 /
                                     (vecFreeEorb(r) - vecFreeEorb(a)) *
                                     DDE_over_DxDkappa_alpha(a, r - Nocc);
            arma_mat_to_petsc_vec(X, x);
            KSPSetInitialGuessNonzero(ksp, PETSC_TRUE);
            // Rozwiazanie rownan CPHF
            // io::Log::instance().write("solver - started");
            KSPSolve(ksp, b, x);
            // Zczytanie wynikow ukladu rownan:
            KSPConvergedReason reason;
            KSPGetConvergedReason(ksp, &reason);
            io::Log::instance().write(
                io::Logger::TERSE, "solver - convergence", int(reason));
            PetscInt its;
            KSPGetIterationNumber(ksp, &its);
            io::Log::instance().write(
                io::Logger::TERSE, "solver - iterations number", int(its));
            if (int(reason) < 0)
                throw CPHF_linearResponse_solver_exception(int(reason),
                                                           int(its));
            Vec u;
            KSPGetSolution(ksp, &u);
            Dkappa_over_Dx.resize(Nocc, Nvirt);
            petsc_vec_to_arma_mat(u, Dkappa_over_Dx);
        }

        arma::mat CPHF_linearResponse_RHF::get_solution(core::Spin spin) const
        {
            return Dkappa_over_Dx;
        }

        bool CPHF_linearResponse_RHF::is_restricted() const { return true; }

        // ###############################################################################################
        // ##################     funkcja: make_CPHF_linearResponse(....)
        // ##############################
        // ###############################################################################################

        std::shared_ptr<CPHF_linearResponse> make_CPHF_linearResponse(
            std::shared_ptr<const core::System> system,
            const scf::SCF& free_scf,
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                ie_factory)
        {
            if (free_scf.is_restricted())
                return std::shared_ptr<CPHF_linearResponse>(
                    new CPHF_linearResponse_RHF(
                        system,
                        ie_factory,
                        free_scf.mo_coefficients(core::SPIN_ALPHA),
                        free_scf.mo_energies(core::SPIN_ALPHA)));
            else
                return std::shared_ptr<CPHF_linearResponse>(
                    new CPHF_linearResponse_UHF(
                        system,
                        ie_factory,
                        free_scf.mo_coefficients(core::SPIN_ALPHA),
                        free_scf.mo_coefficients(core::SPIN_BETA),
                        free_scf.mo_energies(core::SPIN_ALPHA),
                        free_scf.mo_energies(core::SPIN_BETA)));
        }

        // ###############################################################################################
        // ##################     funkcja:
        // transform_HperturbAO_to_DDE_over_DxDkappa(...)   ##############
        // ###############################################################################################

        std::pair<arma::mat, arma::mat>
        transform_HperturbAO_to_DDE_over_DxDkappa(
            const arma::mat& HperturbAO,
            const arma::mat& matFreeC_alpha,
            const arma::mat& matFreeC_beta,
            unsigned Nocc_alpha,
            unsigned Nocc_beta)
        {

            const unsigned N = matFreeC_alpha.n_cols;
            const arma::mat mat_DDE_over_DxDkappa_alpha =
                2 * matFreeC_alpha.cols(0, Nocc_alpha - 1).t() * HperturbAO *
                matFreeC_alpha.cols(Nocc_alpha, N - 1);
            const arma::mat mat_DDE_over_DxDkappa_beta =
                2 * matFreeC_beta.cols(0, Nocc_beta - 1).t() * HperturbAO *
                matFreeC_beta.cols(Nocc_beta, N - 1);
            return std::pair<arma::mat, arma::mat>(mat_DDE_over_DxDkappa_alpha,
                                                   mat_DDE_over_DxDkappa_beta);
        }
    }
}
