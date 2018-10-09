/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "td_kit/dress.hpp"
#include "io_kit/log.hpp"
#include <cassert>
#include <cmath>

namespace niedoida {
    namespace td {

        void Dress::getHdd(
            std::vector<std::pair<std::pair<std::size_t, std::size_t>, double>>&
                H_dd_vector,
            const double double_excitation_min_energy,
            const double double_excitation_max_energy,
            const arma::vec& eps)
        {

            // I - poszukiwanie wzbudzen podwojnych o energiach od
            // double_excitation_min_energy do double_excitation_max_energy
            for (std::size_t j = no_occ; j > 0; --j) {
                for (std::size_t b = 0; b < no_virt; ++b) {
                    // koniecznosc wywolywania [j-1]-tego elementu
                    const double H_dd = 2 * (eps(b + no_occ) - eps(j - 1));

                    if (H_dd < double_excitation_min_energy) {
                        continue;
                    }

                    if (H_dd > double_excitation_max_energy) {
                        break;
                    }

                    std::pair<std::pair<std::size_t, std::size_t>, double>
                        H_dd_info;

                    std::pair<std::size_t, std::size_t> jb;
                    jb.first = j - 1;
                    jb.second = b;

                    H_dd_info.first = jb;
                    H_dd_info.second = H_dd;

                    io::Log::instance().write(io::Logger::TERSE,
                                              "found double excitation",
                                              H_dd_info.second);

                    // element pakowany na koniec
                    H_dd_vector.push_back(H_dd_info);

                    // jesli znajdzie sie dla niego miejsce bardziej stosowne,
                    // to zostanie na nim umieszczony
                    for (std::vector<
                             std::pair<std::pair<std::size_t, std::size_t>,
                                       double>>::iterator iter =
                             H_dd_vector.begin();
                         iter < H_dd_vector.end();
                         ++iter) {
                        // jesli nowa energia jest mniejsza od wskazywanej przez
                        // iterator wtedy wloz nowa wartosc przed wskazywany
                        // element i skasuj stary element na koncu a nastepnie
                        // wyjdz z petli
                        if (H_dd_info.second < (*iter).second) {
                            H_dd_vector.insert(iter, H_dd_info);
                            H_dd_vector.pop_back();
                            break;
                        }
                    }
                }
            }
        }

