/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<sstream>
#include<string>
#include<gtest/gtest.h>
#include<yaml_inputter/templated_filler.hpp>
#include"test_cases_inputs.hpp"

namespace {

    struct InpudData {

        struct LineSegment {

            struct Point {
                int x;
                int y;
            };
            Point pA;
            Point pB;
        };
        unsigned method;
        double energy;
        LineSegment s1 = {
            {144, 155},
            {166, 177}
        };
        LineSegment s2 = {
            {244, 255},
            {266, 277}
        };
    };

} // end of anonymous namespace

void parse_fill_optional(const YAML::Node& root,
        InpudData& id,
        std::ostream& log, std::ostream& logerr) {
    const yaml_inputter::Filler filler(root, log, logerr);
    filler.target(id.method).fill_optional("method");
    filler.target(id.energy).fill_optional("energy");
    filler.target(id.s1.pA.x).fill_optional("segments", 0, "pA", "x");
    filler.target(id.s1.pA.y).fill_optional("segments", 0, "pA", "y");
    filler.target(id.s1.pB.x).fill_optional("segments", 0, "pB", "x");
    filler.target(id.s1.pB.y).fill_optional("segments", 0, "pB", "y");
    filler.target(id.s2.pA.x).fill_optional("segments", 1, "pA", "x");
    filler.target(id.s2.pA.y).fill_optional("segments", 1, "pA", "y");
    filler.target(id.s2.pB.x).fill_optional("segments", 1, "pB", "x");
    filler.target(id.s2.pB.y).fill_optional("segments", 1, "pB", "y");
}

// *****************************************************************************

TEST(templated_filler, fill_optional_test_case_0) {
    std::string correct_log = "\
[INFO] Filler filled optional field $ROOT->method successfully.\n\
[INFO] Filler filled optional field $ROOT->energy successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pA->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pA->y successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pB->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pB->y successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->1->pA->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->1->pA->y successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->1->pB->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->1->pB->y successfully.\n\
";
    std::string correct_logerr = "";
    const YAML::Node root = YAML::Load(inp_tests_case_0);
    std::ostringstream log_stream, logerr_stream;
    InpudData id;
    ASSERT_NO_THROW(parse_fill_optional(root, id, log_stream, logerr_stream));
    EXPECT_EQ(id.method, 2);
    EXPECT_EQ(id.energy, 5.6);
    EXPECT_EQ(id.s1.pA.x, 1);
    EXPECT_EQ(id.s1.pA.y, 5);
    EXPECT_EQ(id.s1.pB.x, 1);
    EXPECT_EQ(id.s1.pB.y, 6);
    EXPECT_EQ(id.s2.pA.x, 2);
    EXPECT_EQ(id.s2.pA.y, 5);
    EXPECT_EQ(id.s2.pB.x, 2);
    EXPECT_EQ(id.s2.pB.y, 6);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);

}

// *****************************************************************************

TEST(templated_filler, fill_optional_test_case_1) {
    std::string correct_log = "\
[INFO] Filler filled optional field $ROOT->method successfully.\n\
[INFO] Filler filled optional field $ROOT->energy successfully.\n\
[INFO] Filler did not fill optional field $ROOT->segments->0->pA->x as the value was not given.\n\
[INFO] Filler did not fill optional field $ROOT->segments->0->pA->y as the value was not given.\n\
[INFO] Filler did not fill optional field $ROOT->segments->0->pB->x as the value was not given.\n\
[INFO] Filler did not fill optional field $ROOT->segments->0->pB->y as the value was not given.\n\
[INFO] Filler did not fill optional field $ROOT->segments->1->pA->x as the value was not given.\n\
[INFO] Filler did not fill optional field $ROOT->segments->1->pA->y as the value was not given.\n\
[INFO] Filler did not fill optional field $ROOT->segments->1->pB->x as the value was not given.\n\
[INFO] Filler did not fill optional field $ROOT->segments->1->pB->y as the value was not given.\n\
";
    std::string correct_logerr = "";
    const YAML::Node root = YAML::Load(inp_tests_case_1);
    std::ostringstream log_stream, logerr_stream;
    InpudData id;
    ASSERT_NO_THROW(parse_fill_optional(root, id, log_stream, logerr_stream));
    EXPECT_EQ(id.method, 2);
    EXPECT_EQ(id.energy, 5.6);
    EXPECT_EQ(id.s1.pA.x, 144);
    EXPECT_EQ(id.s1.pA.y, 155);
    EXPECT_EQ(id.s1.pB.x, 166);
    EXPECT_EQ(id.s1.pB.y, 177);
    EXPECT_EQ(id.s2.pA.x, 244);
    EXPECT_EQ(id.s2.pA.y, 255);
    EXPECT_EQ(id.s2.pB.x, 266);
    EXPECT_EQ(id.s2.pB.y, 277);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}

