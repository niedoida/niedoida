#ifndef NIEDOIDA_CORE_KIT_MO_SYMMETRY_HPP
#define NIEDOIDA_CORE_KIT_MO_SYMMETRY_HPP

#include "core_kit/system.hpp"

namespace niedoida {
    namespace core {
        arma::uvec mo_degeneracy(const core::System& system,
                                 const arma::vec& energies,
                                 const double eps = 1e-6);
        arma::mat symmetrize_mo(const core::System& system,
                                const arma::vec& energies,
                                const arma::mat& C,
                                const double eps = 1e-6);
        arma::uvec mo_symmetry(const core::System& system, const arma::mat& C);
        std::vector<std::string> mo_symmetry_labels(const core::System& system,
                                                    const arma::mat& C);
    }
}

#endif