        Dress::Dress(
            const std::shared_ptr<const core::System>& system,
            const arma::mat& tddft_coeffs,
            const arma::vec& calculated_tddft_energies,
            const arma::mat& mo_coeffs,
            const arma::vec& eps,
            const unsigned& no_states,
            std::shared_ptr<const MOOneEIntGenerator> mo_one_e_int_gen,
            std::shared_ptr<MOTwoEIntGenerator> mo_two_e_int_gen,
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                two_e_ie_factory,
            const double delta,
            unsigned state) :
            no_occ(system->no_electrons(core::SPIN_ALPHA)),
            no_states(no_states),
            no_virt(eps.size() - no_occ),
            coeffs(tddft_coeffs),
            tddft_energies(calculated_tddft_energies),
            m_mo_coeffs(mo_coeffs),
            single_excitations_vector()
        {
            if (no_states == 0) {
                io::Log::instance().write(
                    io::Logger::TERSE,
                    "Error",
                    std::string("no (converged) excitations"));
                return;
            }

            io::Log::Section section("dress construction");

            // macierz pseudogestosci
            // interesujace nas calki kulombowskie sa typu (ab|dd),
            // wymnozenie przez wektor [su] jest rownoznaczne z wymnozeniem
            // przez macierz jednostkowa, do wygenerowania macierzy
            // pseudogestosci mozna zatem uzyc mechanizmu generowania macierzy
            // gestosci, z tym, ze wszystkie orbitale "sa obsadzone" (brak zer
            // na diagonali)

            // NOWA KONSTRUKCJA DRESSA
            // ZALOZENIE: energie wyliczonych wzbudzen podane sa w kolejnosci
            // wzrastajacej

            const double double_excitation_min_energy =
                tddft_energies(0) - delta;
            const double double_excitation_max_energy =
                tddft_energies(no_states - 1) + delta;

            io::Log::instance().write(io::Logger::NORMAL,
                                      "double excitation min energy",
                                      double_excitation_min_energy);
            io::Log::instance().write(io::Logger::NORMAL,
                                      "double excitation max energy",
                                      double_excitation_max_energy);

            std::vector<std::pair<std::pair<std::size_t, std::size_t>, double>>
                H_dd_vector;

            getHdd(H_dd_vector,
                   double_excitation_min_energy,
                   double_excitation_max_energy,
                   eps);
            std::vector<arma::cube> fakeP(2);

            makePseudoDensityMatrix(H_dd_vector, fakeP);

            core::PseudoFockMultiMatrixGenerator fm_gen(
                system, two_e_ie_factory, 1e-8);

            fm_gen.set_density_matrix(fakeP);
            // na tym etapie lista wzbudzen jest przygotowana do wyszukiwania
            // najblizszych wzbudzen podwojnych :)

            unsigned nstate = 1;
            // dla kazdego wzbudzenia pojedynczego
            for (std::size_t n = 0; n < tddft_energies.size(); ++n) {

                // II - ustawianie w kolejce wzbudzen podwojnych (wedlug
                // bliskosci)
                //        std::cout << std::endl << std::endl << "wzbudzenie nr
                //        "<< n+1 << " o energii " << tddft_energies(n) <<
                //        std::endl;
                std::vector<
                    std::pair<std::pair<std::size_t, std::size_t>, double>>
                    tmp_double_excit_vector;

                const double omega = tddft_energies(n);
                //        std::cout << "omega: " << omega << std::endl
                //                  << "sprawdzanie konfiguracji podwojnie
                //                  wzbudzonych o energii "<< omega - delta
                //                  << " do " << omega + delta << std::endl;

                for (std::size_t i = 0; i < H_dd_vector.size(); ++i) {
                    //            std::cout << "  rozwazam wzbudzenie podwojne o
                    //            energii " << H_dd_vector[i].second << "
                    //            (delta: " << delta << ")" << std::endl;
                    // roznica energii pomiedzy rozwazanym podwojnym a
                    // pojedynczym
                    double tmp_energy = std::abs(H_dd_vector[i].second - omega);

                    // jezeli ta roznica wykracza poza zakres poszukiwan
                    // przechodzimy do kolejnej iteracji
                    if (tmp_energy > delta) {
                        //                std::cout << "  roznica energii
                        //                pomiedzy pojedynczym a podwojnym jest
                        //                zbyt duza: " << tmp_energy <<
                        //                std::endl;
                        continue;
                    }

                    //            std::cout << "  roznica energii pomiedzy
                    //            pojedynczym a podwojnym " << tmp_energy
                    //                      << "  miesci sie w zakresie do " <<
                    //                      delta << std::endl;

                    // wsadzenie elementu na koniec
                    tmp_double_excit_vector.push_back(H_dd_vector[i]);

                    // jesli znajdzie sie dla niego miejsce bardziej stosowne,
                    // to zostanie na nim umieszczony
                    for (std::vector<
                             std::pair<std::pair<std::size_t, std::size_t>,
                                       double>>::iterator iter =
                             tmp_double_excit_vector.begin();
                         iter < tmp_double_excit_vector.end();
                         ++iter) {
                        // jesli roznica energii pomiedzy nowym podwojnym a
                        // pojedynczym jest mniejsza od roznicy miedzy podwojnym
                        // wskazywanym przez iterator wtedy wloz nowa wartosc
                        // przed wskazywany element i skasuj stary element na
                        // koncu a nastepnie wyjdz z petli
                        if (tmp_energy < std::abs((*iter).second - omega)) {
                            tmp_double_excit_vector.insert(iter,
                                                           H_dd_vector[i]);
                            tmp_double_excit_vector.pop_back();
                            //                    std::cout << " aktualna postac
                            //                    wektora wzbudzen podwojnych
                            //                    dla wzbudzenia pojedynczego nr
                            //                    " << n <<  std::endl;
                            for (std::size_t tmp_iter = 0;
                                 tmp_iter < H_dd_vector.size();
                                 ++tmp_iter) {
                                //                            std::cout << "   "
                                //                            <<
                                //                            tmp_double_excit_vector[tmp_iter].second
                                //                            << std::endl;
                            }
                            break;
                        }
                    }
                }

                // DO ZMIANY
                // to NIE POWINIEN byc wektor - rowazam JEDNO podwojne
                // wzbudzenie!!!
                std::vector<double> tmp_H_dd_vector;
                std::vector<Dress_matrix> dress;

                // III - formowanie dressa na bazie powyzszego
                // sprawdzamy czy nie jest to wektor pusty
                // DRESS POWINIEN BYC MAPA, NEI WEKTOREM
                // istnieje przeceiz mozliwosc, ze nie wszystkei stany sa
                // dressowane, co wtedy z zamiana wektorow?
                if (tmp_double_excit_vector.empty()) {
                    // dodawanmie kompletnie pustego dressa tak by rzmiary sie
                    // zgadzaly - PARANOJA !! (patrz linijke wyzej)
                    std::pair<std::vector<Dress_matrix>, std::vector<double>>
                        single_excitation_pair;
                    single_excitation_pair.first = dress;
                    single_excitation_pair.second = tmp_H_dd_vector;
                    single_excitations_vector.push_back(single_excitation_pair);
                    //            std::cout << "PUSTY WEKTOR - SPRAWDZIC
                    //            DLACZEGO!!" << std::endl;
                    continue;
                }
                // wyliczenie calek dla pierwszego w kolejnosci wzbudzenia -
                // jezelei zerowe to drugie etc. formowanie dressa dla
                // niezerowego sprzezenia

                std::size_t flag = 0;

                for (std::size_t i = 0; i < tmp_double_excit_vector.size();
                     ++i) {
                    const std::size_t j =
                        tmp_double_excit_vector[i].first.first;
                    const std::size_t b =
                        tmp_double_excit_vector[i].first.second;
                    const double H_dd = tmp_double_excit_vector[i].second;
                    const double mianownik = omega - H_dd;

                    std::map<std::pair<std::size_t, std::size_t>, double>
                        diagonal_elements;
                    arma::mat fake_Jocc = fm_gen.exchange_matrix(
                        m_ia2fakePind[j], core::SPIN_ALPHA);
                    arma::mat fake_Jvirt = fm_gen.exchange_matrix(
                        m_ia2fakePind[b + no_occ], core::SPIN_ALPHA);
                    // PRZYCIAC DO N_OCC X N_VIRT
                    arma::mat fakeFocc =
                        m_mo_coeffs.t() * fake_Jocc * m_mo_coeffs;
                    arma::mat fakeFvirt =
                        m_mo_coeffs.t() * fake_Jvirt * m_mo_coeffs;

                    // arma::mat testFakeF( fakeF.n_rows, fakeF.n_cols,
                    // arma::fill::zeros );
                    //            std::cout << "Rozpatruje konfiguracje
                    //            podwojnie wzbudzona:" << std::endl
                    //                      << "       j: " << j +1 << " b: " <<
                    //                      b + no_occ + 1 << std::endl
                    //                      << "       j: " << j +1 << " b: " <<
                    //                      b + no_occ + 1 << std::endl
                    //                      << "       o energii: "<<  H_dd <<
                    //                      ", mianownik poprawki ma wartosc: "
                    //                      << mianownik << std::endl;

                    flag = 0;

                    for (std::size_t i = 0; i < no_occ; ++i) {
                        for (std::size_t a = 0; a < no_virt; ++a) {
                            if (std::abs(coeffs(i * no_virt + a, n)) > 5e-2) {

                                //                        std::cout << " istotna
                                //                        konfiguracja
                                //                        pojedynczo wzbudzona:
                                //                        i->a: "
                                //                                  << i + 1 <<
                                //                                  "->" << a +
                                //                                  no_occ +1
                                //                                  << " (coeff:
                                //                                  " <<
                                //                                  coeffs(i *
                                //                                  no_virt + a,
                                //                                  n) << ")" <<
                                //                                  std::endl;

                                std::pair<std::size_t, std::size_t> ia;
                                ia.first = i;
                                ia.second = a;

                                // zaleznie od roznicy w konfiguracjach q oraz D

                                // start i koniec ten sam - wiecej calek
                                if (i == j && a == b) {
                                    //                             std::cout <<
                                    //                             "JEDNOELEKTRONOWE!!
                                    //                             - chwilowo
                                    //                             zerowane"
                                    //                             <<std::endl;

                                    //                             const double
                                    //                             wartosc_calki
                                    //                             =
                                    //                                 mo_one_e_int_gen->value(a
                                    //                                 + no_occ
                                    //                                 ,i) +
                                    //                                 G_mo_ov(a
                                    //                                 + no_occ,
                                    //                                 i);

                                    //                             std::cout <<
                                    //                             " liczona
                                    //                             calka
                                    //                             jednoelektronowa:
                                    //                             "
                                    //                                       <<
                                    //                                       a +
                                    //                                       no_occ
                                    //                                       +1
                                    //                                       <<
                                    //                                       ",
                                    //                                       "
                                    //                                       <<
                                    //                                       i +
                                    //                                       1<<
                                    //                                       " "
                                    //                                       <<
                                    //                                       mo_one_e_int_gen->value(a
                                    //                                       +
                                    //                                       no_occ
                                    //                                       ,i)
                                    //                                       <<
                                    //                                       " "
                                    //                                       <<
                                    //                                       std::endl
                                    //                                       <<
                                    //                                       "liczona
                                    //                                       calka
                                    //                                       dwuelektronowa:
                                    //                                       "
                                    //                                       <<
                                    //                                       a +
                                    //                                       no_occ
                                    //                                       +1
                                    //                                       <<
                                    //                                       ",
                                    //                                       "
                                    //                                       <<
                                    //                                       i +
                                    //                                       1
                                    //                                       <<
                                    //                                       " "
                                    //                                       <<
                                    //                                       G_mo_ov(a
                                    //                                       +
                                    //                                       no_occ
                                    //                                       ,i)
                                    //                                       <<
                                    //                                       std::endl;
                                    //                             if(std::abs(wartosc_calki)
                                    //                             > 1e-5){
                                    //                                 diagonal_elements[ia]
                                    //                                 =
                                    //                                 wartosc_calki;
                                    //                                 ++flag;
                                    //                             }
                                }

                                // start ten sam - calki "3x virt" bez zmiany
                                // znaku
                                else if (i == j) {
                                    const double wartosc_calki =
                                        -fakeFvirt(i, a + no_occ);

                                    if (std::abs(wartosc_calki) > 1e-5) {
                                        diagonal_elements[ia] = wartosc_calki;
                                        ++flag;
                                    }
                                }

                                // koniec ten sam - calki "3x occ" ze zmiana
                                // znaku
                                else if (a == b) {
                                    const double wartosc_calki =
                                        fakeFocc(i, a + no_occ);

                                    if (std::abs(wartosc_calki) > 1e-5) {
                                        diagonal_elements[ia] = wartosc_calki;
                                        ++flag;
                                    }
                                }

                                else {
                                    //                            std::cout << "
                                    //                            calka ZEROWA"
                                    //                            <<std::endl;
                                    const double wartosc_calki = 0.0;
                                    diagonal_elements[ia] = wartosc_calki;
                                }
                            }
                        }
                    }

                    if (flag > 0) {
                        if (state > 1)
                            state -= 1;
                        else if (state == 1) {
                            state = 0;
                            Dress_matrix excitation(diagonal_elements,
                                                    mianownik);
                            dress.push_back(excitation);
                            tmp_H_dd_vector.push_back(H_dd);

                            break;
                        }
                    } else {
                        // std::cout << std::endl << "brak istotnych calek!!!
                        // "<< std::endl;
                    }
                }

                std::pair<std::vector<Dress_matrix>, std::vector<double>>
                    single_excitation_pair;
                single_excitation_pair.first = dress;
                single_excitation_pair.second = tmp_H_dd_vector;
                single_excitations_vector.push_back(single_excitation_pair);

                nstate += 1;
            }
        }