// *****************************************************************************

TEST(templated_filler, fill_optional_test_case_2) {
    std::string correct_log = "\
[INFO] Filler filled optional field $ROOT->method successfully.\n\
[INFO] Filler filled optional field $ROOT->energy successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pA->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pA->y successfully.\n\
";
    std::string correct_logerr = "\
[ERROR] Error while reading $ROOT->segments->0->pB->x node.\n\
[PROBLEM] The yaml::node $ROOT->segments->0->pB is not a map.\n\
";
    const YAML::Node root = YAML::Load(inp_tests_case_2);
    std::ostringstream log_stream, logerr_stream;
    InpudData id;
    ASSERT_THROW(parse_fill_optional(root, id, log_stream, logerr_stream), std::runtime_error);
    EXPECT_EQ(id.method, 2);
    EXPECT_EQ(id.energy, 5.6);
    EXPECT_EQ(id.s1.pA.x, 1);
    EXPECT_EQ(id.s1.pA.y, 5);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}

// *****************************************************************************

TEST(templated_filler, fill_optional_test_case_3) {
    std::string correct_log = "\
[INFO] Filler filled optional field $ROOT->method successfully.\n\
[INFO] Filler filled optional field $ROOT->energy successfully.\n\
";
    std::string correct_logerr = "\
[ERROR] Error while reading $ROOT->segments->0->pA->x node.\n\
[PROBLEM] The yaml::node $ROOT->segments is not a sequence.\n\
";
    const YAML::Node root = YAML::Load(inp_tests_case_3);
    std::ostringstream log_stream, logerr_stream;
    InpudData id;
    ASSERT_THROW(parse_fill_optional(root, id, log_stream, logerr_stream), std::runtime_error);
    EXPECT_EQ(id.method, 2);
    EXPECT_EQ(id.energy, 5.6);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}

// *****************************************************************************

TEST(templated_filler, fill_optional_test_case_4) {
    std::string correct_log = "\
[INFO] Filler filled optional field $ROOT->method successfully.\n\
[INFO] Filler filled optional field $ROOT->energy successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pA->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pA->y successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pB->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pB->y successfully.\n\
[INFO] Filler did not fill optional field $ROOT->segments->1->pA->x as the value was not given.\n\
[INFO] Filler did not fill optional field $ROOT->segments->1->pA->y as the value was not given.\n\
[INFO] Filler did not fill optional field $ROOT->segments->1->pB->x as the value was not given.\n\
[INFO] Filler did not fill optional field $ROOT->segments->1->pB->y as the value was not given.\n\
";
    std::string correct_logerr = "";
    const YAML::Node root = YAML::Load(inp_tests_case_4);
    std::ostringstream log_stream, logerr_stream;
    InpudData id;
    ASSERT_NO_THROW(parse_fill_optional(root, id, log_stream, logerr_stream));
    EXPECT_EQ(id.method, 2);
    EXPECT_EQ(id.energy, 5.6);
    EXPECT_EQ(id.s1.pA.x, 1);
    EXPECT_EQ(id.s1.pA.y, 5);
    EXPECT_EQ(id.s1.pB.x, 1);
    EXPECT_EQ(id.s1.pB.y, 6);
    EXPECT_EQ(id.s2.pA.x, 244);
    EXPECT_EQ(id.s2.pA.y, 255);
    EXPECT_EQ(id.s2.pB.x, 266);
    EXPECT_EQ(id.s2.pB.y, 277);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}

