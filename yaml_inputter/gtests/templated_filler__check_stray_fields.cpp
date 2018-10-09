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

TEST(templated_filler, check_stray_fields_test_case_0_0) {
    // NIE WIEM, czy ten test nie do kitu, bo jego wynik jest undefined.
    std::string correct_log = "";
    std::string correct_logerr = "\
[ERROR] Error while checking stray fields of $ROOT->segments->1.\n\
[PROBLEM] Stray field $ROOT->segments->1->pA found.\n\
";

    const YAML::Node root = YAML::Load(inp_tests_case_0);
    std::ostringstream log_stream, logerr_stream;
    const yaml_inputter::Filler filler(root, log_stream, logerr_stream);

    std::set<std::string> valid_fields_0 = {{}};
    ASSERT_THROW(filler.check_stray_fields(valid_fields_0, "segments", 1), std::runtime_error);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);

}


TEST(templated_filler, check_stray_fields_test_case_0_1) {
    std::string correct_log = "";
    std::string correct_logerr = "\
[ERROR] Error while checking stray fields of $ROOT->segments->1.\n\
[PROBLEM] Stray field $ROOT->segments->1->pB found.\n\
";

    const YAML::Node root = YAML::Load(inp_tests_case_0);
    std::ostringstream log_stream, logerr_stream;
    const yaml_inputter::Filler filler(root, log_stream, logerr_stream);

    std::set<std::string> valid_fields_0 = {"pA"};
    ASSERT_THROW(filler.check_stray_fields(valid_fields_0, "segments", 1), std::runtime_error);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}

TEST(templated_filler, check_stray_fields_test_case_0_2) {
    std::string correct_log = "";
    std::string correct_logerr = "";

    const YAML::Node root = YAML::Load(inp_tests_case_0);
    std::ostringstream log_stream, logerr_stream;
    const yaml_inputter::Filler filler(root, log_stream, logerr_stream);

    std::set<std::string> valid_fields_0 = {"pA", "pB"};
    ASSERT_NO_THROW(filler.check_stray_fields(valid_fields_0, "segments", 1));
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}


TEST(templated_filler, check_stray_fields_test_case_0_3) {
    std::string correct_log = "";
    std::string correct_logerr = "\
[ERROR] Error while checking stray fields of $ROOT->segments.\n\
[PROBLEM] The yaml::node $ROOT->segments is not a map.\n\
";

    const YAML::Node root = YAML::Load(inp_tests_case_0);
    std::ostringstream log_stream, logerr_stream;
    const yaml_inputter::Filler filler(root, log_stream, logerr_stream);

    std::set<std::string> valid_fields_0 = {{}};
    ASSERT_THROW(filler.check_stray_fields(valid_fields_0, "segments"), std::runtime_error);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}