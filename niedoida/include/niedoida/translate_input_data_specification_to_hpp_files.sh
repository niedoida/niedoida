#!/bin/bash

# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

script_dir=`dirname $0`
cd "${script_dir}"
script_dir=`pwd`
project_root_dir=`cd ../../../; pwd`

echo "script_dir       : ${script_dir}"
echo "project_root_dir : ${project_root_dir}"

code_generator="${project_root_dir}/tools/yaml_inputter_code_generator_python3/yaml_inputter_code_generator.py"
PYTHONPATH="${project_root_dir}/external_packages/lib"

echo $PYTHONPATH
#cd "${project_root_dir}/external_packages/lib"
#ls

python3 "$code_generator" 'input_data_specification.yaml' -n 'niedoida' \
-i '<vector>' '<string>' '<armadillo>' '<boost/optional.hpp>' '<core_kit/periodic_table.hpp>' '<io_kit/logger.hpp>' -c 'input_data.hpp' \
-j '<niedoida/input_data_yaml_conversions.hpp>' -f 'input_data_fill_functions.hpp'