        void Dress::update_dress(const arma::vec& new_tddft_energies,
                                 const arma::mat& new_coeffs)
        {

            assert(single_excitations_vector.size() ==
                   new_tddft_energies.size());
            arma::vec tmp_tddft_energies(tddft_energies);
            Full_dress tmp_single_excitations_vector(single_excitations_vector);

            const arma::mat overlap = trans(coeffs) * new_coeffs;

            for (size_t i = 0; i < overlap.n_rows; ++i) {
                double max_in_row = 0.0;
                size_t new_position = 0;
                for (size_t j = 0; j < overlap.n_cols; ++j) {
                    if (std::abs(overlap(i, j)) > max_in_row) {
                        max_in_row = std::abs(overlap(i, j));
                        new_position = j;
                    }
                }

                // znaleziono nowa pozycje wektora (moze pozostac w tym samym
                // miejscu)
                //        std::cout << " Nowa pozycja wektora nr " << i + 1 <<"
                //        to: " <<  new_position +1 << std::endl
                //                  << " Dawna energia : " << tddft_energies[i]
                //                  << " wynosi teraz: " <<
                //                  new_tddft_energies[new_position] <<
                //                  std::endl;

                // odczytanie dotychczasowych wartosci dressa
                std::vector<Dress_matrix>& new_dress_vector =
                    single_excitations_vector[i].first;
                std::vector<double> H_dd_vector =
                    single_excitations_vector[i].second;

                // tu nastepuje modyfikacja mianownika dressa
                for (size_t iter = 0; iter < new_dress_vector.size(); ++iter) {
                    // uzyskuje informacje o wartosci mianownika

                    // double tmp_denominator =
                    // new_dress_vector[iter].denominator();

                    // wypisuje wszystko - do usuniecia
                    //            std::cout << "    stara omega TDDFT: " <<
                    //            tmp_denominator + H_dd_vector[iter]
                    //                      << " nowa energia: " <<
                    //                      new_tddft_energies[new_position] <<
                    //                      std::endl;
                    //
                    //            std::cout << "    stary mianownik: " <<
                    //            tmp_denominator
                    //                      << " nowy mianownik: " <<
                    //                      new_tddft_energies[new_position] -
                    //                      H_dd_vector[iter] << std::endl;
                    // ustawiam nowy mianownik

                    new_dress_vector[iter].set_denominator(
                        new_tddft_energies[new_position] - H_dd_vector[iter]);
                }
                // dawne i-te wzbudzenie uzyskalo nowy mianownik dressa (nowa
                // energia tegoz wzbudzenia) i jest wstawiane w nowe miejsce
                tmp_single_excitations_vector[new_position] =
                    single_excitations_vector[i];
            }

            // nadpisywanie starych wartosci
            single_excitations_vector = tmp_single_excitations_vector;
            tddft_energies = new_tddft_energies;
            coeffs = new_coeffs;
        }

        std::vector<Dress_matrix> Dress::get_dress_matrix() const
        {

            std::vector<Dress_matrix> dress_matrix_vector;

            for (size_t i = 0; i < single_excitations_vector.size(); ++i) {
                std::vector<Dress_matrix> tmp =
                    single_excitations_vector[i].first;
                for (size_t j = 0; j < tmp.size(); ++j) {
                    Dress_matrix tmp_matrix = tmp[j];
                    dress_matrix_vector.push_back(tmp_matrix);
                }
            }

            return dress_matrix_vector;
        }
    }
}
