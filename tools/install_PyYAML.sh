#!/bin/bash

my_dir=`dirname $0`
cd "${my_dir}"
cd "../external_packages"

test -d lib || mkdir lib

PyYAML='PyYAML-3.12'

wget "http://pyyaml.org/download/pyyaml/${PyYAML}.tar.gz"
rm -rf "${PyYAML}"
tar -xvzf "${PyYAML}.tar.gz" # creates "${PyYAML}" folder
cd "${PyYAML}" 
python3 setup.py --without-libyaml build 
cd ../ # we are in external_packages directory again
cp -r "${PyYAML}/build/lib.linux-x86_64-3.4/yaml" lib
rm -rf "${PyYAML}"
