#ifndef NIEDOIDA_CORE_KIT_AO_SYMMETRY_HPP
#define NIEDOIDA_CORE_KIT_AO_SYMMETRY_HPP

#include "core_kit/system.hpp"

namespace niedoida {
    namespace core {
        arma::cube ao_rotations(const System&);
        arma::cube ao_projections(const System&);
    }
}

#endif