// *****************************************************************************

TEST(templated_filler, fill_optional_test_case_5) {
    std::string correct_log = "\
[INFO] Filler filled optional field $ROOT->method successfully.\n\
[INFO] Filler filled optional field $ROOT->energy successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pA->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pA->y successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pB->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pB->y successfully.\n\
";
    std::string correct_logerr = "\
[ERROR] Error while reading $ROOT->segments->1->pA->x node.\n\
[PROBLEM] yaml-bad-conversion error.\n\
";
    const YAML::Node root = YAML::Load(inp_tests_case_5);
    std::ostringstream log_stream, logerr_stream;
    InpudData id;
    ASSERT_THROW(parse_fill_optional(root, id, log_stream, logerr_stream), std::runtime_error);
    EXPECT_EQ(id.method, 2);
    EXPECT_EQ(id.energy, 5.6);
    EXPECT_EQ(id.s1.pA.x, 1);
    EXPECT_EQ(id.s1.pA.y, 5);
    EXPECT_EQ(id.s1.pB.x, 1);
    EXPECT_EQ(id.s1.pB.y, 6);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}

// *****************************************************************************

TEST(templated_filler, fill_optional_test_case_6) {
    std::string correct_log = "\
[INFO] Filler filled optional field $ROOT->method successfully.\n\
[INFO] Filler filled optional field $ROOT->energy successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pA->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pA->y successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pB->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pB->y successfully.\n\
[INFO] Filler did not fill optional field $ROOT->segments->1->pA->x as the value was not given.\n\
[INFO] Filler filled optional field $ROOT->segments->1->pA->y successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->1->pB->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->1->pB->y successfully.\n\
";
    std::string correct_logerr = "";
    const YAML::Node root = YAML::Load(inp_tests_case_6);
    std::ostringstream log_stream, logerr_stream;
    InpudData id;
    ASSERT_NO_THROW(parse_fill_optional(root, id, log_stream, logerr_stream));
    EXPECT_EQ(id.method, 2);
    EXPECT_EQ(id.energy, 5.6);
    EXPECT_EQ(id.s1.pA.x, 1);
    EXPECT_EQ(id.s1.pA.y, 5);
    EXPECT_EQ(id.s1.pB.x, 1);
    EXPECT_EQ(id.s1.pB.y, 6);
    EXPECT_EQ(id.s2.pA.x, 244);
    EXPECT_EQ(id.s2.pA.y, 5);
    EXPECT_EQ(id.s2.pB.x, 2);
    EXPECT_EQ(id.s2.pB.y, 6);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}

// *****************************************************************************

TEST(templated_filler, fill_optional_test_case_7) {
    std::string correct_log = "\
[INFO] Filler filled optional field $ROOT->method successfully.\n\
[INFO] Filler filled optional field $ROOT->energy successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pA->x successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pA->y successfully.\n\
[INFO] Filler filled optional field $ROOT->segments->0->pB->x successfully.\n\
";
    std::string correct_logerr = "\
[ERROR] Error while reading $ROOT->segments->0->pB->y node.\n\
[PROBLEM] yaml-bad-conversion error.\n\
";
    const YAML::Node root = YAML::Load(inp_tests_case_7);
    std::ostringstream log_stream, logerr_stream;
    InpudData id;
    ASSERT_THROW(parse_fill_optional(root, id, log_stream, logerr_stream), std::runtime_error);
    EXPECT_EQ(id.method, 2);
    EXPECT_EQ(id.energy, 5.6);
    EXPECT_EQ(id.s1.pA.x, 1);
    EXPECT_EQ(id.s1.pA.y, 5);
    EXPECT_EQ(id.s1.pB.x, 1);
    EXPECT_EQ(log_stream.str(), correct_log);
    EXPECT_EQ(logerr_stream.str(), correct_logerr);
}

