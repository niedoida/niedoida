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
        
    /* Klasa CPHF_linearResponse to maszynka do liczenia
     * liniowej odpowiedzi stanu elektronowego metody HF na zaburzenie Hamiltonianu.
     *
     * Klase tworzy sie dla zadanego ukladu chemicznego;
     * przy czym konieczne jest podanie (w konstruktorze) stanu ukladu niezaburzonego.
     * [ktory to trzeba wyliczyc wczesniej innymi dostepnymi metodami, np. SCFem].
     * Przez stanu ukladu niezaburzonego rozumiemy tu stosowne macierze C oraz wektor epsilon.
     *
     * Raz utworzona klasa pozwala na obiczenie
     * odpowiedzi liniowej stanu elektronowego danego ukladu chemicznego
     * wielokrotnie.
     *
     * Wynik obliczen, tj. odpowiedz liniowa stanu elektronowego
     * reprezentowanej jest poprzez ,,macierze roatcji''.
     * tj. macierze Dkappa_alpha_over_Dx oraz Dkappa_beta_over_Dx.
     * obie te macierze to macierze Nocc x Nvirt [odpowiednio: alpha, beta]
     * (indeksy macierzowe to indeksy kappa)
     *
     * Dane do obliczen, tj. zaburzenie hamiltonianu
     * reprezentowane sa przez macierze
     * DDE_over_DxDkappa_alpha oraz DDE_over_DxDkappa_beta
     * obie te macierze to macierze Nocc x Nvirt [odpowiednio: alpha, beta]
     * (indeksy macierzowe to indeksy kappa)
     *
     * Pojedyczne obliczenia polega na wywolaniu metody solveCPHFequations_given_DDE(...)
     * oraz czytaniu wyniku za pomoca get_solution(Spin);
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


    /* Implementacja interfejsu CPHF_linearResponse dla wersji otwartopowlokowej:
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
            const arma::vec& mo_energies_beta );
      CPHF_linearResponse_UHF(const CPHF_linearResponse_UHF &) = delete;
      const CPHF_linearResponse_UHF & operator=(const CPHF_linearResponse_UHF &) = delete;
      ~ CPHF_linearResponse_UHF(); 
      void solveCPHFequations_given_DDE(
                const arma::mat & DDE_over_DxDkappa_alpha,
                const arma::mat & DDE_over_DxDkappa_beta) override;  
      arma::mat get_solution(core::Spin) const override;  
      bool is_restricted() const override;
    };


    /* Implementacja interfejsu CPHF_linearResponse dla wersji zamknietopowlokowej:
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
      CPHF_linearResponse_RHF(std::shared_ptr<const core::System> system,
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory> ie_factory, 
            const arma::mat& mo_coeffs,
            const arma::vec& mo_energies);
      CPHF_linearResponse_RHF(std::shared_ptr<const core::System> system,
                 std::shared_ptr<const core::TwoElectronIntegralEngineFactory> ie_factory, 
                 std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen_factory,                                        
                 const arma::mat& mo_coeffs, 
                 const arma::vec& mo_energies );
      CPHF_linearResponse_RHF(const CPHF_linearResponse_RHF &) = delete;
      const CPHF_linearResponse_RHF & operator=(const CPHF_linearResponse_RHF &) = delete;
      ~ CPHF_linearResponse_RHF();
      void solveCPHFequations_given_DDE(
		const arma::mat & DDE_over_DxDkappa_alpha,
                const arma::mat & DDE_over_DxDkappa_beta) override;
      arma::mat get_solution(core::Spin) const override;
      bool is_restricted() const override;
    };


    /* Wyjatek jaki moze byc rzucony gdy nie uda sie rozwiazac rownan CPHFu:
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


    /* Zwykle stanu ukladu niezaburzonego liczymy SCFem;
     * w tych sytuacjach klase implementujaca CPHF_linearResponse
     * mozna latwo utworzyc ponizsza funkcja:
     */
    std::shared_ptr<CPHF_linearResponse>
    make_CPHF_linearResponse(std::shared_ptr<const core::System> system,
                              const scf::SCF & free_scf,
                              std::shared_ptr<const core::TwoElectronIntegralEngineFactory> ie_factory);


    /* funkcja pomocnicza,
     * zamienia macierz zaburzenia jednoelektronowego HperturbAO (macierz Nbasis x Nbasis) 
     * na pare macierzy DDE_over_DxDkappa_alpha oraz DDE_over_DxDkappa_beta (macierze Nocc x Nvirt).
     * Scislej, postulujemy zaburzenie H' = x * HperturbAO, gdzie x to liczba rzeczywista.
     * Do konwersji porzebna jest wiedza:
     *   jak wygladaja macierze matFreeC_alpha oraz matFreeC_beta, oraz
     *   jakie sa wartosci Nocc_alpha oraz Nocc_beta.
     */
    std::pair<arma::mat, arma::mat>
    transform_HperturbAO_to_DDE_over_DxDkappa(const arma::mat & HperturbAO,
                                              const arma::mat & matFreeC_alpha, const arma::mat & matFreeC_beta,
                                              unsigned Nocc_alpha, unsigned Nocc_beta);


    template<class RandomAccessBitIt>
    std::vector<std::pair<arma::mat, arma::mat>>
    transform_HperturbAO_to_DDE_over_DxDkappa(RandomAccessBitIt first, RandomAccessBitIt last,
					      const arma::mat & matFreeC_alpha, const arma::mat & matFreeC_beta,
					      unsigned Nocc_alpha, unsigned Nocc_beta){
      std::vector<std::pair<arma::mat, arma::mat>> retult(last - first);
      using fn_t = std::pair<arma::mat, arma::mat> (*)(const arma::mat & HperturbAO,
						       const arma::mat & matFreeC_alpha, const arma::mat & matFreeC_beta,
						       unsigned Nocc_alpha, unsigned Nocc_beta);
      fn_t basic_function = transform_HperturbAO_to_DDE_over_DxDkappa;
      std::transform(first, last, retult.begin(), std::bind(basic_function, std::placeholders::_1, matFreeC_alpha, matFreeC_beta, Nocc_alpha, Nocc_beta));
      return retult;
    }

  }
}


#endif
