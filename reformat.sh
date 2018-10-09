#! /usr/bin/env bash

for d in compat_kit core_kit cphf_kit el_stat_prop grid_kit gto_d1_kit gto_d2_kit gto_kit io_kit misc_kit niedoida posthf_kit property_kit scf_kit semi_empirical_kit symmetry_kit td_kit xc_kit
do
    for dd in $d/*
    do
        for f in ${dd}/*.cpp ${dd}/*.hpp
        do
            if [ -f $f ]
            then
               clang-format -i -style=file -verbose -sort-includes $f
            fi
        done
    done
done
