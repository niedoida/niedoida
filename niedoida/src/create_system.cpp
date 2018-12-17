/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */


#include "niedoida/niedoida.hpp"

#include "misc_kit/phys_consts.hpp"

#include "compat_kit/g94_basis_set_builder.hpp"
#include "compat_kit/molcas_basis_set_builder.hpp"

namespace {
    std::unique_ptr<niedoida::core::BasisSetBuilder>
    create_bs_builder(std::string format, std::istream& is)
    {
        std::unique_ptr<niedoida::core::BasisSetBuilder> basis_set_builder;

        if (format == "g94")
            basis_set_builder.reset(
                new niedoida::compat::G94BasisSetBuilder(is));
        else if (format == "molcas")
            basis_set_builder.reset(
                new niedoida::compat::MolcasBasisSetBuilder(is));
        else {
            throw std::runtime_error(
                std::string("unsupported basis set format: ") + format);
        }

        return basis_set_builder;
    }
}

namespace niedoida {
    std::shared_ptr<core::System> create_system(const Config& config,
                                                const InputData& input_data)
    {
        std::shared_ptr<core::System> system(new core::System);

        // deal with atoms
        for (unsigned i = 0; i < input_data.atoms.size(); ++i)
            system->atoms.push_back(new core::Atom(*input_data.atoms[i].isotope,
                                                   input_data.atoms[i].coords,
                                                   input_data.atoms[i].label));

        if (!input_data.use_input_coords) {
            update_symmetry_info(*system,
                                 input_data.tol_dist); // <- use it normally
        } else {
            arma::mat coords(3, input_data.atoms.size());
            for (unsigned i = 0; i < input_data.atoms.size(); ++i)
                coords.col(i) = input_data.atoms[i].coords;
            system->symmetry_info.reset(new symmetry::NoneSymmetryInfo(coords));
        }

        // deal with external_charges
        {
            const arma::mat& R = system->symmetry_info->rotation_to_std_frame();
            const arma::vec& t =
                system->symmetry_info->translation_to_std_frame();
            for (unsigned i = 0; i < input_data.ext_chrgs.size(); ++i) {
                const arma::vec3 inp_coords = input_data.ext_chrgs[i].coords;
                const double charge_value =
                    input_data.ext_chrgs[i].charge_value;
                system->ext_chrgs.push_back(
                    new core::Charge(R * (inp_coords - t), charge_value));
            }
        }

        // deal with fragments
        for (unsigned i = 0; i < input_data.fragments.size(); ++i)
            for (unsigned j = 0; j < input_data.fragments[i].atoms.size(); ++j)
                system->atoms.push_back(
                    new core::Atom(*input_data.fragments[i].atoms[j].isotope,
                                   input_data.fragments[i].atoms[j].coords,
                                   input_data.fragments[i].atoms[j].label));

        // adjust atomic coords
        if (input_data.units.length_unit ==
            InputData::Units::LENGTH_UNIT_ANGSTROM) {
            for (unsigned i = 0; i < system->atoms.size(); ++i)
                system->atoms[i]->coords *= misc::angstrom_to_bohr;
            for (unsigned i = 0; i < system->ext_chrgs.size(); ++i) {
                system->ext_chrgs[i]->coords *= misc::angstrom_to_bohr;
            }
        }

        const std::size_t n = system->atoms.size();

        arma::mat coords(n, 3);
        arma::vec weights(n);

        for (unsigned i = 0; i < n; ++i) {
            coords.row(i) = trans(system->atoms[i]->coords);
            weights(i) = system->atoms[i]->isotope->element->atomic_number;
        }

        std::ifstream bs_is;

        // build basis set(s)
        bs_is.open(config.basis_set_path(input_data.basis_set_name).c_str());
        if (!bs_is)
            throw std::runtime_error(
                std::string("can't open basis set file: ") +
                config.basis_set_path(input_data.basis_set_name).string());

        std::unique_ptr<core::BasisSetBuilder> basis_set_builder =
            create_bs_builder(
                config.basis_set_format(input_data.basis_set_name), bs_is);

        for (unsigned a = 0; a < system->atoms.size(); ++a) {
            core::AtomicBasisSet& abs =
                system->basis_set.add_atomic_basis_set(*system->atoms[a]);

            basis_set_builder->build_atomic_basis_set(abs);
        }

        bs_is.close();

        if (!input_data.aux_basis_set_name.empty()) {
            bs_is.open(
                config.basis_set_path(input_data.aux_basis_set_name).c_str());
            if (!bs_is)
                throw std::runtime_error(
                    std::string("can't open auxilliary basis set file: ") +
                    config.basis_set_path(input_data.aux_basis_set_name)
                        .string());

            basis_set_builder = create_bs_builder(
                config.basis_set_format(input_data.aux_basis_set_name), bs_is);

            system->aux_basis_set.reset(new core::BasisSet);

            for (unsigned a = 0; a < system->atoms.size(); ++a) {
                core::AtomicBasisSet& abs =
                    system->aux_basis_set->add_atomic_basis_set(
                        *system->atoms[a]);

                basis_set_builder->build_atomic_basis_set(abs);
            }
            bs_is.close();
        }

        if (!input_data.posthf_aux_basis_set_name.empty()) {
            bs_is.open(
                config.basis_set_path(input_data.posthf_aux_basis_set_name)
                    .c_str());
            if (!bs_is)
                throw std::runtime_error(
                    std::string(
                        "can't open post-hf auxilliary basis set file: ") +
                    config.basis_set_path(input_data.posthf_aux_basis_set_name)
                        .string());

            basis_set_builder = create_bs_builder(
                config.basis_set_format(input_data.posthf_aux_basis_set_name),
                bs_is);

            system->posthf_aux_basis_set.reset(new core::BasisSet);

            for (unsigned a = 0; a < system->atoms.size(); ++a) {
                core::AtomicBasisSet& abs =
                    system->posthf_aux_basis_set->add_atomic_basis_set(
                        *system->atoms[a]);

                basis_set_builder->build_atomic_basis_set(abs);
            }
            bs_is.close();
        }

        if (!input_data.poisson_basis_set_name.empty()) {
            bs_is.open(config.basis_set_path(input_data.poisson_basis_set_name)
                           .c_str());
            if (!bs_is)
                throw std::runtime_error(
                    std::string("can't open poisson basis set file: ") +
                    config.basis_set_path(input_data.poisson_basis_set_name)
                        .string());

            basis_set_builder = create_bs_builder(
                config.basis_set_format(input_data.poisson_basis_set_name),
                bs_is);

            system->poisson_basis_set.reset(new core::BasisSet);

            for (unsigned a = 0; a < system->atoms.size(); ++a) {
                core::AtomicBasisSet& abs =
                    system->poisson_basis_set->add_atomic_basis_set(
                        *system->atoms[a]);

                basis_set_builder->build_atomic_basis_set(abs);
            }
            bs_is.close();
        }

        // and set up global info
        system->charge = input_data.charge;
        system->multiplicity = input_data.multiplicity;
        system->uniform_electric_field = input_data.external_electric_field;

        return system;
    }
}
