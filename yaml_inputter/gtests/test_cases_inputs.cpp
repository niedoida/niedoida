/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<string>

extern const std::string inp_tests_case_0 = R"HERE(
method: 2
energy: 5.6
segments:
  - pA: {x: 1, y: 5}
    pB: {x: 1, y: 6}
  - pA: {x: 2, y: 5}
    pB: {x: 2, y: 6}
)HERE";

extern const std::string inp_tests_case_1 = R"HERE(
method: 2
energy: 5.6
segments1: # OOps, The segment should be in the segments node!
  pA: {x: 1, y: 5}
  pB: {x: 1, y: 6}
segments2: # OOps, The segment should be in the segments node!
  pA: {x: 2, y: 5}
  pB: {x: 2, y: 6} 
)HERE";

extern const std::string inp_tests_case_2 = R"HERE(
method: 2
energy: 5.6
segments:
  - pA: {x: 1, y: 5}
    pB: [ 1, 6 ] # OOps, pB should be a map node!
  - pA: {x: 2, y: 5}
    pB: {x: 2, y: 6}
)HERE";

extern const std::string inp_tests_case_3 = R"HERE(
method: 2
energy: 5.6
segments: # OOps, the 'segments' node should be a list of segments!
  p1A: {x: 1, y: 5}
  p1B: {x: 1, y: 6}
  p2A: {x: 2, y: 5}
  p2B: {x: 2, y: 6}
)HERE";

extern const std::string inp_tests_case_4 = R"HERE(
method: 2
energy: 5.6
segments: # OOps, missing the second line segment!
  - pA: {x: 1, y: 5}
    pB: {x: 1, y: 6}
)HERE";

extern const std::string inp_tests_case_5 = R"HERE(
method: 2
energy: 5.6
segments:
  - pA: {x: 1, y: 5}
    pB: {x: 1, y: 6}
  - pA: {x: 2.7, y: 5} # OOps, not integer value!
    pB: {x: 2, y: 6}
)HERE";

extern const std::string inp_tests_case_6 = R"HERE(
method: 2
energy: 5.6
segments:
  - pA: {x: 1, y: 5}
    pB: {x: 1, y: 6}
  - pA: {x: , y: 5} # OOps, missing value!
    pB: {x: 2, y: 6}
)HERE";

extern const std::string inp_tests_case_7 = R"HERE(    
method: 2
energy: 5.6
segments:
  - pA: {x: 1, y: 5}
    pB: {x: 1, y: [8, 9]} # OOps, y should be a scalar.
  - pA: {x: 2, y: 5}
    pB: {x: 2, y: 6}
)HERE";