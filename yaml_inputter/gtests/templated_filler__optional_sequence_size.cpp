/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<gtest/gtest.h>
#include<sstream>
#include<string>
#include<vector>
#include<yaml_inputter/templated_filler.hpp>
#include<gtest/gtest.h>
#include"test_cases_inputs.hpp"


// *****************************************************************************

TEST(templated_filler, optional_sequence_test_case_0) {
    std::string correct_log = "[INFO] Filler got the optional sequence $ROOT->segments size successfully.\n";
    std::string correct_logerr = "";

    const YAML::Node root = YAML::Load(inp_tests_case_0);
    std::ostringstream log_stream, logerr_stream;
    const yaml_inputter::Filler filler(root, log_stream, logerr_stream);

    int size = -1;
    ASSERT_NO_THROW(size = filler.optional_sequence_size("segments"));
    EXPECT_EQ(size, 2);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}

// *****************************************************************************

TEST(templated_filler, optional_sequence_test_case_1) {
    std::string correct_log = "\
[INFO] Filler set the optional sequence $ROOT->segments size to be equal 0 as the sequence was not given.\n\
";
    std::string correct_logerr = "";

    const YAML::Node root = YAML::Load(inp_tests_case_1);
    std::ostringstream log_stream, logerr_stream;
    const yaml_inputter::Filler filler(root, log_stream, logerr_stream);

    int size = -1;
    ASSERT_NO_THROW(size = filler.optional_sequence_size("segments"));
    EXPECT_EQ(size, 0);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}

// *****************************************************************************

TEST(templated_filler, optional_sequence_test_case_3) {
    std::string correct_log = "";
    std::string correct_logerr = "\
[ERROR] Error while getting size of the optional sequence $ROOT->segments.\n\
[PROBLEM] The yaml::node $ROOT->segments is not a sequence.\n\
";

    const YAML::Node root = YAML::Load(inp_tests_case_3);
    std::ostringstream log_stream, logerr_stream;
    const yaml_inputter::Filler filler(root, log_stream, logerr_stream);

    ASSERT_THROW(filler.optional_sequence_size("segments"), std::runtime_error);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}
