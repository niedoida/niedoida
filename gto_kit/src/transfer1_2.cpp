/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/transfer.hpp"

#include "gto_kit/os1_constants.hpp"

namespace niedoida {
    namespace gto {

        void transfer_16_1(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 816 * OS1_S1 + 1) = prefactor_x * *(b + 816 * OS1_S1 + 0) - 
                p_over_q * *(b + 969 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 680 * OS1_S1 + 0);
            *(b + 816 * OS1_S1 + 2) = prefactor_y * *(b + 816 * OS1_S1 + 0) - 
                p_over_q * *(b + 970 * OS1_S1 + 0);
            *(b + 816 * OS1_S1 + 3) = prefactor_z * *(b + 816 * OS1_S1 + 0) - 
                p_over_q * *(b + 971 * OS1_S1 + 0);
            *(b + 817 * OS1_S1 + 1) = prefactor_x * *(b + 817 * OS1_S1 + 0) - 
                p_over_q * *(b + 970 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 681 * OS1_S1 + 0);
            *(b + 817 * OS1_S1 + 2) = prefactor_y * *(b + 817 * OS1_S1 + 0) - 
                p_over_q * *(b + 972 * OS1_S1 + 0) +
                one_over_two_q * *(b + 680 * OS1_S1 + 0);
            *(b + 817 * OS1_S1 + 3) = prefactor_z * *(b + 817 * OS1_S1 + 0) - 
                p_over_q * *(b + 973 * OS1_S1 + 0);
            *(b + 818 * OS1_S1 + 1) = prefactor_x * *(b + 818 * OS1_S1 + 0) - 
                p_over_q * *(b + 971 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 682 * OS1_S1 + 0);
            *(b + 818 * OS1_S1 + 2) = prefactor_y * *(b + 818 * OS1_S1 + 0) - 
                p_over_q * *(b + 973 * OS1_S1 + 0);
            *(b + 818 * OS1_S1 + 3) = prefactor_z * *(b + 818 * OS1_S1 + 0) - 
                p_over_q * *(b + 974 * OS1_S1 + 0) +
                one_over_two_q * *(b + 680 * OS1_S1 + 0);
            *(b + 819 * OS1_S1 + 1) = prefactor_x * *(b + 819 * OS1_S1 + 0) - 
                p_over_q * *(b + 972 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 683 * OS1_S1 + 0);
            *(b + 819 * OS1_S1 + 2) = prefactor_y * *(b + 819 * OS1_S1 + 0) - 
                p_over_q * *(b + 975 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 681 * OS1_S1 + 0);
            *(b + 819 * OS1_S1 + 3) = prefactor_z * *(b + 819 * OS1_S1 + 0) - 
                p_over_q * *(b + 976 * OS1_S1 + 0);
            *(b + 820 * OS1_S1 + 1) = prefactor_x * *(b + 820 * OS1_S1 + 0) - 
                p_over_q * *(b + 973 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 684 * OS1_S1 + 0);
            *(b + 820 * OS1_S1 + 2) = prefactor_y * *(b + 820 * OS1_S1 + 0) - 
                p_over_q * *(b + 976 * OS1_S1 + 0) +
                one_over_two_q * *(b + 682 * OS1_S1 + 0);
            *(b + 820 * OS1_S1 + 3) = prefactor_z * *(b + 820 * OS1_S1 + 0) - 
                p_over_q * *(b + 977 * OS1_S1 + 0) +
                one_over_two_q * *(b + 681 * OS1_S1 + 0);
            *(b + 821 * OS1_S1 + 1) = prefactor_x * *(b + 821 * OS1_S1 + 0) - 
                p_over_q * *(b + 974 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 685 * OS1_S1 + 0);
            *(b + 821 * OS1_S1 + 2) = prefactor_y * *(b + 821 * OS1_S1 + 0) - 
                p_over_q * *(b + 977 * OS1_S1 + 0);
            *(b + 821 * OS1_S1 + 3) = prefactor_z * *(b + 821 * OS1_S1 + 0) - 
                p_over_q * *(b + 978 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 682 * OS1_S1 + 0);
            *(b + 822 * OS1_S1 + 1) = prefactor_x * *(b + 822 * OS1_S1 + 0) - 
                p_over_q * *(b + 975 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 686 * OS1_S1 + 0);
            *(b + 822 * OS1_S1 + 2) = prefactor_y * *(b + 822 * OS1_S1 + 0) - 
                p_over_q * *(b + 979 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 683 * OS1_S1 + 0);
            *(b + 822 * OS1_S1 + 3) = prefactor_z * *(b + 822 * OS1_S1 + 0) - 
                p_over_q * *(b + 980 * OS1_S1 + 0);
            *(b + 823 * OS1_S1 + 1) = prefactor_x * *(b + 823 * OS1_S1 + 0) - 
                p_over_q * *(b + 976 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 687 * OS1_S1 + 0);
            *(b + 823 * OS1_S1 + 2) = prefactor_y * *(b + 823 * OS1_S1 + 0) - 
                p_over_q * *(b + 980 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 684 * OS1_S1 + 0);
            *(b + 823 * OS1_S1 + 3) = prefactor_z * *(b + 823 * OS1_S1 + 0) - 
                p_over_q * *(b + 981 * OS1_S1 + 0) +
                one_over_two_q * *(b + 683 * OS1_S1 + 0);
            *(b + 824 * OS1_S1 + 1) = prefactor_x * *(b + 824 * OS1_S1 + 0) - 
                p_over_q * *(b + 977 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 688 * OS1_S1 + 0);
            *(b + 824 * OS1_S1 + 2) = prefactor_y * *(b + 824 * OS1_S1 + 0) - 
                p_over_q * *(b + 981 * OS1_S1 + 0) +
                one_over_two_q * *(b + 685 * OS1_S1 + 0);
            *(b + 824 * OS1_S1 + 3) = prefactor_z * *(b + 824 * OS1_S1 + 0) - 
                p_over_q * *(b + 982 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 684 * OS1_S1 + 0);
            *(b + 825 * OS1_S1 + 1) = prefactor_x * *(b + 825 * OS1_S1 + 0) - 
                p_over_q * *(b + 978 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 689 * OS1_S1 + 0);
            *(b + 825 * OS1_S1 + 2) = prefactor_y * *(b + 825 * OS1_S1 + 0) - 
                p_over_q * *(b + 982 * OS1_S1 + 0);
            *(b + 825 * OS1_S1 + 3) = prefactor_z * *(b + 825 * OS1_S1 + 0) - 
                p_over_q * *(b + 983 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 685 * OS1_S1 + 0);
            *(b + 826 * OS1_S1 + 1) = prefactor_x * *(b + 826 * OS1_S1 + 0) - 
                p_over_q * *(b + 979 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 690 * OS1_S1 + 0);
            *(b + 826 * OS1_S1 + 2) = prefactor_y * *(b + 826 * OS1_S1 + 0) - 
                p_over_q * *(b + 984 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 686 * OS1_S1 + 0);
            *(b + 826 * OS1_S1 + 3) = prefactor_z * *(b + 826 * OS1_S1 + 0) - 
                p_over_q * *(b + 985 * OS1_S1 + 0);
            *(b + 827 * OS1_S1 + 1) = prefactor_x * *(b + 827 * OS1_S1 + 0) - 
                p_over_q * *(b + 980 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 691 * OS1_S1 + 0);
            *(b + 827 * OS1_S1 + 2) = prefactor_y * *(b + 827 * OS1_S1 + 0) - 
                p_over_q * *(b + 985 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 687 * OS1_S1 + 0);
            *(b + 827 * OS1_S1 + 3) = prefactor_z * *(b + 827 * OS1_S1 + 0) - 
                p_over_q * *(b + 986 * OS1_S1 + 0) +
                one_over_two_q * *(b + 686 * OS1_S1 + 0);
            *(b + 828 * OS1_S1 + 1) = prefactor_x * *(b + 828 * OS1_S1 + 0) - 
                p_over_q * *(b + 981 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 692 * OS1_S1 + 0);
            *(b + 828 * OS1_S1 + 2) = prefactor_y * *(b + 828 * OS1_S1 + 0) - 
                p_over_q * *(b + 986 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 688 * OS1_S1 + 0);
            *(b + 828 * OS1_S1 + 3) = prefactor_z * *(b + 828 * OS1_S1 + 0) - 
                p_over_q * *(b + 987 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 687 * OS1_S1 + 0);
            *(b + 829 * OS1_S1 + 1) = prefactor_x * *(b + 829 * OS1_S1 + 0) - 
                p_over_q * *(b + 982 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 693 * OS1_S1 + 0);
            *(b + 829 * OS1_S1 + 2) = prefactor_y * *(b + 829 * OS1_S1 + 0) - 
                p_over_q * *(b + 987 * OS1_S1 + 0) +
                one_over_two_q * *(b + 689 * OS1_S1 + 0);
            *(b + 829 * OS1_S1 + 3) = prefactor_z * *(b + 829 * OS1_S1 + 0) - 
                p_over_q * *(b + 988 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 688 * OS1_S1 + 0);
            *(b + 830 * OS1_S1 + 1) = prefactor_x * *(b + 830 * OS1_S1 + 0) - 
                p_over_q * *(b + 983 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 694 * OS1_S1 + 0);
            *(b + 830 * OS1_S1 + 2) = prefactor_y * *(b + 830 * OS1_S1 + 0) - 
                p_over_q * *(b + 988 * OS1_S1 + 0);
            *(b + 830 * OS1_S1 + 3) = prefactor_z * *(b + 830 * OS1_S1 + 0) - 
                p_over_q * *(b + 989 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 689 * OS1_S1 + 0);
            *(b + 831 * OS1_S1 + 1) = prefactor_x * *(b + 831 * OS1_S1 + 0) - 
                p_over_q * *(b + 984 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 695 * OS1_S1 + 0);
            *(b + 831 * OS1_S1 + 2) = prefactor_y * *(b + 831 * OS1_S1 + 0) - 
                p_over_q * *(b + 990 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 690 * OS1_S1 + 0);
            *(b + 831 * OS1_S1 + 3) = prefactor_z * *(b + 831 * OS1_S1 + 0) - 
                p_over_q * *(b + 991 * OS1_S1 + 0);
            *(b + 832 * OS1_S1 + 1) = prefactor_x * *(b + 832 * OS1_S1 + 0) - 
                p_over_q * *(b + 985 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 696 * OS1_S1 + 0);
            *(b + 832 * OS1_S1 + 2) = prefactor_y * *(b + 832 * OS1_S1 + 0) - 
                p_over_q * *(b + 991 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 691 * OS1_S1 + 0);
            *(b + 832 * OS1_S1 + 3) = prefactor_z * *(b + 832 * OS1_S1 + 0) - 
                p_over_q * *(b + 992 * OS1_S1 + 0) +
                one_over_two_q * *(b + 690 * OS1_S1 + 0);
            *(b + 833 * OS1_S1 + 1) = prefactor_x * *(b + 833 * OS1_S1 + 0) - 
                p_over_q * *(b + 986 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 697 * OS1_S1 + 0);
            *(b + 833 * OS1_S1 + 2) = prefactor_y * *(b + 833 * OS1_S1 + 0) - 
                p_over_q * *(b + 992 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 692 * OS1_S1 + 0);
            *(b + 833 * OS1_S1 + 3) = prefactor_z * *(b + 833 * OS1_S1 + 0) - 
                p_over_q * *(b + 993 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 691 * OS1_S1 + 0);
            *(b + 834 * OS1_S1 + 1) = prefactor_x * *(b + 834 * OS1_S1 + 0) - 
                p_over_q * *(b + 987 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 698 * OS1_S1 + 0);
            *(b + 834 * OS1_S1 + 2) = prefactor_y * *(b + 834 * OS1_S1 + 0) - 
                p_over_q * *(b + 993 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 693 * OS1_S1 + 0);
            *(b + 834 * OS1_S1 + 3) = prefactor_z * *(b + 834 * OS1_S1 + 0) - 
                p_over_q * *(b + 994 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 692 * OS1_S1 + 0);
            *(b + 835 * OS1_S1 + 1) = prefactor_x * *(b + 835 * OS1_S1 + 0) - 
                p_over_q * *(b + 988 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 699 * OS1_S1 + 0);
            *(b + 835 * OS1_S1 + 2) = prefactor_y * *(b + 835 * OS1_S1 + 0) - 
                p_over_q * *(b + 994 * OS1_S1 + 0) +
                one_over_two_q * *(b + 694 * OS1_S1 + 0);
            *(b + 835 * OS1_S1 + 3) = prefactor_z * *(b + 835 * OS1_S1 + 0) - 
                p_over_q * *(b + 995 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 693 * OS1_S1 + 0);
            *(b + 836 * OS1_S1 + 1) = prefactor_x * *(b + 836 * OS1_S1 + 0) - 
                p_over_q * *(b + 989 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 700 * OS1_S1 + 0);
            *(b + 836 * OS1_S1 + 2) = prefactor_y * *(b + 836 * OS1_S1 + 0) - 
                p_over_q * *(b + 995 * OS1_S1 + 0);
            *(b + 836 * OS1_S1 + 3) = prefactor_z * *(b + 836 * OS1_S1 + 0) - 
                p_over_q * *(b + 996 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 694 * OS1_S1 + 0);
            *(b + 837 * OS1_S1 + 1) = prefactor_x * *(b + 837 * OS1_S1 + 0) - 
                p_over_q * *(b + 990 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 701 * OS1_S1 + 0);
            *(b + 837 * OS1_S1 + 2) = prefactor_y * *(b + 837 * OS1_S1 + 0) - 
                p_over_q * *(b + 997 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 695 * OS1_S1 + 0);
            *(b + 837 * OS1_S1 + 3) = prefactor_z * *(b + 837 * OS1_S1 + 0) - 
                p_over_q * *(b + 998 * OS1_S1 + 0);
            *(b + 838 * OS1_S1 + 1) = prefactor_x * *(b + 838 * OS1_S1 + 0) - 
                p_over_q * *(b + 991 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 702 * OS1_S1 + 0);
            *(b + 838 * OS1_S1 + 2) = prefactor_y * *(b + 838 * OS1_S1 + 0) - 
                p_over_q * *(b + 998 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 696 * OS1_S1 + 0);
            *(b + 838 * OS1_S1 + 3) = prefactor_z * *(b + 838 * OS1_S1 + 0) - 
                p_over_q * *(b + 999 * OS1_S1 + 0) +
                one_over_two_q * *(b + 695 * OS1_S1 + 0);
            *(b + 839 * OS1_S1 + 1) = prefactor_x * *(b + 839 * OS1_S1 + 0) - 
                p_over_q * *(b + 992 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 703 * OS1_S1 + 0);
            *(b + 839 * OS1_S1 + 2) = prefactor_y * *(b + 839 * OS1_S1 + 0) - 
                p_over_q * *(b + 999 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 697 * OS1_S1 + 0);
            *(b + 839 * OS1_S1 + 3) = prefactor_z * *(b + 839 * OS1_S1 + 0) - 
                p_over_q * *(b + 1000 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 696 * OS1_S1 + 0);
            *(b + 840 * OS1_S1 + 1) = prefactor_x * *(b + 840 * OS1_S1 + 0) - 
                p_over_q * *(b + 993 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 704 * OS1_S1 + 0);
            *(b + 840 * OS1_S1 + 2) = prefactor_y * *(b + 840 * OS1_S1 + 0) - 
                p_over_q * *(b + 1000 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 698 * OS1_S1 + 0);
            *(b + 840 * OS1_S1 + 3) = prefactor_z * *(b + 840 * OS1_S1 + 0) - 
                p_over_q * *(b + 1001 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 697 * OS1_S1 + 0);
            *(b + 841 * OS1_S1 + 1) = prefactor_x * *(b + 841 * OS1_S1 + 0) - 
                p_over_q * *(b + 994 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 705 * OS1_S1 + 0);
            *(b + 841 * OS1_S1 + 2) = prefactor_y * *(b + 841 * OS1_S1 + 0) - 
                p_over_q * *(b + 1001 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 699 * OS1_S1 + 0);
            *(b + 841 * OS1_S1 + 3) = prefactor_z * *(b + 841 * OS1_S1 + 0) - 
                p_over_q * *(b + 1002 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 698 * OS1_S1 + 0);
            *(b + 842 * OS1_S1 + 1) = prefactor_x * *(b + 842 * OS1_S1 + 0) - 
                p_over_q * *(b + 995 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 706 * OS1_S1 + 0);
            *(b + 842 * OS1_S1 + 2) = prefactor_y * *(b + 842 * OS1_S1 + 0) - 
                p_over_q * *(b + 1002 * OS1_S1 + 0) +
                one_over_two_q * *(b + 700 * OS1_S1 + 0);
            *(b + 842 * OS1_S1 + 3) = prefactor_z * *(b + 842 * OS1_S1 + 0) - 
                p_over_q * *(b + 1003 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 699 * OS1_S1 + 0);
            *(b + 843 * OS1_S1 + 1) = prefactor_x * *(b + 843 * OS1_S1 + 0) - 
                p_over_q * *(b + 996 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 707 * OS1_S1 + 0);
            *(b + 843 * OS1_S1 + 2) = prefactor_y * *(b + 843 * OS1_S1 + 0) - 
                p_over_q * *(b + 1003 * OS1_S1 + 0);
            *(b + 843 * OS1_S1 + 3) = prefactor_z * *(b + 843 * OS1_S1 + 0) - 
                p_over_q * *(b + 1004 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 700 * OS1_S1 + 0);
            *(b + 844 * OS1_S1 + 1) = prefactor_x * *(b + 844 * OS1_S1 + 0) - 
                p_over_q * *(b + 997 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 708 * OS1_S1 + 0);
            *(b + 844 * OS1_S1 + 2) = prefactor_y * *(b + 844 * OS1_S1 + 0) - 
                p_over_q * *(b + 1005 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 701 * OS1_S1 + 0);
            *(b + 844 * OS1_S1 + 3) = prefactor_z * *(b + 844 * OS1_S1 + 0) - 
                p_over_q * *(b + 1006 * OS1_S1 + 0);
            *(b + 845 * OS1_S1 + 1) = prefactor_x * *(b + 845 * OS1_S1 + 0) - 
                p_over_q * *(b + 998 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 709 * OS1_S1 + 0);
            *(b + 845 * OS1_S1 + 2) = prefactor_y * *(b + 845 * OS1_S1 + 0) - 
                p_over_q * *(b + 1006 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 702 * OS1_S1 + 0);
            *(b + 845 * OS1_S1 + 3) = prefactor_z * *(b + 845 * OS1_S1 + 0) - 
                p_over_q * *(b + 1007 * OS1_S1 + 0) +
                one_over_two_q * *(b + 701 * OS1_S1 + 0);
            *(b + 846 * OS1_S1 + 1) = prefactor_x * *(b + 846 * OS1_S1 + 0) - 
                p_over_q * *(b + 999 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 710 * OS1_S1 + 0);
            *(b + 846 * OS1_S1 + 2) = prefactor_y * *(b + 846 * OS1_S1 + 0) - 
                p_over_q * *(b + 1007 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 703 * OS1_S1 + 0);
            *(b + 846 * OS1_S1 + 3) = prefactor_z * *(b + 846 * OS1_S1 + 0) - 
                p_over_q * *(b + 1008 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 702 * OS1_S1 + 0);
            *(b + 847 * OS1_S1 + 1) = prefactor_x * *(b + 847 * OS1_S1 + 0) - 
                p_over_q * *(b + 1000 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 711 * OS1_S1 + 0);
            *(b + 847 * OS1_S1 + 2) = prefactor_y * *(b + 847 * OS1_S1 + 0) - 
                p_over_q * *(b + 1008 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 704 * OS1_S1 + 0);
            *(b + 847 * OS1_S1 + 3) = prefactor_z * *(b + 847 * OS1_S1 + 0) - 
                p_over_q * *(b + 1009 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 703 * OS1_S1 + 0);
            *(b + 848 * OS1_S1 + 1) = prefactor_x * *(b + 848 * OS1_S1 + 0) - 
                p_over_q * *(b + 1001 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 712 * OS1_S1 + 0);
            *(b + 848 * OS1_S1 + 2) = prefactor_y * *(b + 848 * OS1_S1 + 0) - 
                p_over_q * *(b + 1009 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 705 * OS1_S1 + 0);
            *(b + 848 * OS1_S1 + 3) = prefactor_z * *(b + 848 * OS1_S1 + 0) - 
                p_over_q * *(b + 1010 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 704 * OS1_S1 + 0);
            *(b + 849 * OS1_S1 + 1) = prefactor_x * *(b + 849 * OS1_S1 + 0) - 
                p_over_q * *(b + 1002 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 713 * OS1_S1 + 0);
            *(b + 849 * OS1_S1 + 2) = prefactor_y * *(b + 849 * OS1_S1 + 0) - 
                p_over_q * *(b + 1010 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 706 * OS1_S1 + 0);
            *(b + 849 * OS1_S1 + 3) = prefactor_z * *(b + 849 * OS1_S1 + 0) - 
                p_over_q * *(b + 1011 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 705 * OS1_S1 + 0);
            *(b + 850 * OS1_S1 + 1) = prefactor_x * *(b + 850 * OS1_S1 + 0) - 
                p_over_q * *(b + 1003 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 714 * OS1_S1 + 0);
            *(b + 850 * OS1_S1 + 2) = prefactor_y * *(b + 850 * OS1_S1 + 0) - 
                p_over_q * *(b + 1011 * OS1_S1 + 0) +
                one_over_two_q * *(b + 707 * OS1_S1 + 0);
            *(b + 850 * OS1_S1 + 3) = prefactor_z * *(b + 850 * OS1_S1 + 0) - 
                p_over_q * *(b + 1012 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 706 * OS1_S1 + 0);
            *(b + 851 * OS1_S1 + 1) = prefactor_x * *(b + 851 * OS1_S1 + 0) - 
                p_over_q * *(b + 1004 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 715 * OS1_S1 + 0);
            *(b + 851 * OS1_S1 + 2) = prefactor_y * *(b + 851 * OS1_S1 + 0) - 
                p_over_q * *(b + 1012 * OS1_S1 + 0);
            *(b + 851 * OS1_S1 + 3) = prefactor_z * *(b + 851 * OS1_S1 + 0) - 
                p_over_q * *(b + 1013 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 707 * OS1_S1 + 0);
            *(b + 852 * OS1_S1 + 1) = prefactor_x * *(b + 852 * OS1_S1 + 0) - 
                p_over_q * *(b + 1005 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 716 * OS1_S1 + 0);
            *(b + 852 * OS1_S1 + 2) = prefactor_y * *(b + 852 * OS1_S1 + 0) - 
                p_over_q * *(b + 1014 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 708 * OS1_S1 + 0);
            *(b + 852 * OS1_S1 + 3) = prefactor_z * *(b + 852 * OS1_S1 + 0) - 
                p_over_q * *(b + 1015 * OS1_S1 + 0);
            *(b + 853 * OS1_S1 + 1) = prefactor_x * *(b + 853 * OS1_S1 + 0) - 
                p_over_q * *(b + 1006 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 717 * OS1_S1 + 0);
            *(b + 853 * OS1_S1 + 2) = prefactor_y * *(b + 853 * OS1_S1 + 0) - 
                p_over_q * *(b + 1015 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 709 * OS1_S1 + 0);
            *(b + 853 * OS1_S1 + 3) = prefactor_z * *(b + 853 * OS1_S1 + 0) - 
                p_over_q * *(b + 1016 * OS1_S1 + 0) +
                one_over_two_q * *(b + 708 * OS1_S1 + 0);
            *(b + 854 * OS1_S1 + 1) = prefactor_x * *(b + 854 * OS1_S1 + 0) - 
                p_over_q * *(b + 1007 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 718 * OS1_S1 + 0);
            *(b + 854 * OS1_S1 + 2) = prefactor_y * *(b + 854 * OS1_S1 + 0) - 
                p_over_q * *(b + 1016 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 710 * OS1_S1 + 0);
            *(b + 854 * OS1_S1 + 3) = prefactor_z * *(b + 854 * OS1_S1 + 0) - 
                p_over_q * *(b + 1017 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 709 * OS1_S1 + 0);
            *(b + 855 * OS1_S1 + 1) = prefactor_x * *(b + 855 * OS1_S1 + 0) - 
                p_over_q * *(b + 1008 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 719 * OS1_S1 + 0);
            *(b + 855 * OS1_S1 + 2) = prefactor_y * *(b + 855 * OS1_S1 + 0) - 
                p_over_q * *(b + 1017 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 711 * OS1_S1 + 0);
            *(b + 855 * OS1_S1 + 3) = prefactor_z * *(b + 855 * OS1_S1 + 0) - 
                p_over_q * *(b + 1018 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 710 * OS1_S1 + 0);
            *(b + 856 * OS1_S1 + 1) = prefactor_x * *(b + 856 * OS1_S1 + 0) - 
                p_over_q * *(b + 1009 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 720 * OS1_S1 + 0);
            *(b + 856 * OS1_S1 + 2) = prefactor_y * *(b + 856 * OS1_S1 + 0) - 
                p_over_q * *(b + 1018 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 712 * OS1_S1 + 0);
            *(b + 856 * OS1_S1 + 3) = prefactor_z * *(b + 856 * OS1_S1 + 0) - 
                p_over_q * *(b + 1019 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 711 * OS1_S1 + 0);
            *(b + 857 * OS1_S1 + 1) = prefactor_x * *(b + 857 * OS1_S1 + 0) - 
                p_over_q * *(b + 1010 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 721 * OS1_S1 + 0);
            *(b + 857 * OS1_S1 + 2) = prefactor_y * *(b + 857 * OS1_S1 + 0) - 
                p_over_q * *(b + 1019 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 713 * OS1_S1 + 0);
            *(b + 857 * OS1_S1 + 3) = prefactor_z * *(b + 857 * OS1_S1 + 0) - 
                p_over_q * *(b + 1020 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 712 * OS1_S1 + 0);
            *(b + 858 * OS1_S1 + 1) = prefactor_x * *(b + 858 * OS1_S1 + 0) - 
                p_over_q * *(b + 1011 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 722 * OS1_S1 + 0);
            *(b + 858 * OS1_S1 + 2) = prefactor_y * *(b + 858 * OS1_S1 + 0) - 
                p_over_q * *(b + 1020 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 714 * OS1_S1 + 0);
            *(b + 858 * OS1_S1 + 3) = prefactor_z * *(b + 858 * OS1_S1 + 0) - 
                p_over_q * *(b + 1021 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 713 * OS1_S1 + 0);
            *(b + 859 * OS1_S1 + 1) = prefactor_x * *(b + 859 * OS1_S1 + 0) - 
                p_over_q * *(b + 1012 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 723 * OS1_S1 + 0);
            *(b + 859 * OS1_S1 + 2) = prefactor_y * *(b + 859 * OS1_S1 + 0) - 
                p_over_q * *(b + 1021 * OS1_S1 + 0) +
                one_over_two_q * *(b + 715 * OS1_S1 + 0);
            *(b + 859 * OS1_S1 + 3) = prefactor_z * *(b + 859 * OS1_S1 + 0) - 
                p_over_q * *(b + 1022 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 714 * OS1_S1 + 0);
            *(b + 860 * OS1_S1 + 1) = prefactor_x * *(b + 860 * OS1_S1 + 0) - 
                p_over_q * *(b + 1013 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 724 * OS1_S1 + 0);
            *(b + 860 * OS1_S1 + 2) = prefactor_y * *(b + 860 * OS1_S1 + 0) - 
                p_over_q * *(b + 1022 * OS1_S1 + 0);
            *(b + 860 * OS1_S1 + 3) = prefactor_z * *(b + 860 * OS1_S1 + 0) - 
                p_over_q * *(b + 1023 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 715 * OS1_S1 + 0);
            *(b + 861 * OS1_S1 + 1) = prefactor_x * *(b + 861 * OS1_S1 + 0) - 
                p_over_q * *(b + 1014 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 725 * OS1_S1 + 0);
            *(b + 861 * OS1_S1 + 2) = prefactor_y * *(b + 861 * OS1_S1 + 0) - 
                p_over_q * *(b + 1024 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 716 * OS1_S1 + 0);
            *(b + 861 * OS1_S1 + 3) = prefactor_z * *(b + 861 * OS1_S1 + 0) - 
                p_over_q * *(b + 1025 * OS1_S1 + 0);
            *(b + 862 * OS1_S1 + 1) = prefactor_x * *(b + 862 * OS1_S1 + 0) - 
                p_over_q * *(b + 1015 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 726 * OS1_S1 + 0);
            *(b + 862 * OS1_S1 + 2) = prefactor_y * *(b + 862 * OS1_S1 + 0) - 
                p_over_q * *(b + 1025 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 717 * OS1_S1 + 0);
            *(b + 862 * OS1_S1 + 3) = prefactor_z * *(b + 862 * OS1_S1 + 0) - 
                p_over_q * *(b + 1026 * OS1_S1 + 0) +
                one_over_two_q * *(b + 716 * OS1_S1 + 0);
            *(b + 863 * OS1_S1 + 1) = prefactor_x * *(b + 863 * OS1_S1 + 0) - 
                p_over_q * *(b + 1016 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 727 * OS1_S1 + 0);
            *(b + 863 * OS1_S1 + 2) = prefactor_y * *(b + 863 * OS1_S1 + 0) - 
                p_over_q * *(b + 1026 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 718 * OS1_S1 + 0);
            *(b + 863 * OS1_S1 + 3) = prefactor_z * *(b + 863 * OS1_S1 + 0) - 
                p_over_q * *(b + 1027 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 717 * OS1_S1 + 0);
            *(b + 864 * OS1_S1 + 1) = prefactor_x * *(b + 864 * OS1_S1 + 0) - 
                p_over_q * *(b + 1017 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 728 * OS1_S1 + 0);
            *(b + 864 * OS1_S1 + 2) = prefactor_y * *(b + 864 * OS1_S1 + 0) - 
                p_over_q * *(b + 1027 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 719 * OS1_S1 + 0);
            *(b + 864 * OS1_S1 + 3) = prefactor_z * *(b + 864 * OS1_S1 + 0) - 
                p_over_q * *(b + 1028 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 718 * OS1_S1 + 0);
            *(b + 865 * OS1_S1 + 1) = prefactor_x * *(b + 865 * OS1_S1 + 0) - 
                p_over_q * *(b + 1018 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 729 * OS1_S1 + 0);
            *(b + 865 * OS1_S1 + 2) = prefactor_y * *(b + 865 * OS1_S1 + 0) - 
                p_over_q * *(b + 1028 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 720 * OS1_S1 + 0);
            *(b + 865 * OS1_S1 + 3) = prefactor_z * *(b + 865 * OS1_S1 + 0) - 
                p_over_q * *(b + 1029 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 719 * OS1_S1 + 0);
            *(b + 866 * OS1_S1 + 1) = prefactor_x * *(b + 866 * OS1_S1 + 0) - 
                p_over_q * *(b + 1019 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 730 * OS1_S1 + 0);
            *(b + 866 * OS1_S1 + 2) = prefactor_y * *(b + 866 * OS1_S1 + 0) - 
                p_over_q * *(b + 1029 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 721 * OS1_S1 + 0);
            *(b + 866 * OS1_S1 + 3) = prefactor_z * *(b + 866 * OS1_S1 + 0) - 
                p_over_q * *(b + 1030 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 720 * OS1_S1 + 0);
            *(b + 867 * OS1_S1 + 1) = prefactor_x * *(b + 867 * OS1_S1 + 0) - 
                p_over_q * *(b + 1020 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 731 * OS1_S1 + 0);
            *(b + 867 * OS1_S1 + 2) = prefactor_y * *(b + 867 * OS1_S1 + 0) - 
                p_over_q * *(b + 1030 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 722 * OS1_S1 + 0);
            *(b + 867 * OS1_S1 + 3) = prefactor_z * *(b + 867 * OS1_S1 + 0) - 
                p_over_q * *(b + 1031 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 721 * OS1_S1 + 0);
            *(b + 868 * OS1_S1 + 1) = prefactor_x * *(b + 868 * OS1_S1 + 0) - 
                p_over_q * *(b + 1021 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 732 * OS1_S1 + 0);
            *(b + 868 * OS1_S1 + 2) = prefactor_y * *(b + 868 * OS1_S1 + 0) - 
                p_over_q * *(b + 1031 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 723 * OS1_S1 + 0);
            *(b + 868 * OS1_S1 + 3) = prefactor_z * *(b + 868 * OS1_S1 + 0) - 
                p_over_q * *(b + 1032 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 722 * OS1_S1 + 0);
            *(b + 869 * OS1_S1 + 1) = prefactor_x * *(b + 869 * OS1_S1 + 0) - 
                p_over_q * *(b + 1022 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 733 * OS1_S1 + 0);
            *(b + 869 * OS1_S1 + 2) = prefactor_y * *(b + 869 * OS1_S1 + 0) - 
                p_over_q * *(b + 1032 * OS1_S1 + 0) +
                one_over_two_q * *(b + 724 * OS1_S1 + 0);
            *(b + 869 * OS1_S1 + 3) = prefactor_z * *(b + 869 * OS1_S1 + 0) - 
                p_over_q * *(b + 1033 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 723 * OS1_S1 + 0);
            *(b + 870 * OS1_S1 + 1) = prefactor_x * *(b + 870 * OS1_S1 + 0) - 
                p_over_q * *(b + 1023 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 734 * OS1_S1 + 0);
            *(b + 870 * OS1_S1 + 2) = prefactor_y * *(b + 870 * OS1_S1 + 0) - 
                p_over_q * *(b + 1033 * OS1_S1 + 0);
            *(b + 870 * OS1_S1 + 3) = prefactor_z * *(b + 870 * OS1_S1 + 0) - 
                p_over_q * *(b + 1034 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 724 * OS1_S1 + 0);
            *(b + 871 * OS1_S1 + 1) = prefactor_x * *(b + 871 * OS1_S1 + 0) - 
                p_over_q * *(b + 1024 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 735 * OS1_S1 + 0);
            *(b + 871 * OS1_S1 + 2) = prefactor_y * *(b + 871 * OS1_S1 + 0) - 
                p_over_q * *(b + 1035 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 725 * OS1_S1 + 0);
            *(b + 871 * OS1_S1 + 3) = prefactor_z * *(b + 871 * OS1_S1 + 0) - 
                p_over_q * *(b + 1036 * OS1_S1 + 0);
            *(b + 872 * OS1_S1 + 1) = prefactor_x * *(b + 872 * OS1_S1 + 0) - 
                p_over_q * *(b + 1025 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 736 * OS1_S1 + 0);
            *(b + 872 * OS1_S1 + 2) = prefactor_y * *(b + 872 * OS1_S1 + 0) - 
                p_over_q * *(b + 1036 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 726 * OS1_S1 + 0);
            *(b + 872 * OS1_S1 + 3) = prefactor_z * *(b + 872 * OS1_S1 + 0) - 
                p_over_q * *(b + 1037 * OS1_S1 + 0) +
                one_over_two_q * *(b + 725 * OS1_S1 + 0);
            *(b + 873 * OS1_S1 + 1) = prefactor_x * *(b + 873 * OS1_S1 + 0) - 
                p_over_q * *(b + 1026 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 737 * OS1_S1 + 0);
            *(b + 873 * OS1_S1 + 2) = prefactor_y * *(b + 873 * OS1_S1 + 0) - 
                p_over_q * *(b + 1037 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 727 * OS1_S1 + 0);
            *(b + 873 * OS1_S1 + 3) = prefactor_z * *(b + 873 * OS1_S1 + 0) - 
                p_over_q * *(b + 1038 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 726 * OS1_S1 + 0);
            *(b + 874 * OS1_S1 + 1) = prefactor_x * *(b + 874 * OS1_S1 + 0) - 
                p_over_q * *(b + 1027 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 738 * OS1_S1 + 0);
            *(b + 874 * OS1_S1 + 2) = prefactor_y * *(b + 874 * OS1_S1 + 0) - 
                p_over_q * *(b + 1038 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 728 * OS1_S1 + 0);
            *(b + 874 * OS1_S1 + 3) = prefactor_z * *(b + 874 * OS1_S1 + 0) - 
                p_over_q * *(b + 1039 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 727 * OS1_S1 + 0);
            *(b + 875 * OS1_S1 + 1) = prefactor_x * *(b + 875 * OS1_S1 + 0) - 
                p_over_q * *(b + 1028 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 739 * OS1_S1 + 0);
            *(b + 875 * OS1_S1 + 2) = prefactor_y * *(b + 875 * OS1_S1 + 0) - 
                p_over_q * *(b + 1039 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 729 * OS1_S1 + 0);
            *(b + 875 * OS1_S1 + 3) = prefactor_z * *(b + 875 * OS1_S1 + 0) - 
                p_over_q * *(b + 1040 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 728 * OS1_S1 + 0);
            *(b + 876 * OS1_S1 + 1) = prefactor_x * *(b + 876 * OS1_S1 + 0) - 
                p_over_q * *(b + 1029 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 740 * OS1_S1 + 0);
            *(b + 876 * OS1_S1 + 2) = prefactor_y * *(b + 876 * OS1_S1 + 0) - 
                p_over_q * *(b + 1040 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 730 * OS1_S1 + 0);
            *(b + 876 * OS1_S1 + 3) = prefactor_z * *(b + 876 * OS1_S1 + 0) - 
                p_over_q * *(b + 1041 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 729 * OS1_S1 + 0);
            *(b + 877 * OS1_S1 + 1) = prefactor_x * *(b + 877 * OS1_S1 + 0) - 
                p_over_q * *(b + 1030 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 741 * OS1_S1 + 0);
            *(b + 877 * OS1_S1 + 2) = prefactor_y * *(b + 877 * OS1_S1 + 0) - 
                p_over_q * *(b + 1041 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 731 * OS1_S1 + 0);
            *(b + 877 * OS1_S1 + 3) = prefactor_z * *(b + 877 * OS1_S1 + 0) - 
                p_over_q * *(b + 1042 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 730 * OS1_S1 + 0);
            *(b + 878 * OS1_S1 + 1) = prefactor_x * *(b + 878 * OS1_S1 + 0) - 
                p_over_q * *(b + 1031 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 742 * OS1_S1 + 0);
            *(b + 878 * OS1_S1 + 2) = prefactor_y * *(b + 878 * OS1_S1 + 0) - 
                p_over_q * *(b + 1042 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 732 * OS1_S1 + 0);
            *(b + 878 * OS1_S1 + 3) = prefactor_z * *(b + 878 * OS1_S1 + 0) - 
                p_over_q * *(b + 1043 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 731 * OS1_S1 + 0);
            *(b + 879 * OS1_S1 + 1) = prefactor_x * *(b + 879 * OS1_S1 + 0) - 
                p_over_q * *(b + 1032 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 743 * OS1_S1 + 0);
            *(b + 879 * OS1_S1 + 2) = prefactor_y * *(b + 879 * OS1_S1 + 0) - 
                p_over_q * *(b + 1043 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 733 * OS1_S1 + 0);
            *(b + 879 * OS1_S1 + 3) = prefactor_z * *(b + 879 * OS1_S1 + 0) - 
                p_over_q * *(b + 1044 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 732 * OS1_S1 + 0);
            *(b + 880 * OS1_S1 + 1) = prefactor_x * *(b + 880 * OS1_S1 + 0) - 
                p_over_q * *(b + 1033 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 744 * OS1_S1 + 0);
            *(b + 880 * OS1_S1 + 2) = prefactor_y * *(b + 880 * OS1_S1 + 0) - 
                p_over_q * *(b + 1044 * OS1_S1 + 0) +
                one_over_two_q * *(b + 734 * OS1_S1 + 0);
            *(b + 880 * OS1_S1 + 3) = prefactor_z * *(b + 880 * OS1_S1 + 0) - 
                p_over_q * *(b + 1045 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 733 * OS1_S1 + 0);
            *(b + 881 * OS1_S1 + 1) = prefactor_x * *(b + 881 * OS1_S1 + 0) - 
                p_over_q * *(b + 1034 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 745 * OS1_S1 + 0);
            *(b + 881 * OS1_S1 + 2) = prefactor_y * *(b + 881 * OS1_S1 + 0) - 
                p_over_q * *(b + 1045 * OS1_S1 + 0);
            *(b + 881 * OS1_S1 + 3) = prefactor_z * *(b + 881 * OS1_S1 + 0) - 
                p_over_q * *(b + 1046 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 734 * OS1_S1 + 0);
            *(b + 882 * OS1_S1 + 1) = prefactor_x * *(b + 882 * OS1_S1 + 0) - 
                p_over_q * *(b + 1035 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 746 * OS1_S1 + 0);
            *(b + 882 * OS1_S1 + 2) = prefactor_y * *(b + 882 * OS1_S1 + 0) - 
                p_over_q * *(b + 1047 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 735 * OS1_S1 + 0);
            *(b + 882 * OS1_S1 + 3) = prefactor_z * *(b + 882 * OS1_S1 + 0) - 
                p_over_q * *(b + 1048 * OS1_S1 + 0);
            *(b + 883 * OS1_S1 + 1) = prefactor_x * *(b + 883 * OS1_S1 + 0) - 
                p_over_q * *(b + 1036 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 747 * OS1_S1 + 0);
            *(b + 883 * OS1_S1 + 2) = prefactor_y * *(b + 883 * OS1_S1 + 0) - 
                p_over_q * *(b + 1048 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 736 * OS1_S1 + 0);
            *(b + 883 * OS1_S1 + 3) = prefactor_z * *(b + 883 * OS1_S1 + 0) - 
                p_over_q * *(b + 1049 * OS1_S1 + 0) +
                one_over_two_q * *(b + 735 * OS1_S1 + 0);
            *(b + 884 * OS1_S1 + 1) = prefactor_x * *(b + 884 * OS1_S1 + 0) - 
                p_over_q * *(b + 1037 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 748 * OS1_S1 + 0);
            *(b + 884 * OS1_S1 + 2) = prefactor_y * *(b + 884 * OS1_S1 + 0) - 
                p_over_q * *(b + 1049 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 737 * OS1_S1 + 0);
            *(b + 884 * OS1_S1 + 3) = prefactor_z * *(b + 884 * OS1_S1 + 0) - 
                p_over_q * *(b + 1050 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 736 * OS1_S1 + 0);
            *(b + 885 * OS1_S1 + 1) = prefactor_x * *(b + 885 * OS1_S1 + 0) - 
                p_over_q * *(b + 1038 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 749 * OS1_S1 + 0);
            *(b + 885 * OS1_S1 + 2) = prefactor_y * *(b + 885 * OS1_S1 + 0) - 
                p_over_q * *(b + 1050 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 738 * OS1_S1 + 0);
            *(b + 885 * OS1_S1 + 3) = prefactor_z * *(b + 885 * OS1_S1 + 0) - 
                p_over_q * *(b + 1051 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 737 * OS1_S1 + 0);
            *(b + 886 * OS1_S1 + 1) = prefactor_x * *(b + 886 * OS1_S1 + 0) - 
                p_over_q * *(b + 1039 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 750 * OS1_S1 + 0);
            *(b + 886 * OS1_S1 + 2) = prefactor_y * *(b + 886 * OS1_S1 + 0) - 
                p_over_q * *(b + 1051 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 739 * OS1_S1 + 0);
            *(b + 886 * OS1_S1 + 3) = prefactor_z * *(b + 886 * OS1_S1 + 0) - 
                p_over_q * *(b + 1052 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 738 * OS1_S1 + 0);
            *(b + 887 * OS1_S1 + 1) = prefactor_x * *(b + 887 * OS1_S1 + 0) - 
                p_over_q * *(b + 1040 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 751 * OS1_S1 + 0);
            *(b + 887 * OS1_S1 + 2) = prefactor_y * *(b + 887 * OS1_S1 + 0) - 
                p_over_q * *(b + 1052 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 740 * OS1_S1 + 0);
            *(b + 887 * OS1_S1 + 3) = prefactor_z * *(b + 887 * OS1_S1 + 0) - 
                p_over_q * *(b + 1053 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 739 * OS1_S1 + 0);
            *(b + 888 * OS1_S1 + 1) = prefactor_x * *(b + 888 * OS1_S1 + 0) - 
                p_over_q * *(b + 1041 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 752 * OS1_S1 + 0);
            *(b + 888 * OS1_S1 + 2) = prefactor_y * *(b + 888 * OS1_S1 + 0) - 
                p_over_q * *(b + 1053 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 741 * OS1_S1 + 0);
            *(b + 888 * OS1_S1 + 3) = prefactor_z * *(b + 888 * OS1_S1 + 0) - 
                p_over_q * *(b + 1054 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 740 * OS1_S1 + 0);
            *(b + 889 * OS1_S1 + 1) = prefactor_x * *(b + 889 * OS1_S1 + 0) - 
                p_over_q * *(b + 1042 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 753 * OS1_S1 + 0);
            *(b + 889 * OS1_S1 + 2) = prefactor_y * *(b + 889 * OS1_S1 + 0) - 
                p_over_q * *(b + 1054 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 742 * OS1_S1 + 0);
            *(b + 889 * OS1_S1 + 3) = prefactor_z * *(b + 889 * OS1_S1 + 0) - 
                p_over_q * *(b + 1055 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 741 * OS1_S1 + 0);
            *(b + 890 * OS1_S1 + 1) = prefactor_x * *(b + 890 * OS1_S1 + 0) - 
                p_over_q * *(b + 1043 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 754 * OS1_S1 + 0);
            *(b + 890 * OS1_S1 + 2) = prefactor_y * *(b + 890 * OS1_S1 + 0) - 
                p_over_q * *(b + 1055 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 743 * OS1_S1 + 0);
            *(b + 890 * OS1_S1 + 3) = prefactor_z * *(b + 890 * OS1_S1 + 0) - 
                p_over_q * *(b + 1056 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 742 * OS1_S1 + 0);
            *(b + 891 * OS1_S1 + 1) = prefactor_x * *(b + 891 * OS1_S1 + 0) - 
                p_over_q * *(b + 1044 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 755 * OS1_S1 + 0);
            *(b + 891 * OS1_S1 + 2) = prefactor_y * *(b + 891 * OS1_S1 + 0) - 
                p_over_q * *(b + 1056 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 744 * OS1_S1 + 0);
            *(b + 891 * OS1_S1 + 3) = prefactor_z * *(b + 891 * OS1_S1 + 0) - 
                p_over_q * *(b + 1057 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 743 * OS1_S1 + 0);
            *(b + 892 * OS1_S1 + 1) = prefactor_x * *(b + 892 * OS1_S1 + 0) - 
                p_over_q * *(b + 1045 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 756 * OS1_S1 + 0);
            *(b + 892 * OS1_S1 + 2) = prefactor_y * *(b + 892 * OS1_S1 + 0) - 
                p_over_q * *(b + 1057 * OS1_S1 + 0) +
                one_over_two_q * *(b + 745 * OS1_S1 + 0);
            *(b + 892 * OS1_S1 + 3) = prefactor_z * *(b + 892 * OS1_S1 + 0) - 
                p_over_q * *(b + 1058 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 744 * OS1_S1 + 0);
            *(b + 893 * OS1_S1 + 1) = prefactor_x * *(b + 893 * OS1_S1 + 0) - 
                p_over_q * *(b + 1046 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 757 * OS1_S1 + 0);
            *(b + 893 * OS1_S1 + 2) = prefactor_y * *(b + 893 * OS1_S1 + 0) - 
                p_over_q * *(b + 1058 * OS1_S1 + 0);
            *(b + 893 * OS1_S1 + 3) = prefactor_z * *(b + 893 * OS1_S1 + 0) - 
                p_over_q * *(b + 1059 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 745 * OS1_S1 + 0);
            *(b + 894 * OS1_S1 + 1) = prefactor_x * *(b + 894 * OS1_S1 + 0) - 
                p_over_q * *(b + 1047 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 758 * OS1_S1 + 0);
            *(b + 894 * OS1_S1 + 2) = prefactor_y * *(b + 894 * OS1_S1 + 0) - 
                p_over_q * *(b + 1060 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 746 * OS1_S1 + 0);
            *(b + 894 * OS1_S1 + 3) = prefactor_z * *(b + 894 * OS1_S1 + 0) - 
                p_over_q * *(b + 1061 * OS1_S1 + 0);
            *(b + 895 * OS1_S1 + 1) = prefactor_x * *(b + 895 * OS1_S1 + 0) - 
                p_over_q * *(b + 1048 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 759 * OS1_S1 + 0);
            *(b + 895 * OS1_S1 + 2) = prefactor_y * *(b + 895 * OS1_S1 + 0) - 
                p_over_q * *(b + 1061 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 747 * OS1_S1 + 0);
            *(b + 895 * OS1_S1 + 3) = prefactor_z * *(b + 895 * OS1_S1 + 0) - 
                p_over_q * *(b + 1062 * OS1_S1 + 0) +
                one_over_two_q * *(b + 746 * OS1_S1 + 0);
            *(b + 896 * OS1_S1 + 1) = prefactor_x * *(b + 896 * OS1_S1 + 0) - 
                p_over_q * *(b + 1049 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 760 * OS1_S1 + 0);
            *(b + 896 * OS1_S1 + 2) = prefactor_y * *(b + 896 * OS1_S1 + 0) - 
                p_over_q * *(b + 1062 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 748 * OS1_S1 + 0);
            *(b + 896 * OS1_S1 + 3) = prefactor_z * *(b + 896 * OS1_S1 + 0) - 
                p_over_q * *(b + 1063 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 747 * OS1_S1 + 0);
            *(b + 897 * OS1_S1 + 1) = prefactor_x * *(b + 897 * OS1_S1 + 0) - 
                p_over_q * *(b + 1050 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 761 * OS1_S1 + 0);
            *(b + 897 * OS1_S1 + 2) = prefactor_y * *(b + 897 * OS1_S1 + 0) - 
                p_over_q * *(b + 1063 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 749 * OS1_S1 + 0);
            *(b + 897 * OS1_S1 + 3) = prefactor_z * *(b + 897 * OS1_S1 + 0) - 
                p_over_q * *(b + 1064 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 748 * OS1_S1 + 0);
            *(b + 898 * OS1_S1 + 1) = prefactor_x * *(b + 898 * OS1_S1 + 0) - 
                p_over_q * *(b + 1051 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 762 * OS1_S1 + 0);
            *(b + 898 * OS1_S1 + 2) = prefactor_y * *(b + 898 * OS1_S1 + 0) - 
                p_over_q * *(b + 1064 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 750 * OS1_S1 + 0);
            *(b + 898 * OS1_S1 + 3) = prefactor_z * *(b + 898 * OS1_S1 + 0) - 
                p_over_q * *(b + 1065 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 749 * OS1_S1 + 0);
            *(b + 899 * OS1_S1 + 1) = prefactor_x * *(b + 899 * OS1_S1 + 0) - 
                p_over_q * *(b + 1052 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 763 * OS1_S1 + 0);
            *(b + 899 * OS1_S1 + 2) = prefactor_y * *(b + 899 * OS1_S1 + 0) - 
                p_over_q * *(b + 1065 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 751 * OS1_S1 + 0);
            *(b + 899 * OS1_S1 + 3) = prefactor_z * *(b + 899 * OS1_S1 + 0) - 
                p_over_q * *(b + 1066 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 750 * OS1_S1 + 0);
            *(b + 900 * OS1_S1 + 1) = prefactor_x * *(b + 900 * OS1_S1 + 0) - 
                p_over_q * *(b + 1053 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 764 * OS1_S1 + 0);
            *(b + 900 * OS1_S1 + 2) = prefactor_y * *(b + 900 * OS1_S1 + 0) - 
                p_over_q * *(b + 1066 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 752 * OS1_S1 + 0);
            *(b + 900 * OS1_S1 + 3) = prefactor_z * *(b + 900 * OS1_S1 + 0) - 
                p_over_q * *(b + 1067 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 751 * OS1_S1 + 0);
            *(b + 901 * OS1_S1 + 1) = prefactor_x * *(b + 901 * OS1_S1 + 0) - 
                p_over_q * *(b + 1054 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 765 * OS1_S1 + 0);
            *(b + 901 * OS1_S1 + 2) = prefactor_y * *(b + 901 * OS1_S1 + 0) - 
                p_over_q * *(b + 1067 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 753 * OS1_S1 + 0);
            *(b + 901 * OS1_S1 + 3) = prefactor_z * *(b + 901 * OS1_S1 + 0) - 
                p_over_q * *(b + 1068 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 752 * OS1_S1 + 0);
            *(b + 902 * OS1_S1 + 1) = prefactor_x * *(b + 902 * OS1_S1 + 0) - 
                p_over_q * *(b + 1055 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 766 * OS1_S1 + 0);
            *(b + 902 * OS1_S1 + 2) = prefactor_y * *(b + 902 * OS1_S1 + 0) - 
                p_over_q * *(b + 1068 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 754 * OS1_S1 + 0);
            *(b + 902 * OS1_S1 + 3) = prefactor_z * *(b + 902 * OS1_S1 + 0) - 
                p_over_q * *(b + 1069 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 753 * OS1_S1 + 0);
            *(b + 903 * OS1_S1 + 1) = prefactor_x * *(b + 903 * OS1_S1 + 0) - 
                p_over_q * *(b + 1056 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 767 * OS1_S1 + 0);
            *(b + 903 * OS1_S1 + 2) = prefactor_y * *(b + 903 * OS1_S1 + 0) - 
                p_over_q * *(b + 1069 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 755 * OS1_S1 + 0);
            *(b + 903 * OS1_S1 + 3) = prefactor_z * *(b + 903 * OS1_S1 + 0) - 
                p_over_q * *(b + 1070 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 754 * OS1_S1 + 0);
            *(b + 904 * OS1_S1 + 1) = prefactor_x * *(b + 904 * OS1_S1 + 0) - 
                p_over_q * *(b + 1057 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 768 * OS1_S1 + 0);
            *(b + 904 * OS1_S1 + 2) = prefactor_y * *(b + 904 * OS1_S1 + 0) - 
                p_over_q * *(b + 1070 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 756 * OS1_S1 + 0);
            *(b + 904 * OS1_S1 + 3) = prefactor_z * *(b + 904 * OS1_S1 + 0) - 
                p_over_q * *(b + 1071 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 755 * OS1_S1 + 0);
            *(b + 905 * OS1_S1 + 1) = prefactor_x * *(b + 905 * OS1_S1 + 0) - 
                p_over_q * *(b + 1058 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 769 * OS1_S1 + 0);
            *(b + 905 * OS1_S1 + 2) = prefactor_y * *(b + 905 * OS1_S1 + 0) - 
                p_over_q * *(b + 1071 * OS1_S1 + 0) +
                one_over_two_q * *(b + 757 * OS1_S1 + 0);
            *(b + 905 * OS1_S1 + 3) = prefactor_z * *(b + 905 * OS1_S1 + 0) - 
                p_over_q * *(b + 1072 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 756 * OS1_S1 + 0);
            *(b + 906 * OS1_S1 + 1) = prefactor_x * *(b + 906 * OS1_S1 + 0) - 
                p_over_q * *(b + 1059 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 770 * OS1_S1 + 0);
            *(b + 906 * OS1_S1 + 2) = prefactor_y * *(b + 906 * OS1_S1 + 0) - 
                p_over_q * *(b + 1072 * OS1_S1 + 0);
            *(b + 906 * OS1_S1 + 3) = prefactor_z * *(b + 906 * OS1_S1 + 0) - 
                p_over_q * *(b + 1073 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 757 * OS1_S1 + 0);
            *(b + 907 * OS1_S1 + 1) = prefactor_x * *(b + 907 * OS1_S1 + 0) - 
                p_over_q * *(b + 1060 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 771 * OS1_S1 + 0);
            *(b + 907 * OS1_S1 + 2) = prefactor_y * *(b + 907 * OS1_S1 + 0) - 
                p_over_q * *(b + 1074 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 758 * OS1_S1 + 0);
            *(b + 907 * OS1_S1 + 3) = prefactor_z * *(b + 907 * OS1_S1 + 0) - 
                p_over_q * *(b + 1075 * OS1_S1 + 0);
            *(b + 908 * OS1_S1 + 1) = prefactor_x * *(b + 908 * OS1_S1 + 0) - 
                p_over_q * *(b + 1061 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 772 * OS1_S1 + 0);
            *(b + 908 * OS1_S1 + 2) = prefactor_y * *(b + 908 * OS1_S1 + 0) - 
                p_over_q * *(b + 1075 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 759 * OS1_S1 + 0);
            *(b + 908 * OS1_S1 + 3) = prefactor_z * *(b + 908 * OS1_S1 + 0) - 
                p_over_q * *(b + 1076 * OS1_S1 + 0) +
                one_over_two_q * *(b + 758 * OS1_S1 + 0);
            *(b + 909 * OS1_S1 + 1) = prefactor_x * *(b + 909 * OS1_S1 + 0) - 
                p_over_q * *(b + 1062 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 773 * OS1_S1 + 0);
            *(b + 909 * OS1_S1 + 2) = prefactor_y * *(b + 909 * OS1_S1 + 0) - 
                p_over_q * *(b + 1076 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 760 * OS1_S1 + 0);
            *(b + 909 * OS1_S1 + 3) = prefactor_z * *(b + 909 * OS1_S1 + 0) - 
                p_over_q * *(b + 1077 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 759 * OS1_S1 + 0);
            *(b + 910 * OS1_S1 + 1) = prefactor_x * *(b + 910 * OS1_S1 + 0) - 
                p_over_q * *(b + 1063 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 774 * OS1_S1 + 0);
            *(b + 910 * OS1_S1 + 2) = prefactor_y * *(b + 910 * OS1_S1 + 0) - 
                p_over_q * *(b + 1077 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 761 * OS1_S1 + 0);
            *(b + 910 * OS1_S1 + 3) = prefactor_z * *(b + 910 * OS1_S1 + 0) - 
                p_over_q * *(b + 1078 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 760 * OS1_S1 + 0);
            *(b + 911 * OS1_S1 + 1) = prefactor_x * *(b + 911 * OS1_S1 + 0) - 
                p_over_q * *(b + 1064 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 775 * OS1_S1 + 0);
            *(b + 911 * OS1_S1 + 2) = prefactor_y * *(b + 911 * OS1_S1 + 0) - 
                p_over_q * *(b + 1078 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 762 * OS1_S1 + 0);
            *(b + 911 * OS1_S1 + 3) = prefactor_z * *(b + 911 * OS1_S1 + 0) - 
                p_over_q * *(b + 1079 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 761 * OS1_S1 + 0);
            *(b + 912 * OS1_S1 + 1) = prefactor_x * *(b + 912 * OS1_S1 + 0) - 
                p_over_q * *(b + 1065 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 776 * OS1_S1 + 0);
            *(b + 912 * OS1_S1 + 2) = prefactor_y * *(b + 912 * OS1_S1 + 0) - 
                p_over_q * *(b + 1079 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 763 * OS1_S1 + 0);
            *(b + 912 * OS1_S1 + 3) = prefactor_z * *(b + 912 * OS1_S1 + 0) - 
                p_over_q * *(b + 1080 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 762 * OS1_S1 + 0);
            *(b + 913 * OS1_S1 + 1) = prefactor_x * *(b + 913 * OS1_S1 + 0) - 
                p_over_q * *(b + 1066 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 777 * OS1_S1 + 0);
            *(b + 913 * OS1_S1 + 2) = prefactor_y * *(b + 913 * OS1_S1 + 0) - 
                p_over_q * *(b + 1080 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 764 * OS1_S1 + 0);
            *(b + 913 * OS1_S1 + 3) = prefactor_z * *(b + 913 * OS1_S1 + 0) - 
                p_over_q * *(b + 1081 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 763 * OS1_S1 + 0);
            *(b + 914 * OS1_S1 + 1) = prefactor_x * *(b + 914 * OS1_S1 + 0) - 
                p_over_q * *(b + 1067 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 778 * OS1_S1 + 0);
            *(b + 914 * OS1_S1 + 2) = prefactor_y * *(b + 914 * OS1_S1 + 0) - 
                p_over_q * *(b + 1081 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 765 * OS1_S1 + 0);
            *(b + 914 * OS1_S1 + 3) = prefactor_z * *(b + 914 * OS1_S1 + 0) - 
                p_over_q * *(b + 1082 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 764 * OS1_S1 + 0);
            *(b + 915 * OS1_S1 + 1) = prefactor_x * *(b + 915 * OS1_S1 + 0) - 
                p_over_q * *(b + 1068 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 779 * OS1_S1 + 0);
            *(b + 915 * OS1_S1 + 2) = prefactor_y * *(b + 915 * OS1_S1 + 0) - 
                p_over_q * *(b + 1082 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 766 * OS1_S1 + 0);
            *(b + 915 * OS1_S1 + 3) = prefactor_z * *(b + 915 * OS1_S1 + 0) - 
                p_over_q * *(b + 1083 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 765 * OS1_S1 + 0);
            *(b + 916 * OS1_S1 + 1) = prefactor_x * *(b + 916 * OS1_S1 + 0) - 
                p_over_q * *(b + 1069 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 780 * OS1_S1 + 0);
            *(b + 916 * OS1_S1 + 2) = prefactor_y * *(b + 916 * OS1_S1 + 0) - 
                p_over_q * *(b + 1083 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 767 * OS1_S1 + 0);
            *(b + 916 * OS1_S1 + 3) = prefactor_z * *(b + 916 * OS1_S1 + 0) - 
                p_over_q * *(b + 1084 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 766 * OS1_S1 + 0);
            *(b + 917 * OS1_S1 + 1) = prefactor_x * *(b + 917 * OS1_S1 + 0) - 
                p_over_q * *(b + 1070 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 781 * OS1_S1 + 0);
            *(b + 917 * OS1_S1 + 2) = prefactor_y * *(b + 917 * OS1_S1 + 0) - 
                p_over_q * *(b + 1084 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 768 * OS1_S1 + 0);
            *(b + 917 * OS1_S1 + 3) = prefactor_z * *(b + 917 * OS1_S1 + 0) - 
                p_over_q * *(b + 1085 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 767 * OS1_S1 + 0);
            *(b + 918 * OS1_S1 + 1) = prefactor_x * *(b + 918 * OS1_S1 + 0) - 
                p_over_q * *(b + 1071 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 782 * OS1_S1 + 0);
            *(b + 918 * OS1_S1 + 2) = prefactor_y * *(b + 918 * OS1_S1 + 0) - 
                p_over_q * *(b + 1085 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 769 * OS1_S1 + 0);
            *(b + 918 * OS1_S1 + 3) = prefactor_z * *(b + 918 * OS1_S1 + 0) - 
                p_over_q * *(b + 1086 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 768 * OS1_S1 + 0);
            *(b + 919 * OS1_S1 + 1) = prefactor_x * *(b + 919 * OS1_S1 + 0) - 
                p_over_q * *(b + 1072 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 783 * OS1_S1 + 0);
            *(b + 919 * OS1_S1 + 2) = prefactor_y * *(b + 919 * OS1_S1 + 0) - 
                p_over_q * *(b + 1086 * OS1_S1 + 0) +
                one_over_two_q * *(b + 770 * OS1_S1 + 0);
            *(b + 919 * OS1_S1 + 3) = prefactor_z * *(b + 919 * OS1_S1 + 0) - 
                p_over_q * *(b + 1087 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 769 * OS1_S1 + 0);
            *(b + 920 * OS1_S1 + 1) = prefactor_x * *(b + 920 * OS1_S1 + 0) - 
                p_over_q * *(b + 1073 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 784 * OS1_S1 + 0);
            *(b + 920 * OS1_S1 + 2) = prefactor_y * *(b + 920 * OS1_S1 + 0) - 
                p_over_q * *(b + 1087 * OS1_S1 + 0);
            *(b + 920 * OS1_S1 + 3) = prefactor_z * *(b + 920 * OS1_S1 + 0) - 
                p_over_q * *(b + 1088 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 770 * OS1_S1 + 0);
            *(b + 921 * OS1_S1 + 1) = prefactor_x * *(b + 921 * OS1_S1 + 0) - 
                p_over_q * *(b + 1074 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 785 * OS1_S1 + 0);
            *(b + 921 * OS1_S1 + 2) = prefactor_y * *(b + 921 * OS1_S1 + 0) - 
                p_over_q * *(b + 1089 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 771 * OS1_S1 + 0);
            *(b + 921 * OS1_S1 + 3) = prefactor_z * *(b + 921 * OS1_S1 + 0) - 
                p_over_q * *(b + 1090 * OS1_S1 + 0);
            *(b + 922 * OS1_S1 + 1) = prefactor_x * *(b + 922 * OS1_S1 + 0) - 
                p_over_q * *(b + 1075 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 786 * OS1_S1 + 0);
            *(b + 922 * OS1_S1 + 2) = prefactor_y * *(b + 922 * OS1_S1 + 0) - 
                p_over_q * *(b + 1090 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 772 * OS1_S1 + 0);
            *(b + 922 * OS1_S1 + 3) = prefactor_z * *(b + 922 * OS1_S1 + 0) - 
                p_over_q * *(b + 1091 * OS1_S1 + 0) +
                one_over_two_q * *(b + 771 * OS1_S1 + 0);
            *(b + 923 * OS1_S1 + 1) = prefactor_x * *(b + 923 * OS1_S1 + 0) - 
                p_over_q * *(b + 1076 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 787 * OS1_S1 + 0);
            *(b + 923 * OS1_S1 + 2) = prefactor_y * *(b + 923 * OS1_S1 + 0) - 
                p_over_q * *(b + 1091 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 773 * OS1_S1 + 0);
            *(b + 923 * OS1_S1 + 3) = prefactor_z * *(b + 923 * OS1_S1 + 0) - 
                p_over_q * *(b + 1092 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 772 * OS1_S1 + 0);
            *(b + 924 * OS1_S1 + 1) = prefactor_x * *(b + 924 * OS1_S1 + 0) - 
                p_over_q * *(b + 1077 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 788 * OS1_S1 + 0);
            *(b + 924 * OS1_S1 + 2) = prefactor_y * *(b + 924 * OS1_S1 + 0) - 
                p_over_q * *(b + 1092 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 774 * OS1_S1 + 0);
            *(b + 924 * OS1_S1 + 3) = prefactor_z * *(b + 924 * OS1_S1 + 0) - 
                p_over_q * *(b + 1093 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 773 * OS1_S1 + 0);
            *(b + 925 * OS1_S1 + 1) = prefactor_x * *(b + 925 * OS1_S1 + 0) - 
                p_over_q * *(b + 1078 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 789 * OS1_S1 + 0);
            *(b + 925 * OS1_S1 + 2) = prefactor_y * *(b + 925 * OS1_S1 + 0) - 
                p_over_q * *(b + 1093 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 775 * OS1_S1 + 0);
            *(b + 925 * OS1_S1 + 3) = prefactor_z * *(b + 925 * OS1_S1 + 0) - 
                p_over_q * *(b + 1094 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 774 * OS1_S1 + 0);
            *(b + 926 * OS1_S1 + 1) = prefactor_x * *(b + 926 * OS1_S1 + 0) - 
                p_over_q * *(b + 1079 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 790 * OS1_S1 + 0);
            *(b + 926 * OS1_S1 + 2) = prefactor_y * *(b + 926 * OS1_S1 + 0) - 
                p_over_q * *(b + 1094 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 776 * OS1_S1 + 0);
            *(b + 926 * OS1_S1 + 3) = prefactor_z * *(b + 926 * OS1_S1 + 0) - 
                p_over_q * *(b + 1095 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 775 * OS1_S1 + 0);
            *(b + 927 * OS1_S1 + 1) = prefactor_x * *(b + 927 * OS1_S1 + 0) - 
                p_over_q * *(b + 1080 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 791 * OS1_S1 + 0);
            *(b + 927 * OS1_S1 + 2) = prefactor_y * *(b + 927 * OS1_S1 + 0) - 
                p_over_q * *(b + 1095 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 777 * OS1_S1 + 0);
            *(b + 927 * OS1_S1 + 3) = prefactor_z * *(b + 927 * OS1_S1 + 0) - 
                p_over_q * *(b + 1096 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 776 * OS1_S1 + 0);
            *(b + 928 * OS1_S1 + 1) = prefactor_x * *(b + 928 * OS1_S1 + 0) - 
                p_over_q * *(b + 1081 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 792 * OS1_S1 + 0);
            *(b + 928 * OS1_S1 + 2) = prefactor_y * *(b + 928 * OS1_S1 + 0) - 
                p_over_q * *(b + 1096 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 778 * OS1_S1 + 0);
            *(b + 928 * OS1_S1 + 3) = prefactor_z * *(b + 928 * OS1_S1 + 0) - 
                p_over_q * *(b + 1097 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 777 * OS1_S1 + 0);
            *(b + 929 * OS1_S1 + 1) = prefactor_x * *(b + 929 * OS1_S1 + 0) - 
                p_over_q * *(b + 1082 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 793 * OS1_S1 + 0);
            *(b + 929 * OS1_S1 + 2) = prefactor_y * *(b + 929 * OS1_S1 + 0) - 
                p_over_q * *(b + 1097 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 779 * OS1_S1 + 0);
            *(b + 929 * OS1_S1 + 3) = prefactor_z * *(b + 929 * OS1_S1 + 0) - 
                p_over_q * *(b + 1098 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 778 * OS1_S1 + 0);
            *(b + 930 * OS1_S1 + 1) = prefactor_x * *(b + 930 * OS1_S1 + 0) - 
                p_over_q * *(b + 1083 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 794 * OS1_S1 + 0);
            *(b + 930 * OS1_S1 + 2) = prefactor_y * *(b + 930 * OS1_S1 + 0) - 
                p_over_q * *(b + 1098 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 780 * OS1_S1 + 0);
            *(b + 930 * OS1_S1 + 3) = prefactor_z * *(b + 930 * OS1_S1 + 0) - 
                p_over_q * *(b + 1099 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 779 * OS1_S1 + 0);
            *(b + 931 * OS1_S1 + 1) = prefactor_x * *(b + 931 * OS1_S1 + 0) - 
                p_over_q * *(b + 1084 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 795 * OS1_S1 + 0);
            *(b + 931 * OS1_S1 + 2) = prefactor_y * *(b + 931 * OS1_S1 + 0) - 
                p_over_q * *(b + 1099 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 781 * OS1_S1 + 0);
            *(b + 931 * OS1_S1 + 3) = prefactor_z * *(b + 931 * OS1_S1 + 0) - 
                p_over_q * *(b + 1100 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 780 * OS1_S1 + 0);
            *(b + 932 * OS1_S1 + 1) = prefactor_x * *(b + 932 * OS1_S1 + 0) - 
                p_over_q * *(b + 1085 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 796 * OS1_S1 + 0);
            *(b + 932 * OS1_S1 + 2) = prefactor_y * *(b + 932 * OS1_S1 + 0) - 
                p_over_q * *(b + 1100 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 782 * OS1_S1 + 0);
            *(b + 932 * OS1_S1 + 3) = prefactor_z * *(b + 932 * OS1_S1 + 0) - 
                p_over_q * *(b + 1101 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 781 * OS1_S1 + 0);
            *(b + 933 * OS1_S1 + 1) = prefactor_x * *(b + 933 * OS1_S1 + 0) - 
                p_over_q * *(b + 1086 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 797 * OS1_S1 + 0);
            *(b + 933 * OS1_S1 + 2) = prefactor_y * *(b + 933 * OS1_S1 + 0) - 
                p_over_q * *(b + 1101 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 783 * OS1_S1 + 0);
            *(b + 933 * OS1_S1 + 3) = prefactor_z * *(b + 933 * OS1_S1 + 0) - 
                p_over_q * *(b + 1102 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 782 * OS1_S1 + 0);
            *(b + 934 * OS1_S1 + 1) = prefactor_x * *(b + 934 * OS1_S1 + 0) - 
                p_over_q * *(b + 1087 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 798 * OS1_S1 + 0);
            *(b + 934 * OS1_S1 + 2) = prefactor_y * *(b + 934 * OS1_S1 + 0) - 
                p_over_q * *(b + 1102 * OS1_S1 + 0) +
                one_over_two_q * *(b + 784 * OS1_S1 + 0);
            *(b + 934 * OS1_S1 + 3) = prefactor_z * *(b + 934 * OS1_S1 + 0) - 
                p_over_q * *(b + 1103 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 783 * OS1_S1 + 0);
            *(b + 935 * OS1_S1 + 1) = prefactor_x * *(b + 935 * OS1_S1 + 0) - 
                p_over_q * *(b + 1088 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 799 * OS1_S1 + 0);
            *(b + 935 * OS1_S1 + 2) = prefactor_y * *(b + 935 * OS1_S1 + 0) - 
                p_over_q * *(b + 1103 * OS1_S1 + 0);
            *(b + 935 * OS1_S1 + 3) = prefactor_z * *(b + 935 * OS1_S1 + 0) - 
                p_over_q * *(b + 1104 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 784 * OS1_S1 + 0);
            *(b + 936 * OS1_S1 + 1) = prefactor_x * *(b + 936 * OS1_S1 + 0) - 
                p_over_q * *(b + 1089 * OS1_S1 + 0) +
                one_over_two_q * *(b + 800 * OS1_S1 + 0);
            *(b + 936 * OS1_S1 + 2) = prefactor_y * *(b + 936 * OS1_S1 + 0) - 
                p_over_q * *(b + 1105 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 785 * OS1_S1 + 0);
            *(b + 936 * OS1_S1 + 3) = prefactor_z * *(b + 936 * OS1_S1 + 0) - 
                p_over_q * *(b + 1106 * OS1_S1 + 0);
            *(b + 937 * OS1_S1 + 1) = prefactor_x * *(b + 937 * OS1_S1 + 0) - 
                p_over_q * *(b + 1090 * OS1_S1 + 0) +
                one_over_two_q * *(b + 801 * OS1_S1 + 0);
            *(b + 937 * OS1_S1 + 2) = prefactor_y * *(b + 937 * OS1_S1 + 0) - 
                p_over_q * *(b + 1106 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 786 * OS1_S1 + 0);
            *(b + 937 * OS1_S1 + 3) = prefactor_z * *(b + 937 * OS1_S1 + 0) - 
                p_over_q * *(b + 1107 * OS1_S1 + 0) +
                one_over_two_q * *(b + 785 * OS1_S1 + 0);
            *(b + 938 * OS1_S1 + 1) = prefactor_x * *(b + 938 * OS1_S1 + 0) - 
                p_over_q * *(b + 1091 * OS1_S1 + 0) +
                one_over_two_q * *(b + 802 * OS1_S1 + 0);
            *(b + 938 * OS1_S1 + 2) = prefactor_y * *(b + 938 * OS1_S1 + 0) - 
                p_over_q * *(b + 1107 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 787 * OS1_S1 + 0);
            *(b + 938 * OS1_S1 + 3) = prefactor_z * *(b + 938 * OS1_S1 + 0) - 
                p_over_q * *(b + 1108 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 786 * OS1_S1 + 0);
            *(b + 939 * OS1_S1 + 1) = prefactor_x * *(b + 939 * OS1_S1 + 0) - 
                p_over_q * *(b + 1092 * OS1_S1 + 0) +
                one_over_two_q * *(b + 803 * OS1_S1 + 0);
            *(b + 939 * OS1_S1 + 2) = prefactor_y * *(b + 939 * OS1_S1 + 0) - 
                p_over_q * *(b + 1108 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 788 * OS1_S1 + 0);
            *(b + 939 * OS1_S1 + 3) = prefactor_z * *(b + 939 * OS1_S1 + 0) - 
                p_over_q * *(b + 1109 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 787 * OS1_S1 + 0);
            *(b + 940 * OS1_S1 + 1) = prefactor_x * *(b + 940 * OS1_S1 + 0) - 
                p_over_q * *(b + 1093 * OS1_S1 + 0) +
                one_over_two_q * *(b + 804 * OS1_S1 + 0);
            *(b + 940 * OS1_S1 + 2) = prefactor_y * *(b + 940 * OS1_S1 + 0) - 
                p_over_q * *(b + 1109 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 789 * OS1_S1 + 0);
            *(b + 940 * OS1_S1 + 3) = prefactor_z * *(b + 940 * OS1_S1 + 0) - 
                p_over_q * *(b + 1110 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 788 * OS1_S1 + 0);
            *(b + 941 * OS1_S1 + 1) = prefactor_x * *(b + 941 * OS1_S1 + 0) - 
                p_over_q * *(b + 1094 * OS1_S1 + 0) +
                one_over_two_q * *(b + 805 * OS1_S1 + 0);
            *(b + 941 * OS1_S1 + 2) = prefactor_y * *(b + 941 * OS1_S1 + 0) - 
                p_over_q * *(b + 1110 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 790 * OS1_S1 + 0);
            *(b + 941 * OS1_S1 + 3) = prefactor_z * *(b + 941 * OS1_S1 + 0) - 
                p_over_q * *(b + 1111 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 789 * OS1_S1 + 0);
            *(b + 942 * OS1_S1 + 1) = prefactor_x * *(b + 942 * OS1_S1 + 0) - 
                p_over_q * *(b + 1095 * OS1_S1 + 0) +
                one_over_two_q * *(b + 806 * OS1_S1 + 0);
            *(b + 942 * OS1_S1 + 2) = prefactor_y * *(b + 942 * OS1_S1 + 0) - 
                p_over_q * *(b + 1111 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 791 * OS1_S1 + 0);
            *(b + 942 * OS1_S1 + 3) = prefactor_z * *(b + 942 * OS1_S1 + 0) - 
                p_over_q * *(b + 1112 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 790 * OS1_S1 + 0);
            *(b + 943 * OS1_S1 + 1) = prefactor_x * *(b + 943 * OS1_S1 + 0) - 
                p_over_q * *(b + 1096 * OS1_S1 + 0) +
                one_over_two_q * *(b + 807 * OS1_S1 + 0);
            *(b + 943 * OS1_S1 + 2) = prefactor_y * *(b + 943 * OS1_S1 + 0) - 
                p_over_q * *(b + 1112 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 792 * OS1_S1 + 0);
            *(b + 943 * OS1_S1 + 3) = prefactor_z * *(b + 943 * OS1_S1 + 0) - 
                p_over_q * *(b + 1113 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 791 * OS1_S1 + 0);
            *(b + 944 * OS1_S1 + 1) = prefactor_x * *(b + 944 * OS1_S1 + 0) - 
                p_over_q * *(b + 1097 * OS1_S1 + 0) +
                one_over_two_q * *(b + 808 * OS1_S1 + 0);
            *(b + 944 * OS1_S1 + 2) = prefactor_y * *(b + 944 * OS1_S1 + 0) - 
                p_over_q * *(b + 1113 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 793 * OS1_S1 + 0);
            *(b + 944 * OS1_S1 + 3) = prefactor_z * *(b + 944 * OS1_S1 + 0) - 
                p_over_q * *(b + 1114 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 792 * OS1_S1 + 0);
            *(b + 945 * OS1_S1 + 1) = prefactor_x * *(b + 945 * OS1_S1 + 0) - 
                p_over_q * *(b + 1098 * OS1_S1 + 0) +
                one_over_two_q * *(b + 809 * OS1_S1 + 0);
            *(b + 945 * OS1_S1 + 2) = prefactor_y * *(b + 945 * OS1_S1 + 0) - 
                p_over_q * *(b + 1114 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 794 * OS1_S1 + 0);
            *(b + 945 * OS1_S1 + 3) = prefactor_z * *(b + 945 * OS1_S1 + 0) - 
                p_over_q * *(b + 1115 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 793 * OS1_S1 + 0);
            *(b + 946 * OS1_S1 + 1) = prefactor_x * *(b + 946 * OS1_S1 + 0) - 
                p_over_q * *(b + 1099 * OS1_S1 + 0) +
                one_over_two_q * *(b + 810 * OS1_S1 + 0);
            *(b + 946 * OS1_S1 + 2) = prefactor_y * *(b + 946 * OS1_S1 + 0) - 
                p_over_q * *(b + 1115 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 795 * OS1_S1 + 0);
            *(b + 946 * OS1_S1 + 3) = prefactor_z * *(b + 946 * OS1_S1 + 0) - 
                p_over_q * *(b + 1116 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 794 * OS1_S1 + 0);
            *(b + 947 * OS1_S1 + 1) = prefactor_x * *(b + 947 * OS1_S1 + 0) - 
                p_over_q * *(b + 1100 * OS1_S1 + 0) +
                one_over_two_q * *(b + 811 * OS1_S1 + 0);
            *(b + 947 * OS1_S1 + 2) = prefactor_y * *(b + 947 * OS1_S1 + 0) - 
                p_over_q * *(b + 1116 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 796 * OS1_S1 + 0);
            *(b + 947 * OS1_S1 + 3) = prefactor_z * *(b + 947 * OS1_S1 + 0) - 
                p_over_q * *(b + 1117 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 795 * OS1_S1 + 0);
            *(b + 948 * OS1_S1 + 1) = prefactor_x * *(b + 948 * OS1_S1 + 0) - 
                p_over_q * *(b + 1101 * OS1_S1 + 0) +
                one_over_two_q * *(b + 812 * OS1_S1 + 0);
            *(b + 948 * OS1_S1 + 2) = prefactor_y * *(b + 948 * OS1_S1 + 0) - 
                p_over_q * *(b + 1117 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 797 * OS1_S1 + 0);
            *(b + 948 * OS1_S1 + 3) = prefactor_z * *(b + 948 * OS1_S1 + 0) - 
                p_over_q * *(b + 1118 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 796 * OS1_S1 + 0);
            *(b + 949 * OS1_S1 + 1) = prefactor_x * *(b + 949 * OS1_S1 + 0) - 
                p_over_q * *(b + 1102 * OS1_S1 + 0) +
                one_over_two_q * *(b + 813 * OS1_S1 + 0);
            *(b + 949 * OS1_S1 + 2) = prefactor_y * *(b + 949 * OS1_S1 + 0) - 
                p_over_q * *(b + 1118 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 798 * OS1_S1 + 0);
            *(b + 949 * OS1_S1 + 3) = prefactor_z * *(b + 949 * OS1_S1 + 0) - 
                p_over_q * *(b + 1119 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 797 * OS1_S1 + 0);
            *(b + 950 * OS1_S1 + 1) = prefactor_x * *(b + 950 * OS1_S1 + 0) - 
                p_over_q * *(b + 1103 * OS1_S1 + 0) +
                one_over_two_q * *(b + 814 * OS1_S1 + 0);
            *(b + 950 * OS1_S1 + 2) = prefactor_y * *(b + 950 * OS1_S1 + 0) - 
                p_over_q * *(b + 1119 * OS1_S1 + 0) +
                one_over_two_q * *(b + 799 * OS1_S1 + 0);
            *(b + 950 * OS1_S1 + 3) = prefactor_z * *(b + 950 * OS1_S1 + 0) - 
                p_over_q * *(b + 1120 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 798 * OS1_S1 + 0);
            *(b + 951 * OS1_S1 + 1) = prefactor_x * *(b + 951 * OS1_S1 + 0) - 
                p_over_q * *(b + 1104 * OS1_S1 + 0) +
                one_over_two_q * *(b + 815 * OS1_S1 + 0);
            *(b + 951 * OS1_S1 + 2) = prefactor_y * *(b + 951 * OS1_S1 + 0) - 
                p_over_q * *(b + 1120 * OS1_S1 + 0);
            *(b + 951 * OS1_S1 + 3) = prefactor_z * *(b + 951 * OS1_S1 + 0) - 
                p_over_q * *(b + 1121 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 799 * OS1_S1 + 0);
            *(b + 952 * OS1_S1 + 1) = prefactor_x * *(b + 952 * OS1_S1 + 0) - 
                p_over_q * *(b + 1105 * OS1_S1 + 0);
            *(b + 952 * OS1_S1 + 2) = prefactor_y * *(b + 952 * OS1_S1 + 0) - 
                p_over_q * *(b + 1122 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 800 * OS1_S1 + 0);
            *(b + 952 * OS1_S1 + 3) = prefactor_z * *(b + 952 * OS1_S1 + 0) - 
                p_over_q * *(b + 1123 * OS1_S1 + 0);
            *(b + 953 * OS1_S1 + 1) = prefactor_x * *(b + 953 * OS1_S1 + 0) - 
                p_over_q * *(b + 1106 * OS1_S1 + 0);
            *(b + 953 * OS1_S1 + 2) = prefactor_y * *(b + 953 * OS1_S1 + 0) - 
                p_over_q * *(b + 1123 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 801 * OS1_S1 + 0);
            *(b + 953 * OS1_S1 + 3) = prefactor_z * *(b + 953 * OS1_S1 + 0) - 
                p_over_q * *(b + 1124 * OS1_S1 + 0) +
                one_over_two_q * *(b + 800 * OS1_S1 + 0);
            *(b + 954 * OS1_S1 + 1) = prefactor_x * *(b + 954 * OS1_S1 + 0) - 
                p_over_q * *(b + 1107 * OS1_S1 + 0);
            *(b + 954 * OS1_S1 + 2) = prefactor_y * *(b + 954 * OS1_S1 + 0) - 
                p_over_q * *(b + 1124 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 802 * OS1_S1 + 0);
            *(b + 954 * OS1_S1 + 3) = prefactor_z * *(b + 954 * OS1_S1 + 0) - 
                p_over_q * *(b + 1125 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 801 * OS1_S1 + 0);
            *(b + 955 * OS1_S1 + 1) = prefactor_x * *(b + 955 * OS1_S1 + 0) - 
                p_over_q * *(b + 1108 * OS1_S1 + 0);
            *(b + 955 * OS1_S1 + 2) = prefactor_y * *(b + 955 * OS1_S1 + 0) - 
                p_over_q * *(b + 1125 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 803 * OS1_S1 + 0);
            *(b + 955 * OS1_S1 + 3) = prefactor_z * *(b + 955 * OS1_S1 + 0) - 
                p_over_q * *(b + 1126 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 802 * OS1_S1 + 0);
            *(b + 956 * OS1_S1 + 1) = prefactor_x * *(b + 956 * OS1_S1 + 0) - 
                p_over_q * *(b + 1109 * OS1_S1 + 0);
            *(b + 956 * OS1_S1 + 2) = prefactor_y * *(b + 956 * OS1_S1 + 0) - 
                p_over_q * *(b + 1126 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 804 * OS1_S1 + 0);
            *(b + 956 * OS1_S1 + 3) = prefactor_z * *(b + 956 * OS1_S1 + 0) - 
                p_over_q * *(b + 1127 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 803 * OS1_S1 + 0);
            *(b + 957 * OS1_S1 + 1) = prefactor_x * *(b + 957 * OS1_S1 + 0) - 
                p_over_q * *(b + 1110 * OS1_S1 + 0);
            *(b + 957 * OS1_S1 + 2) = prefactor_y * *(b + 957 * OS1_S1 + 0) - 
                p_over_q * *(b + 1127 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 805 * OS1_S1 + 0);
            *(b + 957 * OS1_S1 + 3) = prefactor_z * *(b + 957 * OS1_S1 + 0) - 
                p_over_q * *(b + 1128 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 804 * OS1_S1 + 0);
            *(b + 958 * OS1_S1 + 1) = prefactor_x * *(b + 958 * OS1_S1 + 0) - 
                p_over_q * *(b + 1111 * OS1_S1 + 0);
            *(b + 958 * OS1_S1 + 2) = prefactor_y * *(b + 958 * OS1_S1 + 0) - 
                p_over_q * *(b + 1128 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 806 * OS1_S1 + 0);
            *(b + 958 * OS1_S1 + 3) = prefactor_z * *(b + 958 * OS1_S1 + 0) - 
                p_over_q * *(b + 1129 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 805 * OS1_S1 + 0);
            *(b + 959 * OS1_S1 + 1) = prefactor_x * *(b + 959 * OS1_S1 + 0) - 
                p_over_q * *(b + 1112 * OS1_S1 + 0);
            *(b + 959 * OS1_S1 + 2) = prefactor_y * *(b + 959 * OS1_S1 + 0) - 
                p_over_q * *(b + 1129 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 807 * OS1_S1 + 0);
            *(b + 959 * OS1_S1 + 3) = prefactor_z * *(b + 959 * OS1_S1 + 0) - 
                p_over_q * *(b + 1130 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 806 * OS1_S1 + 0);
            *(b + 960 * OS1_S1 + 1) = prefactor_x * *(b + 960 * OS1_S1 + 0) - 
                p_over_q * *(b + 1113 * OS1_S1 + 0);
            *(b + 960 * OS1_S1 + 2) = prefactor_y * *(b + 960 * OS1_S1 + 0) - 
                p_over_q * *(b + 1130 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 808 * OS1_S1 + 0);
            *(b + 960 * OS1_S1 + 3) = prefactor_z * *(b + 960 * OS1_S1 + 0) - 
                p_over_q * *(b + 1131 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 807 * OS1_S1 + 0);
            *(b + 961 * OS1_S1 + 1) = prefactor_x * *(b + 961 * OS1_S1 + 0) - 
                p_over_q * *(b + 1114 * OS1_S1 + 0);
            *(b + 961 * OS1_S1 + 2) = prefactor_y * *(b + 961 * OS1_S1 + 0) - 
                p_over_q * *(b + 1131 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 809 * OS1_S1 + 0);
            *(b + 961 * OS1_S1 + 3) = prefactor_z * *(b + 961 * OS1_S1 + 0) - 
                p_over_q * *(b + 1132 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 808 * OS1_S1 + 0);
            *(b + 962 * OS1_S1 + 1) = prefactor_x * *(b + 962 * OS1_S1 + 0) - 
                p_over_q * *(b + 1115 * OS1_S1 + 0);
            *(b + 962 * OS1_S1 + 2) = prefactor_y * *(b + 962 * OS1_S1 + 0) - 
                p_over_q * *(b + 1132 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 810 * OS1_S1 + 0);
            *(b + 962 * OS1_S1 + 3) = prefactor_z * *(b + 962 * OS1_S1 + 0) - 
                p_over_q * *(b + 1133 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 809 * OS1_S1 + 0);
            *(b + 963 * OS1_S1 + 1) = prefactor_x * *(b + 963 * OS1_S1 + 0) - 
                p_over_q * *(b + 1116 * OS1_S1 + 0);
            *(b + 963 * OS1_S1 + 2) = prefactor_y * *(b + 963 * OS1_S1 + 0) - 
                p_over_q * *(b + 1133 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 811 * OS1_S1 + 0);
            *(b + 963 * OS1_S1 + 3) = prefactor_z * *(b + 963 * OS1_S1 + 0) - 
                p_over_q * *(b + 1134 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 810 * OS1_S1 + 0);
            *(b + 964 * OS1_S1 + 1) = prefactor_x * *(b + 964 * OS1_S1 + 0) - 
                p_over_q * *(b + 1117 * OS1_S1 + 0);
            *(b + 964 * OS1_S1 + 2) = prefactor_y * *(b + 964 * OS1_S1 + 0) - 
                p_over_q * *(b + 1134 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 812 * OS1_S1 + 0);
            *(b + 964 * OS1_S1 + 3) = prefactor_z * *(b + 964 * OS1_S1 + 0) - 
                p_over_q * *(b + 1135 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 811 * OS1_S1 + 0);
            *(b + 965 * OS1_S1 + 1) = prefactor_x * *(b + 965 * OS1_S1 + 0) - 
                p_over_q * *(b + 1118 * OS1_S1 + 0);
            *(b + 965 * OS1_S1 + 2) = prefactor_y * *(b + 965 * OS1_S1 + 0) - 
                p_over_q * *(b + 1135 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 813 * OS1_S1 + 0);
            *(b + 965 * OS1_S1 + 3) = prefactor_z * *(b + 965 * OS1_S1 + 0) - 
                p_over_q * *(b + 1136 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 812 * OS1_S1 + 0);
            *(b + 966 * OS1_S1 + 1) = prefactor_x * *(b + 966 * OS1_S1 + 0) - 
                p_over_q * *(b + 1119 * OS1_S1 + 0);
            *(b + 966 * OS1_S1 + 2) = prefactor_y * *(b + 966 * OS1_S1 + 0) - 
                p_over_q * *(b + 1136 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 814 * OS1_S1 + 0);
            *(b + 966 * OS1_S1 + 3) = prefactor_z * *(b + 966 * OS1_S1 + 0) - 
                p_over_q * *(b + 1137 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 813 * OS1_S1 + 0);
            *(b + 967 * OS1_S1 + 1) = prefactor_x * *(b + 967 * OS1_S1 + 0) - 
                p_over_q * *(b + 1120 * OS1_S1 + 0);
            *(b + 967 * OS1_S1 + 2) = prefactor_y * *(b + 967 * OS1_S1 + 0) - 
                p_over_q * *(b + 1137 * OS1_S1 + 0) +
                one_over_two_q * *(b + 815 * OS1_S1 + 0);
            *(b + 967 * OS1_S1 + 3) = prefactor_z * *(b + 967 * OS1_S1 + 0) - 
                p_over_q * *(b + 1138 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 814 * OS1_S1 + 0);
            *(b + 968 * OS1_S1 + 1) = prefactor_x * *(b + 968 * OS1_S1 + 0) - 
                p_over_q * *(b + 1121 * OS1_S1 + 0);
            *(b + 968 * OS1_S1 + 2) = prefactor_y * *(b + 968 * OS1_S1 + 0) - 
                p_over_q * *(b + 1138 * OS1_S1 + 0);
            *(b + 968 * OS1_S1 + 3) = prefactor_z * *(b + 968 * OS1_S1 + 0) - 
                p_over_q * *(b + 1139 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 815 * OS1_S1 + 0);
            return;
        }
        void transfer_17_1(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 969 * OS1_S1 + 1) = prefactor_x * *(b + 969 * OS1_S1 + 0) - 
                p_over_q * *(b + 1140 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 816 * OS1_S1 + 0);
            *(b + 969 * OS1_S1 + 2) = prefactor_y * *(b + 969 * OS1_S1 + 0) - 
                p_over_q * *(b + 1141 * OS1_S1 + 0);
            *(b + 969 * OS1_S1 + 3) = prefactor_z * *(b + 969 * OS1_S1 + 0) - 
                p_over_q * *(b + 1142 * OS1_S1 + 0);
            *(b + 970 * OS1_S1 + 1) = prefactor_x * *(b + 970 * OS1_S1 + 0) - 
                p_over_q * *(b + 1141 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 817 * OS1_S1 + 0);
            *(b + 970 * OS1_S1 + 2) = prefactor_y * *(b + 970 * OS1_S1 + 0) - 
                p_over_q * *(b + 1143 * OS1_S1 + 0) +
                one_over_two_q * *(b + 816 * OS1_S1 + 0);
            *(b + 970 * OS1_S1 + 3) = prefactor_z * *(b + 970 * OS1_S1 + 0) - 
                p_over_q * *(b + 1144 * OS1_S1 + 0);
            *(b + 971 * OS1_S1 + 1) = prefactor_x * *(b + 971 * OS1_S1 + 0) - 
                p_over_q * *(b + 1142 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 818 * OS1_S1 + 0);
            *(b + 971 * OS1_S1 + 2) = prefactor_y * *(b + 971 * OS1_S1 + 0) - 
                p_over_q * *(b + 1144 * OS1_S1 + 0);
            *(b + 971 * OS1_S1 + 3) = prefactor_z * *(b + 971 * OS1_S1 + 0) - 
                p_over_q * *(b + 1145 * OS1_S1 + 0) +
                one_over_two_q * *(b + 816 * OS1_S1 + 0);
            *(b + 972 * OS1_S1 + 1) = prefactor_x * *(b + 972 * OS1_S1 + 0) - 
                p_over_q * *(b + 1143 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 819 * OS1_S1 + 0);
            *(b + 972 * OS1_S1 + 2) = prefactor_y * *(b + 972 * OS1_S1 + 0) - 
                p_over_q * *(b + 1146 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 817 * OS1_S1 + 0);
            *(b + 972 * OS1_S1 + 3) = prefactor_z * *(b + 972 * OS1_S1 + 0) - 
                p_over_q * *(b + 1147 * OS1_S1 + 0);
            *(b + 973 * OS1_S1 + 1) = prefactor_x * *(b + 973 * OS1_S1 + 0) - 
                p_over_q * *(b + 1144 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 820 * OS1_S1 + 0);
            *(b + 973 * OS1_S1 + 2) = prefactor_y * *(b + 973 * OS1_S1 + 0) - 
                p_over_q * *(b + 1147 * OS1_S1 + 0) +
                one_over_two_q * *(b + 818 * OS1_S1 + 0);
            *(b + 973 * OS1_S1 + 3) = prefactor_z * *(b + 973 * OS1_S1 + 0) - 
                p_over_q * *(b + 1148 * OS1_S1 + 0) +
                one_over_two_q * *(b + 817 * OS1_S1 + 0);
            *(b + 974 * OS1_S1 + 1) = prefactor_x * *(b + 974 * OS1_S1 + 0) - 
                p_over_q * *(b + 1145 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 821 * OS1_S1 + 0);
            *(b + 974 * OS1_S1 + 2) = prefactor_y * *(b + 974 * OS1_S1 + 0) - 
                p_over_q * *(b + 1148 * OS1_S1 + 0);
            *(b + 974 * OS1_S1 + 3) = prefactor_z * *(b + 974 * OS1_S1 + 0) - 
                p_over_q * *(b + 1149 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 818 * OS1_S1 + 0);
            *(b + 975 * OS1_S1 + 1) = prefactor_x * *(b + 975 * OS1_S1 + 0) - 
                p_over_q * *(b + 1146 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 822 * OS1_S1 + 0);
            *(b + 975 * OS1_S1 + 2) = prefactor_y * *(b + 975 * OS1_S1 + 0) - 
                p_over_q * *(b + 1150 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 819 * OS1_S1 + 0);
            *(b + 975 * OS1_S1 + 3) = prefactor_z * *(b + 975 * OS1_S1 + 0) - 
                p_over_q * *(b + 1151 * OS1_S1 + 0);
            *(b + 976 * OS1_S1 + 1) = prefactor_x * *(b + 976 * OS1_S1 + 0) - 
                p_over_q * *(b + 1147 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 823 * OS1_S1 + 0);
            *(b + 976 * OS1_S1 + 2) = prefactor_y * *(b + 976 * OS1_S1 + 0) - 
                p_over_q * *(b + 1151 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 820 * OS1_S1 + 0);
            *(b + 976 * OS1_S1 + 3) = prefactor_z * *(b + 976 * OS1_S1 + 0) - 
                p_over_q * *(b + 1152 * OS1_S1 + 0) +
                one_over_two_q * *(b + 819 * OS1_S1 + 0);
            *(b + 977 * OS1_S1 + 1) = prefactor_x * *(b + 977 * OS1_S1 + 0) - 
                p_over_q * *(b + 1148 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 824 * OS1_S1 + 0);
            *(b + 977 * OS1_S1 + 2) = prefactor_y * *(b + 977 * OS1_S1 + 0) - 
                p_over_q * *(b + 1152 * OS1_S1 + 0) +
                one_over_two_q * *(b + 821 * OS1_S1 + 0);
            *(b + 977 * OS1_S1 + 3) = prefactor_z * *(b + 977 * OS1_S1 + 0) - 
                p_over_q * *(b + 1153 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 820 * OS1_S1 + 0);
            *(b + 978 * OS1_S1 + 1) = prefactor_x * *(b + 978 * OS1_S1 + 0) - 
                p_over_q * *(b + 1149 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 825 * OS1_S1 + 0);
            *(b + 978 * OS1_S1 + 2) = prefactor_y * *(b + 978 * OS1_S1 + 0) - 
                p_over_q * *(b + 1153 * OS1_S1 + 0);
            *(b + 978 * OS1_S1 + 3) = prefactor_z * *(b + 978 * OS1_S1 + 0) - 
                p_over_q * *(b + 1154 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 821 * OS1_S1 + 0);
            *(b + 979 * OS1_S1 + 1) = prefactor_x * *(b + 979 * OS1_S1 + 0) - 
                p_over_q * *(b + 1150 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 826 * OS1_S1 + 0);
            *(b + 979 * OS1_S1 + 2) = prefactor_y * *(b + 979 * OS1_S1 + 0) - 
                p_over_q * *(b + 1155 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 822 * OS1_S1 + 0);
            *(b + 979 * OS1_S1 + 3) = prefactor_z * *(b + 979 * OS1_S1 + 0) - 
                p_over_q * *(b + 1156 * OS1_S1 + 0);
            *(b + 980 * OS1_S1 + 1) = prefactor_x * *(b + 980 * OS1_S1 + 0) - 
                p_over_q * *(b + 1151 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 827 * OS1_S1 + 0);
            *(b + 980 * OS1_S1 + 2) = prefactor_y * *(b + 980 * OS1_S1 + 0) - 
                p_over_q * *(b + 1156 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 823 * OS1_S1 + 0);
            *(b + 980 * OS1_S1 + 3) = prefactor_z * *(b + 980 * OS1_S1 + 0) - 
                p_over_q * *(b + 1157 * OS1_S1 + 0) +
                one_over_two_q * *(b + 822 * OS1_S1 + 0);
            *(b + 981 * OS1_S1 + 1) = prefactor_x * *(b + 981 * OS1_S1 + 0) - 
                p_over_q * *(b + 1152 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 828 * OS1_S1 + 0);
            *(b + 981 * OS1_S1 + 2) = prefactor_y * *(b + 981 * OS1_S1 + 0) - 
                p_over_q * *(b + 1157 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 824 * OS1_S1 + 0);
            *(b + 981 * OS1_S1 + 3) = prefactor_z * *(b + 981 * OS1_S1 + 0) - 
                p_over_q * *(b + 1158 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 823 * OS1_S1 + 0);
            *(b + 982 * OS1_S1 + 1) = prefactor_x * *(b + 982 * OS1_S1 + 0) - 
                p_over_q * *(b + 1153 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 829 * OS1_S1 + 0);
            *(b + 982 * OS1_S1 + 2) = prefactor_y * *(b + 982 * OS1_S1 + 0) - 
                p_over_q * *(b + 1158 * OS1_S1 + 0) +
                one_over_two_q * *(b + 825 * OS1_S1 + 0);
            *(b + 982 * OS1_S1 + 3) = prefactor_z * *(b + 982 * OS1_S1 + 0) - 
                p_over_q * *(b + 1159 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 824 * OS1_S1 + 0);
            *(b + 983 * OS1_S1 + 1) = prefactor_x * *(b + 983 * OS1_S1 + 0) - 
                p_over_q * *(b + 1154 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 830 * OS1_S1 + 0);
            *(b + 983 * OS1_S1 + 2) = prefactor_y * *(b + 983 * OS1_S1 + 0) - 
                p_over_q * *(b + 1159 * OS1_S1 + 0);
            *(b + 983 * OS1_S1 + 3) = prefactor_z * *(b + 983 * OS1_S1 + 0) - 
                p_over_q * *(b + 1160 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 825 * OS1_S1 + 0);
            *(b + 984 * OS1_S1 + 1) = prefactor_x * *(b + 984 * OS1_S1 + 0) - 
                p_over_q * *(b + 1155 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 831 * OS1_S1 + 0);
            *(b + 984 * OS1_S1 + 2) = prefactor_y * *(b + 984 * OS1_S1 + 0) - 
                p_over_q * *(b + 1161 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 826 * OS1_S1 + 0);
            *(b + 984 * OS1_S1 + 3) = prefactor_z * *(b + 984 * OS1_S1 + 0) - 
                p_over_q * *(b + 1162 * OS1_S1 + 0);
            *(b + 985 * OS1_S1 + 1) = prefactor_x * *(b + 985 * OS1_S1 + 0) - 
                p_over_q * *(b + 1156 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 832 * OS1_S1 + 0);
            *(b + 985 * OS1_S1 + 2) = prefactor_y * *(b + 985 * OS1_S1 + 0) - 
                p_over_q * *(b + 1162 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 827 * OS1_S1 + 0);
            *(b + 985 * OS1_S1 + 3) = prefactor_z * *(b + 985 * OS1_S1 + 0) - 
                p_over_q * *(b + 1163 * OS1_S1 + 0) +
                one_over_two_q * *(b + 826 * OS1_S1 + 0);
            *(b + 986 * OS1_S1 + 1) = prefactor_x * *(b + 986 * OS1_S1 + 0) - 
                p_over_q * *(b + 1157 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 833 * OS1_S1 + 0);
            *(b + 986 * OS1_S1 + 2) = prefactor_y * *(b + 986 * OS1_S1 + 0) - 
                p_over_q * *(b + 1163 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 828 * OS1_S1 + 0);
            *(b + 986 * OS1_S1 + 3) = prefactor_z * *(b + 986 * OS1_S1 + 0) - 
                p_over_q * *(b + 1164 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 827 * OS1_S1 + 0);
            *(b + 987 * OS1_S1 + 1) = prefactor_x * *(b + 987 * OS1_S1 + 0) - 
                p_over_q * *(b + 1158 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 834 * OS1_S1 + 0);
            *(b + 987 * OS1_S1 + 2) = prefactor_y * *(b + 987 * OS1_S1 + 0) - 
                p_over_q * *(b + 1164 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 829 * OS1_S1 + 0);
            *(b + 987 * OS1_S1 + 3) = prefactor_z * *(b + 987 * OS1_S1 + 0) - 
                p_over_q * *(b + 1165 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 828 * OS1_S1 + 0);
            *(b + 988 * OS1_S1 + 1) = prefactor_x * *(b + 988 * OS1_S1 + 0) - 
                p_over_q * *(b + 1159 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 835 * OS1_S1 + 0);
            *(b + 988 * OS1_S1 + 2) = prefactor_y * *(b + 988 * OS1_S1 + 0) - 
                p_over_q * *(b + 1165 * OS1_S1 + 0) +
                one_over_two_q * *(b + 830 * OS1_S1 + 0);
            *(b + 988 * OS1_S1 + 3) = prefactor_z * *(b + 988 * OS1_S1 + 0) - 
                p_over_q * *(b + 1166 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 829 * OS1_S1 + 0);
            *(b + 989 * OS1_S1 + 1) = prefactor_x * *(b + 989 * OS1_S1 + 0) - 
                p_over_q * *(b + 1160 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 836 * OS1_S1 + 0);
            *(b + 989 * OS1_S1 + 2) = prefactor_y * *(b + 989 * OS1_S1 + 0) - 
                p_over_q * *(b + 1166 * OS1_S1 + 0);
            *(b + 989 * OS1_S1 + 3) = prefactor_z * *(b + 989 * OS1_S1 + 0) - 
                p_over_q * *(b + 1167 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 830 * OS1_S1 + 0);
            *(b + 990 * OS1_S1 + 1) = prefactor_x * *(b + 990 * OS1_S1 + 0) - 
                p_over_q * *(b + 1161 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 837 * OS1_S1 + 0);
            *(b + 990 * OS1_S1 + 2) = prefactor_y * *(b + 990 * OS1_S1 + 0) - 
                p_over_q * *(b + 1168 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 831 * OS1_S1 + 0);
            *(b + 990 * OS1_S1 + 3) = prefactor_z * *(b + 990 * OS1_S1 + 0) - 
                p_over_q * *(b + 1169 * OS1_S1 + 0);
            *(b + 991 * OS1_S1 + 1) = prefactor_x * *(b + 991 * OS1_S1 + 0) - 
                p_over_q * *(b + 1162 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 838 * OS1_S1 + 0);
            *(b + 991 * OS1_S1 + 2) = prefactor_y * *(b + 991 * OS1_S1 + 0) - 
                p_over_q * *(b + 1169 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 832 * OS1_S1 + 0);
            *(b + 991 * OS1_S1 + 3) = prefactor_z * *(b + 991 * OS1_S1 + 0) - 
                p_over_q * *(b + 1170 * OS1_S1 + 0) +
                one_over_two_q * *(b + 831 * OS1_S1 + 0);
            *(b + 992 * OS1_S1 + 1) = prefactor_x * *(b + 992 * OS1_S1 + 0) - 
                p_over_q * *(b + 1163 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 839 * OS1_S1 + 0);
            *(b + 992 * OS1_S1 + 2) = prefactor_y * *(b + 992 * OS1_S1 + 0) - 
                p_over_q * *(b + 1170 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 833 * OS1_S1 + 0);
            *(b + 992 * OS1_S1 + 3) = prefactor_z * *(b + 992 * OS1_S1 + 0) - 
                p_over_q * *(b + 1171 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 832 * OS1_S1 + 0);
            *(b + 993 * OS1_S1 + 1) = prefactor_x * *(b + 993 * OS1_S1 + 0) - 
                p_over_q * *(b + 1164 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 840 * OS1_S1 + 0);
            *(b + 993 * OS1_S1 + 2) = prefactor_y * *(b + 993 * OS1_S1 + 0) - 
                p_over_q * *(b + 1171 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 834 * OS1_S1 + 0);
            *(b + 993 * OS1_S1 + 3) = prefactor_z * *(b + 993 * OS1_S1 + 0) - 
                p_over_q * *(b + 1172 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 833 * OS1_S1 + 0);
            *(b + 994 * OS1_S1 + 1) = prefactor_x * *(b + 994 * OS1_S1 + 0) - 
                p_over_q * *(b + 1165 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 841 * OS1_S1 + 0);
            *(b + 994 * OS1_S1 + 2) = prefactor_y * *(b + 994 * OS1_S1 + 0) - 
                p_over_q * *(b + 1172 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 835 * OS1_S1 + 0);
            *(b + 994 * OS1_S1 + 3) = prefactor_z * *(b + 994 * OS1_S1 + 0) - 
                p_over_q * *(b + 1173 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 834 * OS1_S1 + 0);
            *(b + 995 * OS1_S1 + 1) = prefactor_x * *(b + 995 * OS1_S1 + 0) - 
                p_over_q * *(b + 1166 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 842 * OS1_S1 + 0);
            *(b + 995 * OS1_S1 + 2) = prefactor_y * *(b + 995 * OS1_S1 + 0) - 
                p_over_q * *(b + 1173 * OS1_S1 + 0) +
                one_over_two_q * *(b + 836 * OS1_S1 + 0);
            *(b + 995 * OS1_S1 + 3) = prefactor_z * *(b + 995 * OS1_S1 + 0) - 
                p_over_q * *(b + 1174 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 835 * OS1_S1 + 0);
            *(b + 996 * OS1_S1 + 1) = prefactor_x * *(b + 996 * OS1_S1 + 0) - 
                p_over_q * *(b + 1167 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 843 * OS1_S1 + 0);
            *(b + 996 * OS1_S1 + 2) = prefactor_y * *(b + 996 * OS1_S1 + 0) - 
                p_over_q * *(b + 1174 * OS1_S1 + 0);
            *(b + 996 * OS1_S1 + 3) = prefactor_z * *(b + 996 * OS1_S1 + 0) - 
                p_over_q * *(b + 1175 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 836 * OS1_S1 + 0);
            *(b + 997 * OS1_S1 + 1) = prefactor_x * *(b + 997 * OS1_S1 + 0) - 
                p_over_q * *(b + 1168 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 844 * OS1_S1 + 0);
            *(b + 997 * OS1_S1 + 2) = prefactor_y * *(b + 997 * OS1_S1 + 0) - 
                p_over_q * *(b + 1176 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 837 * OS1_S1 + 0);
            *(b + 997 * OS1_S1 + 3) = prefactor_z * *(b + 997 * OS1_S1 + 0) - 
                p_over_q * *(b + 1177 * OS1_S1 + 0);
            *(b + 998 * OS1_S1 + 1) = prefactor_x * *(b + 998 * OS1_S1 + 0) - 
                p_over_q * *(b + 1169 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 845 * OS1_S1 + 0);
            *(b + 998 * OS1_S1 + 2) = prefactor_y * *(b + 998 * OS1_S1 + 0) - 
                p_over_q * *(b + 1177 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 838 * OS1_S1 + 0);
            *(b + 998 * OS1_S1 + 3) = prefactor_z * *(b + 998 * OS1_S1 + 0) - 
                p_over_q * *(b + 1178 * OS1_S1 + 0) +
                one_over_two_q * *(b + 837 * OS1_S1 + 0);
            *(b + 999 * OS1_S1 + 1) = prefactor_x * *(b + 999 * OS1_S1 + 0) - 
                p_over_q * *(b + 1170 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 846 * OS1_S1 + 0);
            *(b + 999 * OS1_S1 + 2) = prefactor_y * *(b + 999 * OS1_S1 + 0) - 
                p_over_q * *(b + 1178 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 839 * OS1_S1 + 0);
            *(b + 999 * OS1_S1 + 3) = prefactor_z * *(b + 999 * OS1_S1 + 0) - 
                p_over_q * *(b + 1179 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 838 * OS1_S1 + 0);
            *(b + 1000 * OS1_S1 + 1) = prefactor_x * *(b + 1000 * OS1_S1 + 0) - 
                p_over_q * *(b + 1171 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 847 * OS1_S1 + 0);
            *(b + 1000 * OS1_S1 + 2) = prefactor_y * *(b + 1000 * OS1_S1 + 0) - 
                p_over_q * *(b + 1179 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 840 * OS1_S1 + 0);
            *(b + 1000 * OS1_S1 + 3) = prefactor_z * *(b + 1000 * OS1_S1 + 0) - 
                p_over_q * *(b + 1180 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 839 * OS1_S1 + 0);
            *(b + 1001 * OS1_S1 + 1) = prefactor_x * *(b + 1001 * OS1_S1 + 0) - 
                p_over_q * *(b + 1172 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 848 * OS1_S1 + 0);
            *(b + 1001 * OS1_S1 + 2) = prefactor_y * *(b + 1001 * OS1_S1 + 0) - 
                p_over_q * *(b + 1180 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 841 * OS1_S1 + 0);
            *(b + 1001 * OS1_S1 + 3) = prefactor_z * *(b + 1001 * OS1_S1 + 0) - 
                p_over_q * *(b + 1181 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 840 * OS1_S1 + 0);
            *(b + 1002 * OS1_S1 + 1) = prefactor_x * *(b + 1002 * OS1_S1 + 0) - 
                p_over_q * *(b + 1173 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 849 * OS1_S1 + 0);
            *(b + 1002 * OS1_S1 + 2) = prefactor_y * *(b + 1002 * OS1_S1 + 0) - 
                p_over_q * *(b + 1181 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 842 * OS1_S1 + 0);
            *(b + 1002 * OS1_S1 + 3) = prefactor_z * *(b + 1002 * OS1_S1 + 0) - 
                p_over_q * *(b + 1182 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 841 * OS1_S1 + 0);
            *(b + 1003 * OS1_S1 + 1) = prefactor_x * *(b + 1003 * OS1_S1 + 0) - 
                p_over_q * *(b + 1174 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 850 * OS1_S1 + 0);
            *(b + 1003 * OS1_S1 + 2) = prefactor_y * *(b + 1003 * OS1_S1 + 0) - 
                p_over_q * *(b + 1182 * OS1_S1 + 0) +
                one_over_two_q * *(b + 843 * OS1_S1 + 0);
            *(b + 1003 * OS1_S1 + 3) = prefactor_z * *(b + 1003 * OS1_S1 + 0) - 
                p_over_q * *(b + 1183 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 842 * OS1_S1 + 0);
            *(b + 1004 * OS1_S1 + 1) = prefactor_x * *(b + 1004 * OS1_S1 + 0) - 
                p_over_q * *(b + 1175 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 851 * OS1_S1 + 0);
            *(b + 1004 * OS1_S1 + 2) = prefactor_y * *(b + 1004 * OS1_S1 + 0) - 
                p_over_q * *(b + 1183 * OS1_S1 + 0);
            *(b + 1004 * OS1_S1 + 3) = prefactor_z * *(b + 1004 * OS1_S1 + 0) - 
                p_over_q * *(b + 1184 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 843 * OS1_S1 + 0);
            *(b + 1005 * OS1_S1 + 1) = prefactor_x * *(b + 1005 * OS1_S1 + 0) - 
                p_over_q * *(b + 1176 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 852 * OS1_S1 + 0);
            *(b + 1005 * OS1_S1 + 2) = prefactor_y * *(b + 1005 * OS1_S1 + 0) - 
                p_over_q * *(b + 1185 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 844 * OS1_S1 + 0);
            *(b + 1005 * OS1_S1 + 3) = prefactor_z * *(b + 1005 * OS1_S1 + 0) - 
                p_over_q * *(b + 1186 * OS1_S1 + 0);
            *(b + 1006 * OS1_S1 + 1) = prefactor_x * *(b + 1006 * OS1_S1 + 0) - 
                p_over_q * *(b + 1177 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 853 * OS1_S1 + 0);
            *(b + 1006 * OS1_S1 + 2) = prefactor_y * *(b + 1006 * OS1_S1 + 0) - 
                p_over_q * *(b + 1186 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 845 * OS1_S1 + 0);
            *(b + 1006 * OS1_S1 + 3) = prefactor_z * *(b + 1006 * OS1_S1 + 0) - 
                p_over_q * *(b + 1187 * OS1_S1 + 0) +
                one_over_two_q * *(b + 844 * OS1_S1 + 0);
            *(b + 1007 * OS1_S1 + 1) = prefactor_x * *(b + 1007 * OS1_S1 + 0) - 
                p_over_q * *(b + 1178 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 854 * OS1_S1 + 0);
            *(b + 1007 * OS1_S1 + 2) = prefactor_y * *(b + 1007 * OS1_S1 + 0) - 
                p_over_q * *(b + 1187 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 846 * OS1_S1 + 0);
            *(b + 1007 * OS1_S1 + 3) = prefactor_z * *(b + 1007 * OS1_S1 + 0) - 
                p_over_q * *(b + 1188 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 845 * OS1_S1 + 0);
            *(b + 1008 * OS1_S1 + 1) = prefactor_x * *(b + 1008 * OS1_S1 + 0) - 
                p_over_q * *(b + 1179 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 855 * OS1_S1 + 0);
            *(b + 1008 * OS1_S1 + 2) = prefactor_y * *(b + 1008 * OS1_S1 + 0) - 
                p_over_q * *(b + 1188 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 847 * OS1_S1 + 0);
            *(b + 1008 * OS1_S1 + 3) = prefactor_z * *(b + 1008 * OS1_S1 + 0) - 
                p_over_q * *(b + 1189 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 846 * OS1_S1 + 0);
            *(b + 1009 * OS1_S1 + 1) = prefactor_x * *(b + 1009 * OS1_S1 + 0) - 
                p_over_q * *(b + 1180 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 856 * OS1_S1 + 0);
            *(b + 1009 * OS1_S1 + 2) = prefactor_y * *(b + 1009 * OS1_S1 + 0) - 
                p_over_q * *(b + 1189 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 848 * OS1_S1 + 0);
            *(b + 1009 * OS1_S1 + 3) = prefactor_z * *(b + 1009 * OS1_S1 + 0) - 
                p_over_q * *(b + 1190 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 847 * OS1_S1 + 0);
            *(b + 1010 * OS1_S1 + 1) = prefactor_x * *(b + 1010 * OS1_S1 + 0) - 
                p_over_q * *(b + 1181 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 857 * OS1_S1 + 0);
            *(b + 1010 * OS1_S1 + 2) = prefactor_y * *(b + 1010 * OS1_S1 + 0) - 
                p_over_q * *(b + 1190 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 849 * OS1_S1 + 0);
            *(b + 1010 * OS1_S1 + 3) = prefactor_z * *(b + 1010 * OS1_S1 + 0) - 
                p_over_q * *(b + 1191 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 848 * OS1_S1 + 0);
            *(b + 1011 * OS1_S1 + 1) = prefactor_x * *(b + 1011 * OS1_S1 + 0) - 
                p_over_q * *(b + 1182 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 858 * OS1_S1 + 0);
            *(b + 1011 * OS1_S1 + 2) = prefactor_y * *(b + 1011 * OS1_S1 + 0) - 
                p_over_q * *(b + 1191 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 850 * OS1_S1 + 0);
            *(b + 1011 * OS1_S1 + 3) = prefactor_z * *(b + 1011 * OS1_S1 + 0) - 
                p_over_q * *(b + 1192 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 849 * OS1_S1 + 0);
            *(b + 1012 * OS1_S1 + 1) = prefactor_x * *(b + 1012 * OS1_S1 + 0) - 
                p_over_q * *(b + 1183 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 859 * OS1_S1 + 0);
            *(b + 1012 * OS1_S1 + 2) = prefactor_y * *(b + 1012 * OS1_S1 + 0) - 
                p_over_q * *(b + 1192 * OS1_S1 + 0) +
                one_over_two_q * *(b + 851 * OS1_S1 + 0);
            *(b + 1012 * OS1_S1 + 3) = prefactor_z * *(b + 1012 * OS1_S1 + 0) - 
                p_over_q * *(b + 1193 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 850 * OS1_S1 + 0);
            *(b + 1013 * OS1_S1 + 1) = prefactor_x * *(b + 1013 * OS1_S1 + 0) - 
                p_over_q * *(b + 1184 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 860 * OS1_S1 + 0);
            *(b + 1013 * OS1_S1 + 2) = prefactor_y * *(b + 1013 * OS1_S1 + 0) - 
                p_over_q * *(b + 1193 * OS1_S1 + 0);
            *(b + 1013 * OS1_S1 + 3) = prefactor_z * *(b + 1013 * OS1_S1 + 0) - 
                p_over_q * *(b + 1194 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 851 * OS1_S1 + 0);
            *(b + 1014 * OS1_S1 + 1) = prefactor_x * *(b + 1014 * OS1_S1 + 0) - 
                p_over_q * *(b + 1185 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 861 * OS1_S1 + 0);
            *(b + 1014 * OS1_S1 + 2) = prefactor_y * *(b + 1014 * OS1_S1 + 0) - 
                p_over_q * *(b + 1195 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 852 * OS1_S1 + 0);
            *(b + 1014 * OS1_S1 + 3) = prefactor_z * *(b + 1014 * OS1_S1 + 0) - 
                p_over_q * *(b + 1196 * OS1_S1 + 0);
            *(b + 1015 * OS1_S1 + 1) = prefactor_x * *(b + 1015 * OS1_S1 + 0) - 
                p_over_q * *(b + 1186 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 862 * OS1_S1 + 0);
            *(b + 1015 * OS1_S1 + 2) = prefactor_y * *(b + 1015 * OS1_S1 + 0) - 
                p_over_q * *(b + 1196 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 853 * OS1_S1 + 0);
            *(b + 1015 * OS1_S1 + 3) = prefactor_z * *(b + 1015 * OS1_S1 + 0) - 
                p_over_q * *(b + 1197 * OS1_S1 + 0) +
                one_over_two_q * *(b + 852 * OS1_S1 + 0);
            *(b + 1016 * OS1_S1 + 1) = prefactor_x * *(b + 1016 * OS1_S1 + 0) - 
                p_over_q * *(b + 1187 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 863 * OS1_S1 + 0);
            *(b + 1016 * OS1_S1 + 2) = prefactor_y * *(b + 1016 * OS1_S1 + 0) - 
                p_over_q * *(b + 1197 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 854 * OS1_S1 + 0);
            *(b + 1016 * OS1_S1 + 3) = prefactor_z * *(b + 1016 * OS1_S1 + 0) - 
                p_over_q * *(b + 1198 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 853 * OS1_S1 + 0);
            *(b + 1017 * OS1_S1 + 1) = prefactor_x * *(b + 1017 * OS1_S1 + 0) - 
                p_over_q * *(b + 1188 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 864 * OS1_S1 + 0);
            *(b + 1017 * OS1_S1 + 2) = prefactor_y * *(b + 1017 * OS1_S1 + 0) - 
                p_over_q * *(b + 1198 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 855 * OS1_S1 + 0);
            *(b + 1017 * OS1_S1 + 3) = prefactor_z * *(b + 1017 * OS1_S1 + 0) - 
                p_over_q * *(b + 1199 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 854 * OS1_S1 + 0);
            *(b + 1018 * OS1_S1 + 1) = prefactor_x * *(b + 1018 * OS1_S1 + 0) - 
                p_over_q * *(b + 1189 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 865 * OS1_S1 + 0);
            *(b + 1018 * OS1_S1 + 2) = prefactor_y * *(b + 1018 * OS1_S1 + 0) - 
                p_over_q * *(b + 1199 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 856 * OS1_S1 + 0);
            *(b + 1018 * OS1_S1 + 3) = prefactor_z * *(b + 1018 * OS1_S1 + 0) - 
                p_over_q * *(b + 1200 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 855 * OS1_S1 + 0);
            *(b + 1019 * OS1_S1 + 1) = prefactor_x * *(b + 1019 * OS1_S1 + 0) - 
                p_over_q * *(b + 1190 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 866 * OS1_S1 + 0);
            *(b + 1019 * OS1_S1 + 2) = prefactor_y * *(b + 1019 * OS1_S1 + 0) - 
                p_over_q * *(b + 1200 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 857 * OS1_S1 + 0);
            *(b + 1019 * OS1_S1 + 3) = prefactor_z * *(b + 1019 * OS1_S1 + 0) - 
                p_over_q * *(b + 1201 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 856 * OS1_S1 + 0);
            *(b + 1020 * OS1_S1 + 1) = prefactor_x * *(b + 1020 * OS1_S1 + 0) - 
                p_over_q * *(b + 1191 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 867 * OS1_S1 + 0);
            *(b + 1020 * OS1_S1 + 2) = prefactor_y * *(b + 1020 * OS1_S1 + 0) - 
                p_over_q * *(b + 1201 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 858 * OS1_S1 + 0);
            *(b + 1020 * OS1_S1 + 3) = prefactor_z * *(b + 1020 * OS1_S1 + 0) - 
                p_over_q * *(b + 1202 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 857 * OS1_S1 + 0);
            *(b + 1021 * OS1_S1 + 1) = prefactor_x * *(b + 1021 * OS1_S1 + 0) - 
                p_over_q * *(b + 1192 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 868 * OS1_S1 + 0);
            *(b + 1021 * OS1_S1 + 2) = prefactor_y * *(b + 1021 * OS1_S1 + 0) - 
                p_over_q * *(b + 1202 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 859 * OS1_S1 + 0);
            *(b + 1021 * OS1_S1 + 3) = prefactor_z * *(b + 1021 * OS1_S1 + 0) - 
                p_over_q * *(b + 1203 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 858 * OS1_S1 + 0);
            *(b + 1022 * OS1_S1 + 1) = prefactor_x * *(b + 1022 * OS1_S1 + 0) - 
                p_over_q * *(b + 1193 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 869 * OS1_S1 + 0);
            *(b + 1022 * OS1_S1 + 2) = prefactor_y * *(b + 1022 * OS1_S1 + 0) - 
                p_over_q * *(b + 1203 * OS1_S1 + 0) +
                one_over_two_q * *(b + 860 * OS1_S1 + 0);
            *(b + 1022 * OS1_S1 + 3) = prefactor_z * *(b + 1022 * OS1_S1 + 0) - 
                p_over_q * *(b + 1204 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 859 * OS1_S1 + 0);
            *(b + 1023 * OS1_S1 + 1) = prefactor_x * *(b + 1023 * OS1_S1 + 0) - 
                p_over_q * *(b + 1194 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 870 * OS1_S1 + 0);
            *(b + 1023 * OS1_S1 + 2) = prefactor_y * *(b + 1023 * OS1_S1 + 0) - 
                p_over_q * *(b + 1204 * OS1_S1 + 0);
            *(b + 1023 * OS1_S1 + 3) = prefactor_z * *(b + 1023 * OS1_S1 + 0) - 
                p_over_q * *(b + 1205 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 860 * OS1_S1 + 0);
            *(b + 1024 * OS1_S1 + 1) = prefactor_x * *(b + 1024 * OS1_S1 + 0) - 
                p_over_q * *(b + 1195 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 871 * OS1_S1 + 0);
            *(b + 1024 * OS1_S1 + 2) = prefactor_y * *(b + 1024 * OS1_S1 + 0) - 
                p_over_q * *(b + 1206 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 861 * OS1_S1 + 0);
            *(b + 1024 * OS1_S1 + 3) = prefactor_z * *(b + 1024 * OS1_S1 + 0) - 
                p_over_q * *(b + 1207 * OS1_S1 + 0);
            *(b + 1025 * OS1_S1 + 1) = prefactor_x * *(b + 1025 * OS1_S1 + 0) - 
                p_over_q * *(b + 1196 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 872 * OS1_S1 + 0);
            *(b + 1025 * OS1_S1 + 2) = prefactor_y * *(b + 1025 * OS1_S1 + 0) - 
                p_over_q * *(b + 1207 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 862 * OS1_S1 + 0);
            *(b + 1025 * OS1_S1 + 3) = prefactor_z * *(b + 1025 * OS1_S1 + 0) - 
                p_over_q * *(b + 1208 * OS1_S1 + 0) +
                one_over_two_q * *(b + 861 * OS1_S1 + 0);
            *(b + 1026 * OS1_S1 + 1) = prefactor_x * *(b + 1026 * OS1_S1 + 0) - 
                p_over_q * *(b + 1197 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 873 * OS1_S1 + 0);
            *(b + 1026 * OS1_S1 + 2) = prefactor_y * *(b + 1026 * OS1_S1 + 0) - 
                p_over_q * *(b + 1208 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 863 * OS1_S1 + 0);
            *(b + 1026 * OS1_S1 + 3) = prefactor_z * *(b + 1026 * OS1_S1 + 0) - 
                p_over_q * *(b + 1209 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 862 * OS1_S1 + 0);
            *(b + 1027 * OS1_S1 + 1) = prefactor_x * *(b + 1027 * OS1_S1 + 0) - 
                p_over_q * *(b + 1198 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 874 * OS1_S1 + 0);
            *(b + 1027 * OS1_S1 + 2) = prefactor_y * *(b + 1027 * OS1_S1 + 0) - 
                p_over_q * *(b + 1209 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 864 * OS1_S1 + 0);
            *(b + 1027 * OS1_S1 + 3) = prefactor_z * *(b + 1027 * OS1_S1 + 0) - 
                p_over_q * *(b + 1210 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 863 * OS1_S1 + 0);
            *(b + 1028 * OS1_S1 + 1) = prefactor_x * *(b + 1028 * OS1_S1 + 0) - 
                p_over_q * *(b + 1199 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 875 * OS1_S1 + 0);
            *(b + 1028 * OS1_S1 + 2) = prefactor_y * *(b + 1028 * OS1_S1 + 0) - 
                p_over_q * *(b + 1210 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 865 * OS1_S1 + 0);
            *(b + 1028 * OS1_S1 + 3) = prefactor_z * *(b + 1028 * OS1_S1 + 0) - 
                p_over_q * *(b + 1211 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 864 * OS1_S1 + 0);
            *(b + 1029 * OS1_S1 + 1) = prefactor_x * *(b + 1029 * OS1_S1 + 0) - 
                p_over_q * *(b + 1200 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 876 * OS1_S1 + 0);
            *(b + 1029 * OS1_S1 + 2) = prefactor_y * *(b + 1029 * OS1_S1 + 0) - 
                p_over_q * *(b + 1211 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 866 * OS1_S1 + 0);
            *(b + 1029 * OS1_S1 + 3) = prefactor_z * *(b + 1029 * OS1_S1 + 0) - 
                p_over_q * *(b + 1212 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 865 * OS1_S1 + 0);
            *(b + 1030 * OS1_S1 + 1) = prefactor_x * *(b + 1030 * OS1_S1 + 0) - 
                p_over_q * *(b + 1201 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 877 * OS1_S1 + 0);
            *(b + 1030 * OS1_S1 + 2) = prefactor_y * *(b + 1030 * OS1_S1 + 0) - 
                p_over_q * *(b + 1212 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 867 * OS1_S1 + 0);
            *(b + 1030 * OS1_S1 + 3) = prefactor_z * *(b + 1030 * OS1_S1 + 0) - 
                p_over_q * *(b + 1213 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 866 * OS1_S1 + 0);
            *(b + 1031 * OS1_S1 + 1) = prefactor_x * *(b + 1031 * OS1_S1 + 0) - 
                p_over_q * *(b + 1202 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 878 * OS1_S1 + 0);
            *(b + 1031 * OS1_S1 + 2) = prefactor_y * *(b + 1031 * OS1_S1 + 0) - 
                p_over_q * *(b + 1213 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 868 * OS1_S1 + 0);
            *(b + 1031 * OS1_S1 + 3) = prefactor_z * *(b + 1031 * OS1_S1 + 0) - 
                p_over_q * *(b + 1214 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 867 * OS1_S1 + 0);
            *(b + 1032 * OS1_S1 + 1) = prefactor_x * *(b + 1032 * OS1_S1 + 0) - 
                p_over_q * *(b + 1203 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 879 * OS1_S1 + 0);
            *(b + 1032 * OS1_S1 + 2) = prefactor_y * *(b + 1032 * OS1_S1 + 0) - 
                p_over_q * *(b + 1214 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 869 * OS1_S1 + 0);
            *(b + 1032 * OS1_S1 + 3) = prefactor_z * *(b + 1032 * OS1_S1 + 0) - 
                p_over_q * *(b + 1215 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 868 * OS1_S1 + 0);
            *(b + 1033 * OS1_S1 + 1) = prefactor_x * *(b + 1033 * OS1_S1 + 0) - 
                p_over_q * *(b + 1204 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 880 * OS1_S1 + 0);
            *(b + 1033 * OS1_S1 + 2) = prefactor_y * *(b + 1033 * OS1_S1 + 0) - 
                p_over_q * *(b + 1215 * OS1_S1 + 0) +
                one_over_two_q * *(b + 870 * OS1_S1 + 0);
            *(b + 1033 * OS1_S1 + 3) = prefactor_z * *(b + 1033 * OS1_S1 + 0) - 
                p_over_q * *(b + 1216 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 869 * OS1_S1 + 0);
            *(b + 1034 * OS1_S1 + 1) = prefactor_x * *(b + 1034 * OS1_S1 + 0) - 
                p_over_q * *(b + 1205 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 881 * OS1_S1 + 0);
            *(b + 1034 * OS1_S1 + 2) = prefactor_y * *(b + 1034 * OS1_S1 + 0) - 
                p_over_q * *(b + 1216 * OS1_S1 + 0);
            *(b + 1034 * OS1_S1 + 3) = prefactor_z * *(b + 1034 * OS1_S1 + 0) - 
                p_over_q * *(b + 1217 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 870 * OS1_S1 + 0);
            *(b + 1035 * OS1_S1 + 1) = prefactor_x * *(b + 1035 * OS1_S1 + 0) - 
                p_over_q * *(b + 1206 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 882 * OS1_S1 + 0);
            *(b + 1035 * OS1_S1 + 2) = prefactor_y * *(b + 1035 * OS1_S1 + 0) - 
                p_over_q * *(b + 1218 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 871 * OS1_S1 + 0);
            *(b + 1035 * OS1_S1 + 3) = prefactor_z * *(b + 1035 * OS1_S1 + 0) - 
                p_over_q * *(b + 1219 * OS1_S1 + 0);
            *(b + 1036 * OS1_S1 + 1) = prefactor_x * *(b + 1036 * OS1_S1 + 0) - 
                p_over_q * *(b + 1207 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 883 * OS1_S1 + 0);
            *(b + 1036 * OS1_S1 + 2) = prefactor_y * *(b + 1036 * OS1_S1 + 0) - 
                p_over_q * *(b + 1219 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 872 * OS1_S1 + 0);
            *(b + 1036 * OS1_S1 + 3) = prefactor_z * *(b + 1036 * OS1_S1 + 0) - 
                p_over_q * *(b + 1220 * OS1_S1 + 0) +
                one_over_two_q * *(b + 871 * OS1_S1 + 0);
            *(b + 1037 * OS1_S1 + 1) = prefactor_x * *(b + 1037 * OS1_S1 + 0) - 
                p_over_q * *(b + 1208 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 884 * OS1_S1 + 0);
            *(b + 1037 * OS1_S1 + 2) = prefactor_y * *(b + 1037 * OS1_S1 + 0) - 
                p_over_q * *(b + 1220 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 873 * OS1_S1 + 0);
            *(b + 1037 * OS1_S1 + 3) = prefactor_z * *(b + 1037 * OS1_S1 + 0) - 
                p_over_q * *(b + 1221 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 872 * OS1_S1 + 0);
            *(b + 1038 * OS1_S1 + 1) = prefactor_x * *(b + 1038 * OS1_S1 + 0) - 
                p_over_q * *(b + 1209 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 885 * OS1_S1 + 0);
            *(b + 1038 * OS1_S1 + 2) = prefactor_y * *(b + 1038 * OS1_S1 + 0) - 
                p_over_q * *(b + 1221 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 874 * OS1_S1 + 0);
            *(b + 1038 * OS1_S1 + 3) = prefactor_z * *(b + 1038 * OS1_S1 + 0) - 
                p_over_q * *(b + 1222 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 873 * OS1_S1 + 0);
            *(b + 1039 * OS1_S1 + 1) = prefactor_x * *(b + 1039 * OS1_S1 + 0) - 
                p_over_q * *(b + 1210 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 886 * OS1_S1 + 0);
            *(b + 1039 * OS1_S1 + 2) = prefactor_y * *(b + 1039 * OS1_S1 + 0) - 
                p_over_q * *(b + 1222 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 875 * OS1_S1 + 0);
            *(b + 1039 * OS1_S1 + 3) = prefactor_z * *(b + 1039 * OS1_S1 + 0) - 
                p_over_q * *(b + 1223 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 874 * OS1_S1 + 0);
            *(b + 1040 * OS1_S1 + 1) = prefactor_x * *(b + 1040 * OS1_S1 + 0) - 
                p_over_q * *(b + 1211 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 887 * OS1_S1 + 0);
            *(b + 1040 * OS1_S1 + 2) = prefactor_y * *(b + 1040 * OS1_S1 + 0) - 
                p_over_q * *(b + 1223 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 876 * OS1_S1 + 0);
            *(b + 1040 * OS1_S1 + 3) = prefactor_z * *(b + 1040 * OS1_S1 + 0) - 
                p_over_q * *(b + 1224 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 875 * OS1_S1 + 0);
            *(b + 1041 * OS1_S1 + 1) = prefactor_x * *(b + 1041 * OS1_S1 + 0) - 
                p_over_q * *(b + 1212 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 888 * OS1_S1 + 0);
            *(b + 1041 * OS1_S1 + 2) = prefactor_y * *(b + 1041 * OS1_S1 + 0) - 
                p_over_q * *(b + 1224 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 877 * OS1_S1 + 0);
            *(b + 1041 * OS1_S1 + 3) = prefactor_z * *(b + 1041 * OS1_S1 + 0) - 
                p_over_q * *(b + 1225 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 876 * OS1_S1 + 0);
            *(b + 1042 * OS1_S1 + 1) = prefactor_x * *(b + 1042 * OS1_S1 + 0) - 
                p_over_q * *(b + 1213 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 889 * OS1_S1 + 0);
            *(b + 1042 * OS1_S1 + 2) = prefactor_y * *(b + 1042 * OS1_S1 + 0) - 
                p_over_q * *(b + 1225 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 878 * OS1_S1 + 0);
            *(b + 1042 * OS1_S1 + 3) = prefactor_z * *(b + 1042 * OS1_S1 + 0) - 
                p_over_q * *(b + 1226 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 877 * OS1_S1 + 0);
            *(b + 1043 * OS1_S1 + 1) = prefactor_x * *(b + 1043 * OS1_S1 + 0) - 
                p_over_q * *(b + 1214 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 890 * OS1_S1 + 0);
            *(b + 1043 * OS1_S1 + 2) = prefactor_y * *(b + 1043 * OS1_S1 + 0) - 
                p_over_q * *(b + 1226 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 879 * OS1_S1 + 0);
            *(b + 1043 * OS1_S1 + 3) = prefactor_z * *(b + 1043 * OS1_S1 + 0) - 
                p_over_q * *(b + 1227 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 878 * OS1_S1 + 0);
            *(b + 1044 * OS1_S1 + 1) = prefactor_x * *(b + 1044 * OS1_S1 + 0) - 
                p_over_q * *(b + 1215 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 891 * OS1_S1 + 0);
            *(b + 1044 * OS1_S1 + 2) = prefactor_y * *(b + 1044 * OS1_S1 + 0) - 
                p_over_q * *(b + 1227 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 880 * OS1_S1 + 0);
            *(b + 1044 * OS1_S1 + 3) = prefactor_z * *(b + 1044 * OS1_S1 + 0) - 
                p_over_q * *(b + 1228 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 879 * OS1_S1 + 0);
            *(b + 1045 * OS1_S1 + 1) = prefactor_x * *(b + 1045 * OS1_S1 + 0) - 
                p_over_q * *(b + 1216 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 892 * OS1_S1 + 0);
            *(b + 1045 * OS1_S1 + 2) = prefactor_y * *(b + 1045 * OS1_S1 + 0) - 
                p_over_q * *(b + 1228 * OS1_S1 + 0) +
                one_over_two_q * *(b + 881 * OS1_S1 + 0);
            *(b + 1045 * OS1_S1 + 3) = prefactor_z * *(b + 1045 * OS1_S1 + 0) - 
                p_over_q * *(b + 1229 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 880 * OS1_S1 + 0);
            *(b + 1046 * OS1_S1 + 1) = prefactor_x * *(b + 1046 * OS1_S1 + 0) - 
                p_over_q * *(b + 1217 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 893 * OS1_S1 + 0);
            *(b + 1046 * OS1_S1 + 2) = prefactor_y * *(b + 1046 * OS1_S1 + 0) - 
                p_over_q * *(b + 1229 * OS1_S1 + 0);
            *(b + 1046 * OS1_S1 + 3) = prefactor_z * *(b + 1046 * OS1_S1 + 0) - 
                p_over_q * *(b + 1230 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 881 * OS1_S1 + 0);
            *(b + 1047 * OS1_S1 + 1) = prefactor_x * *(b + 1047 * OS1_S1 + 0) - 
                p_over_q * *(b + 1218 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 894 * OS1_S1 + 0);
            *(b + 1047 * OS1_S1 + 2) = prefactor_y * *(b + 1047 * OS1_S1 + 0) - 
                p_over_q * *(b + 1231 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 882 * OS1_S1 + 0);
            *(b + 1047 * OS1_S1 + 3) = prefactor_z * *(b + 1047 * OS1_S1 + 0) - 
                p_over_q * *(b + 1232 * OS1_S1 + 0);
            *(b + 1048 * OS1_S1 + 1) = prefactor_x * *(b + 1048 * OS1_S1 + 0) - 
                p_over_q * *(b + 1219 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 895 * OS1_S1 + 0);
            *(b + 1048 * OS1_S1 + 2) = prefactor_y * *(b + 1048 * OS1_S1 + 0) - 
                p_over_q * *(b + 1232 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 883 * OS1_S1 + 0);
            *(b + 1048 * OS1_S1 + 3) = prefactor_z * *(b + 1048 * OS1_S1 + 0) - 
                p_over_q * *(b + 1233 * OS1_S1 + 0) +
                one_over_two_q * *(b + 882 * OS1_S1 + 0);
            *(b + 1049 * OS1_S1 + 1) = prefactor_x * *(b + 1049 * OS1_S1 + 0) - 
                p_over_q * *(b + 1220 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 896 * OS1_S1 + 0);
            *(b + 1049 * OS1_S1 + 2) = prefactor_y * *(b + 1049 * OS1_S1 + 0) - 
                p_over_q * *(b + 1233 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 884 * OS1_S1 + 0);
            *(b + 1049 * OS1_S1 + 3) = prefactor_z * *(b + 1049 * OS1_S1 + 0) - 
                p_over_q * *(b + 1234 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 883 * OS1_S1 + 0);
            *(b + 1050 * OS1_S1 + 1) = prefactor_x * *(b + 1050 * OS1_S1 + 0) - 
                p_over_q * *(b + 1221 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 897 * OS1_S1 + 0);
            *(b + 1050 * OS1_S1 + 2) = prefactor_y * *(b + 1050 * OS1_S1 + 0) - 
                p_over_q * *(b + 1234 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 885 * OS1_S1 + 0);
            *(b + 1050 * OS1_S1 + 3) = prefactor_z * *(b + 1050 * OS1_S1 + 0) - 
                p_over_q * *(b + 1235 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 884 * OS1_S1 + 0);
            *(b + 1051 * OS1_S1 + 1) = prefactor_x * *(b + 1051 * OS1_S1 + 0) - 
                p_over_q * *(b + 1222 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 898 * OS1_S1 + 0);
            *(b + 1051 * OS1_S1 + 2) = prefactor_y * *(b + 1051 * OS1_S1 + 0) - 
                p_over_q * *(b + 1235 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 886 * OS1_S1 + 0);
            *(b + 1051 * OS1_S1 + 3) = prefactor_z * *(b + 1051 * OS1_S1 + 0) - 
                p_over_q * *(b + 1236 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 885 * OS1_S1 + 0);
            *(b + 1052 * OS1_S1 + 1) = prefactor_x * *(b + 1052 * OS1_S1 + 0) - 
                p_over_q * *(b + 1223 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 899 * OS1_S1 + 0);
            *(b + 1052 * OS1_S1 + 2) = prefactor_y * *(b + 1052 * OS1_S1 + 0) - 
                p_over_q * *(b + 1236 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 887 * OS1_S1 + 0);
            *(b + 1052 * OS1_S1 + 3) = prefactor_z * *(b + 1052 * OS1_S1 + 0) - 
                p_over_q * *(b + 1237 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 886 * OS1_S1 + 0);
            *(b + 1053 * OS1_S1 + 1) = prefactor_x * *(b + 1053 * OS1_S1 + 0) - 
                p_over_q * *(b + 1224 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 900 * OS1_S1 + 0);
            *(b + 1053 * OS1_S1 + 2) = prefactor_y * *(b + 1053 * OS1_S1 + 0) - 
                p_over_q * *(b + 1237 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 888 * OS1_S1 + 0);
            *(b + 1053 * OS1_S1 + 3) = prefactor_z * *(b + 1053 * OS1_S1 + 0) - 
                p_over_q * *(b + 1238 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 887 * OS1_S1 + 0);
            *(b + 1054 * OS1_S1 + 1) = prefactor_x * *(b + 1054 * OS1_S1 + 0) - 
                p_over_q * *(b + 1225 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 901 * OS1_S1 + 0);
            *(b + 1054 * OS1_S1 + 2) = prefactor_y * *(b + 1054 * OS1_S1 + 0) - 
                p_over_q * *(b + 1238 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 889 * OS1_S1 + 0);
            *(b + 1054 * OS1_S1 + 3) = prefactor_z * *(b + 1054 * OS1_S1 + 0) - 
                p_over_q * *(b + 1239 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 888 * OS1_S1 + 0);
            *(b + 1055 * OS1_S1 + 1) = prefactor_x * *(b + 1055 * OS1_S1 + 0) - 
                p_over_q * *(b + 1226 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 902 * OS1_S1 + 0);
            *(b + 1055 * OS1_S1 + 2) = prefactor_y * *(b + 1055 * OS1_S1 + 0) - 
                p_over_q * *(b + 1239 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 890 * OS1_S1 + 0);
            *(b + 1055 * OS1_S1 + 3) = prefactor_z * *(b + 1055 * OS1_S1 + 0) - 
                p_over_q * *(b + 1240 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 889 * OS1_S1 + 0);
            *(b + 1056 * OS1_S1 + 1) = prefactor_x * *(b + 1056 * OS1_S1 + 0) - 
                p_over_q * *(b + 1227 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 903 * OS1_S1 + 0);
            *(b + 1056 * OS1_S1 + 2) = prefactor_y * *(b + 1056 * OS1_S1 + 0) - 
                p_over_q * *(b + 1240 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 891 * OS1_S1 + 0);
            *(b + 1056 * OS1_S1 + 3) = prefactor_z * *(b + 1056 * OS1_S1 + 0) - 
                p_over_q * *(b + 1241 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 890 * OS1_S1 + 0);
            *(b + 1057 * OS1_S1 + 1) = prefactor_x * *(b + 1057 * OS1_S1 + 0) - 
                p_over_q * *(b + 1228 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 904 * OS1_S1 + 0);
            *(b + 1057 * OS1_S1 + 2) = prefactor_y * *(b + 1057 * OS1_S1 + 0) - 
                p_over_q * *(b + 1241 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 892 * OS1_S1 + 0);
            *(b + 1057 * OS1_S1 + 3) = prefactor_z * *(b + 1057 * OS1_S1 + 0) - 
                p_over_q * *(b + 1242 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 891 * OS1_S1 + 0);
            *(b + 1058 * OS1_S1 + 1) = prefactor_x * *(b + 1058 * OS1_S1 + 0) - 
                p_over_q * *(b + 1229 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 905 * OS1_S1 + 0);
            *(b + 1058 * OS1_S1 + 2) = prefactor_y * *(b + 1058 * OS1_S1 + 0) - 
                p_over_q * *(b + 1242 * OS1_S1 + 0) +
                one_over_two_q * *(b + 893 * OS1_S1 + 0);
            *(b + 1058 * OS1_S1 + 3) = prefactor_z * *(b + 1058 * OS1_S1 + 0) - 
                p_over_q * *(b + 1243 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 892 * OS1_S1 + 0);
            *(b + 1059 * OS1_S1 + 1) = prefactor_x * *(b + 1059 * OS1_S1 + 0) - 
                p_over_q * *(b + 1230 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 906 * OS1_S1 + 0);
            *(b + 1059 * OS1_S1 + 2) = prefactor_y * *(b + 1059 * OS1_S1 + 0) - 
                p_over_q * *(b + 1243 * OS1_S1 + 0);
            *(b + 1059 * OS1_S1 + 3) = prefactor_z * *(b + 1059 * OS1_S1 + 0) - 
                p_over_q * *(b + 1244 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 893 * OS1_S1 + 0);
            *(b + 1060 * OS1_S1 + 1) = prefactor_x * *(b + 1060 * OS1_S1 + 0) - 
                p_over_q * *(b + 1231 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 907 * OS1_S1 + 0);
            *(b + 1060 * OS1_S1 + 2) = prefactor_y * *(b + 1060 * OS1_S1 + 0) - 
                p_over_q * *(b + 1245 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 894 * OS1_S1 + 0);
            *(b + 1060 * OS1_S1 + 3) = prefactor_z * *(b + 1060 * OS1_S1 + 0) - 
                p_over_q * *(b + 1246 * OS1_S1 + 0);
            *(b + 1061 * OS1_S1 + 1) = prefactor_x * *(b + 1061 * OS1_S1 + 0) - 
                p_over_q * *(b + 1232 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 908 * OS1_S1 + 0);
            *(b + 1061 * OS1_S1 + 2) = prefactor_y * *(b + 1061 * OS1_S1 + 0) - 
                p_over_q * *(b + 1246 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 895 * OS1_S1 + 0);
            *(b + 1061 * OS1_S1 + 3) = prefactor_z * *(b + 1061 * OS1_S1 + 0) - 
                p_over_q * *(b + 1247 * OS1_S1 + 0) +
                one_over_two_q * *(b + 894 * OS1_S1 + 0);
            *(b + 1062 * OS1_S1 + 1) = prefactor_x * *(b + 1062 * OS1_S1 + 0) - 
                p_over_q * *(b + 1233 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 909 * OS1_S1 + 0);
            *(b + 1062 * OS1_S1 + 2) = prefactor_y * *(b + 1062 * OS1_S1 + 0) - 
                p_over_q * *(b + 1247 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 896 * OS1_S1 + 0);
            *(b + 1062 * OS1_S1 + 3) = prefactor_z * *(b + 1062 * OS1_S1 + 0) - 
                p_over_q * *(b + 1248 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 895 * OS1_S1 + 0);
            *(b + 1063 * OS1_S1 + 1) = prefactor_x * *(b + 1063 * OS1_S1 + 0) - 
                p_over_q * *(b + 1234 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 910 * OS1_S1 + 0);
            *(b + 1063 * OS1_S1 + 2) = prefactor_y * *(b + 1063 * OS1_S1 + 0) - 
                p_over_q * *(b + 1248 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 897 * OS1_S1 + 0);
            *(b + 1063 * OS1_S1 + 3) = prefactor_z * *(b + 1063 * OS1_S1 + 0) - 
                p_over_q * *(b + 1249 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 896 * OS1_S1 + 0);
            *(b + 1064 * OS1_S1 + 1) = prefactor_x * *(b + 1064 * OS1_S1 + 0) - 
                p_over_q * *(b + 1235 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 911 * OS1_S1 + 0);
            *(b + 1064 * OS1_S1 + 2) = prefactor_y * *(b + 1064 * OS1_S1 + 0) - 
                p_over_q * *(b + 1249 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 898 * OS1_S1 + 0);
            *(b + 1064 * OS1_S1 + 3) = prefactor_z * *(b + 1064 * OS1_S1 + 0) - 
                p_over_q * *(b + 1250 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 897 * OS1_S1 + 0);
            *(b + 1065 * OS1_S1 + 1) = prefactor_x * *(b + 1065 * OS1_S1 + 0) - 
                p_over_q * *(b + 1236 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 912 * OS1_S1 + 0);
            *(b + 1065 * OS1_S1 + 2) = prefactor_y * *(b + 1065 * OS1_S1 + 0) - 
                p_over_q * *(b + 1250 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 899 * OS1_S1 + 0);
            *(b + 1065 * OS1_S1 + 3) = prefactor_z * *(b + 1065 * OS1_S1 + 0) - 
                p_over_q * *(b + 1251 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 898 * OS1_S1 + 0);
            *(b + 1066 * OS1_S1 + 1) = prefactor_x * *(b + 1066 * OS1_S1 + 0) - 
                p_over_q * *(b + 1237 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 913 * OS1_S1 + 0);
            *(b + 1066 * OS1_S1 + 2) = prefactor_y * *(b + 1066 * OS1_S1 + 0) - 
                p_over_q * *(b + 1251 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 900 * OS1_S1 + 0);
            *(b + 1066 * OS1_S1 + 3) = prefactor_z * *(b + 1066 * OS1_S1 + 0) - 
                p_over_q * *(b + 1252 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 899 * OS1_S1 + 0);
            *(b + 1067 * OS1_S1 + 1) = prefactor_x * *(b + 1067 * OS1_S1 + 0) - 
                p_over_q * *(b + 1238 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 914 * OS1_S1 + 0);
            *(b + 1067 * OS1_S1 + 2) = prefactor_y * *(b + 1067 * OS1_S1 + 0) - 
                p_over_q * *(b + 1252 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 901 * OS1_S1 + 0);
            *(b + 1067 * OS1_S1 + 3) = prefactor_z * *(b + 1067 * OS1_S1 + 0) - 
                p_over_q * *(b + 1253 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 900 * OS1_S1 + 0);
            *(b + 1068 * OS1_S1 + 1) = prefactor_x * *(b + 1068 * OS1_S1 + 0) - 
                p_over_q * *(b + 1239 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 915 * OS1_S1 + 0);
            *(b + 1068 * OS1_S1 + 2) = prefactor_y * *(b + 1068 * OS1_S1 + 0) - 
                p_over_q * *(b + 1253 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 902 * OS1_S1 + 0);
            *(b + 1068 * OS1_S1 + 3) = prefactor_z * *(b + 1068 * OS1_S1 + 0) - 
                p_over_q * *(b + 1254 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 901 * OS1_S1 + 0);
            *(b + 1069 * OS1_S1 + 1) = prefactor_x * *(b + 1069 * OS1_S1 + 0) - 
                p_over_q * *(b + 1240 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 916 * OS1_S1 + 0);
            *(b + 1069 * OS1_S1 + 2) = prefactor_y * *(b + 1069 * OS1_S1 + 0) - 
                p_over_q * *(b + 1254 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 903 * OS1_S1 + 0);
            *(b + 1069 * OS1_S1 + 3) = prefactor_z * *(b + 1069 * OS1_S1 + 0) - 
                p_over_q * *(b + 1255 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 902 * OS1_S1 + 0);
            *(b + 1070 * OS1_S1 + 1) = prefactor_x * *(b + 1070 * OS1_S1 + 0) - 
                p_over_q * *(b + 1241 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 917 * OS1_S1 + 0);
            *(b + 1070 * OS1_S1 + 2) = prefactor_y * *(b + 1070 * OS1_S1 + 0) - 
                p_over_q * *(b + 1255 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 904 * OS1_S1 + 0);
            *(b + 1070 * OS1_S1 + 3) = prefactor_z * *(b + 1070 * OS1_S1 + 0) - 
                p_over_q * *(b + 1256 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 903 * OS1_S1 + 0);
            *(b + 1071 * OS1_S1 + 1) = prefactor_x * *(b + 1071 * OS1_S1 + 0) - 
                p_over_q * *(b + 1242 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 918 * OS1_S1 + 0);
            *(b + 1071 * OS1_S1 + 2) = prefactor_y * *(b + 1071 * OS1_S1 + 0) - 
                p_over_q * *(b + 1256 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 905 * OS1_S1 + 0);
            *(b + 1071 * OS1_S1 + 3) = prefactor_z * *(b + 1071 * OS1_S1 + 0) - 
                p_over_q * *(b + 1257 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 904 * OS1_S1 + 0);
            *(b + 1072 * OS1_S1 + 1) = prefactor_x * *(b + 1072 * OS1_S1 + 0) - 
                p_over_q * *(b + 1243 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 919 * OS1_S1 + 0);
            *(b + 1072 * OS1_S1 + 2) = prefactor_y * *(b + 1072 * OS1_S1 + 0) - 
                p_over_q * *(b + 1257 * OS1_S1 + 0) +
                one_over_two_q * *(b + 906 * OS1_S1 + 0);
            *(b + 1072 * OS1_S1 + 3) = prefactor_z * *(b + 1072 * OS1_S1 + 0) - 
                p_over_q * *(b + 1258 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 905 * OS1_S1 + 0);
            *(b + 1073 * OS1_S1 + 1) = prefactor_x * *(b + 1073 * OS1_S1 + 0) - 
                p_over_q * *(b + 1244 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 920 * OS1_S1 + 0);
            *(b + 1073 * OS1_S1 + 2) = prefactor_y * *(b + 1073 * OS1_S1 + 0) - 
                p_over_q * *(b + 1258 * OS1_S1 + 0);
            *(b + 1073 * OS1_S1 + 3) = prefactor_z * *(b + 1073 * OS1_S1 + 0) - 
                p_over_q * *(b + 1259 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 906 * OS1_S1 + 0);
            *(b + 1074 * OS1_S1 + 1) = prefactor_x * *(b + 1074 * OS1_S1 + 0) - 
                p_over_q * *(b + 1245 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 921 * OS1_S1 + 0);
            *(b + 1074 * OS1_S1 + 2) = prefactor_y * *(b + 1074 * OS1_S1 + 0) - 
                p_over_q * *(b + 1260 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 907 * OS1_S1 + 0);
            *(b + 1074 * OS1_S1 + 3) = prefactor_z * *(b + 1074 * OS1_S1 + 0) - 
                p_over_q * *(b + 1261 * OS1_S1 + 0);
            *(b + 1075 * OS1_S1 + 1) = prefactor_x * *(b + 1075 * OS1_S1 + 0) - 
                p_over_q * *(b + 1246 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 922 * OS1_S1 + 0);
            *(b + 1075 * OS1_S1 + 2) = prefactor_y * *(b + 1075 * OS1_S1 + 0) - 
                p_over_q * *(b + 1261 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 908 * OS1_S1 + 0);
            *(b + 1075 * OS1_S1 + 3) = prefactor_z * *(b + 1075 * OS1_S1 + 0) - 
                p_over_q * *(b + 1262 * OS1_S1 + 0) +
                one_over_two_q * *(b + 907 * OS1_S1 + 0);
            *(b + 1076 * OS1_S1 + 1) = prefactor_x * *(b + 1076 * OS1_S1 + 0) - 
                p_over_q * *(b + 1247 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 923 * OS1_S1 + 0);
            *(b + 1076 * OS1_S1 + 2) = prefactor_y * *(b + 1076 * OS1_S1 + 0) - 
                p_over_q * *(b + 1262 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 909 * OS1_S1 + 0);
            *(b + 1076 * OS1_S1 + 3) = prefactor_z * *(b + 1076 * OS1_S1 + 0) - 
                p_over_q * *(b + 1263 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 908 * OS1_S1 + 0);
            *(b + 1077 * OS1_S1 + 1) = prefactor_x * *(b + 1077 * OS1_S1 + 0) - 
                p_over_q * *(b + 1248 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 924 * OS1_S1 + 0);
            *(b + 1077 * OS1_S1 + 2) = prefactor_y * *(b + 1077 * OS1_S1 + 0) - 
                p_over_q * *(b + 1263 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 910 * OS1_S1 + 0);
            *(b + 1077 * OS1_S1 + 3) = prefactor_z * *(b + 1077 * OS1_S1 + 0) - 
                p_over_q * *(b + 1264 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 909 * OS1_S1 + 0);
            *(b + 1078 * OS1_S1 + 1) = prefactor_x * *(b + 1078 * OS1_S1 + 0) - 
                p_over_q * *(b + 1249 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 925 * OS1_S1 + 0);
            *(b + 1078 * OS1_S1 + 2) = prefactor_y * *(b + 1078 * OS1_S1 + 0) - 
                p_over_q * *(b + 1264 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 911 * OS1_S1 + 0);
            *(b + 1078 * OS1_S1 + 3) = prefactor_z * *(b + 1078 * OS1_S1 + 0) - 
                p_over_q * *(b + 1265 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 910 * OS1_S1 + 0);
            *(b + 1079 * OS1_S1 + 1) = prefactor_x * *(b + 1079 * OS1_S1 + 0) - 
                p_over_q * *(b + 1250 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 926 * OS1_S1 + 0);
            *(b + 1079 * OS1_S1 + 2) = prefactor_y * *(b + 1079 * OS1_S1 + 0) - 
                p_over_q * *(b + 1265 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 912 * OS1_S1 + 0);
            *(b + 1079 * OS1_S1 + 3) = prefactor_z * *(b + 1079 * OS1_S1 + 0) - 
                p_over_q * *(b + 1266 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 911 * OS1_S1 + 0);
            *(b + 1080 * OS1_S1 + 1) = prefactor_x * *(b + 1080 * OS1_S1 + 0) - 
                p_over_q * *(b + 1251 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 927 * OS1_S1 + 0);
            *(b + 1080 * OS1_S1 + 2) = prefactor_y * *(b + 1080 * OS1_S1 + 0) - 
                p_over_q * *(b + 1266 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 913 * OS1_S1 + 0);
            *(b + 1080 * OS1_S1 + 3) = prefactor_z * *(b + 1080 * OS1_S1 + 0) - 
                p_over_q * *(b + 1267 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 912 * OS1_S1 + 0);
            *(b + 1081 * OS1_S1 + 1) = prefactor_x * *(b + 1081 * OS1_S1 + 0) - 
                p_over_q * *(b + 1252 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 928 * OS1_S1 + 0);
            *(b + 1081 * OS1_S1 + 2) = prefactor_y * *(b + 1081 * OS1_S1 + 0) - 
                p_over_q * *(b + 1267 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 914 * OS1_S1 + 0);
            *(b + 1081 * OS1_S1 + 3) = prefactor_z * *(b + 1081 * OS1_S1 + 0) - 
                p_over_q * *(b + 1268 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 913 * OS1_S1 + 0);
            *(b + 1082 * OS1_S1 + 1) = prefactor_x * *(b + 1082 * OS1_S1 + 0) - 
                p_over_q * *(b + 1253 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 929 * OS1_S1 + 0);
            *(b + 1082 * OS1_S1 + 2) = prefactor_y * *(b + 1082 * OS1_S1 + 0) - 
                p_over_q * *(b + 1268 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 915 * OS1_S1 + 0);
            *(b + 1082 * OS1_S1 + 3) = prefactor_z * *(b + 1082 * OS1_S1 + 0) - 
                p_over_q * *(b + 1269 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 914 * OS1_S1 + 0);
            *(b + 1083 * OS1_S1 + 1) = prefactor_x * *(b + 1083 * OS1_S1 + 0) - 
                p_over_q * *(b + 1254 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 930 * OS1_S1 + 0);
            *(b + 1083 * OS1_S1 + 2) = prefactor_y * *(b + 1083 * OS1_S1 + 0) - 
                p_over_q * *(b + 1269 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 916 * OS1_S1 + 0);
            *(b + 1083 * OS1_S1 + 3) = prefactor_z * *(b + 1083 * OS1_S1 + 0) - 
                p_over_q * *(b + 1270 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 915 * OS1_S1 + 0);
            *(b + 1084 * OS1_S1 + 1) = prefactor_x * *(b + 1084 * OS1_S1 + 0) - 
                p_over_q * *(b + 1255 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 931 * OS1_S1 + 0);
            *(b + 1084 * OS1_S1 + 2) = prefactor_y * *(b + 1084 * OS1_S1 + 0) - 
                p_over_q * *(b + 1270 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 917 * OS1_S1 + 0);
            *(b + 1084 * OS1_S1 + 3) = prefactor_z * *(b + 1084 * OS1_S1 + 0) - 
                p_over_q * *(b + 1271 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 916 * OS1_S1 + 0);
            *(b + 1085 * OS1_S1 + 1) = prefactor_x * *(b + 1085 * OS1_S1 + 0) - 
                p_over_q * *(b + 1256 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 932 * OS1_S1 + 0);
            *(b + 1085 * OS1_S1 + 2) = prefactor_y * *(b + 1085 * OS1_S1 + 0) - 
                p_over_q * *(b + 1271 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 918 * OS1_S1 + 0);
            *(b + 1085 * OS1_S1 + 3) = prefactor_z * *(b + 1085 * OS1_S1 + 0) - 
                p_over_q * *(b + 1272 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 917 * OS1_S1 + 0);
            *(b + 1086 * OS1_S1 + 1) = prefactor_x * *(b + 1086 * OS1_S1 + 0) - 
                p_over_q * *(b + 1257 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 933 * OS1_S1 + 0);
            *(b + 1086 * OS1_S1 + 2) = prefactor_y * *(b + 1086 * OS1_S1 + 0) - 
                p_over_q * *(b + 1272 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 919 * OS1_S1 + 0);
            *(b + 1086 * OS1_S1 + 3) = prefactor_z * *(b + 1086 * OS1_S1 + 0) - 
                p_over_q * *(b + 1273 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 918 * OS1_S1 + 0);
            *(b + 1087 * OS1_S1 + 1) = prefactor_x * *(b + 1087 * OS1_S1 + 0) - 
                p_over_q * *(b + 1258 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 934 * OS1_S1 + 0);
            *(b + 1087 * OS1_S1 + 2) = prefactor_y * *(b + 1087 * OS1_S1 + 0) - 
                p_over_q * *(b + 1273 * OS1_S1 + 0) +
                one_over_two_q * *(b + 920 * OS1_S1 + 0);
            *(b + 1087 * OS1_S1 + 3) = prefactor_z * *(b + 1087 * OS1_S1 + 0) - 
                p_over_q * *(b + 1274 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 919 * OS1_S1 + 0);
            *(b + 1088 * OS1_S1 + 1) = prefactor_x * *(b + 1088 * OS1_S1 + 0) - 
                p_over_q * *(b + 1259 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 935 * OS1_S1 + 0);
            *(b + 1088 * OS1_S1 + 2) = prefactor_y * *(b + 1088 * OS1_S1 + 0) - 
                p_over_q * *(b + 1274 * OS1_S1 + 0);
            *(b + 1088 * OS1_S1 + 3) = prefactor_z * *(b + 1088 * OS1_S1 + 0) - 
                p_over_q * *(b + 1275 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 920 * OS1_S1 + 0);
            *(b + 1089 * OS1_S1 + 1) = prefactor_x * *(b + 1089 * OS1_S1 + 0) - 
                p_over_q * *(b + 1260 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 936 * OS1_S1 + 0);
            *(b + 1089 * OS1_S1 + 2) = prefactor_y * *(b + 1089 * OS1_S1 + 0) - 
                p_over_q * *(b + 1276 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 921 * OS1_S1 + 0);
            *(b + 1089 * OS1_S1 + 3) = prefactor_z * *(b + 1089 * OS1_S1 + 0) - 
                p_over_q * *(b + 1277 * OS1_S1 + 0);
            *(b + 1090 * OS1_S1 + 1) = prefactor_x * *(b + 1090 * OS1_S1 + 0) - 
                p_over_q * *(b + 1261 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 937 * OS1_S1 + 0);
            *(b + 1090 * OS1_S1 + 2) = prefactor_y * *(b + 1090 * OS1_S1 + 0) - 
                p_over_q * *(b + 1277 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 922 * OS1_S1 + 0);
            *(b + 1090 * OS1_S1 + 3) = prefactor_z * *(b + 1090 * OS1_S1 + 0) - 
                p_over_q * *(b + 1278 * OS1_S1 + 0) +
                one_over_two_q * *(b + 921 * OS1_S1 + 0);
            *(b + 1091 * OS1_S1 + 1) = prefactor_x * *(b + 1091 * OS1_S1 + 0) - 
                p_over_q * *(b + 1262 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 938 * OS1_S1 + 0);
            *(b + 1091 * OS1_S1 + 2) = prefactor_y * *(b + 1091 * OS1_S1 + 0) - 
                p_over_q * *(b + 1278 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 923 * OS1_S1 + 0);
            *(b + 1091 * OS1_S1 + 3) = prefactor_z * *(b + 1091 * OS1_S1 + 0) - 
                p_over_q * *(b + 1279 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 922 * OS1_S1 + 0);
            *(b + 1092 * OS1_S1 + 1) = prefactor_x * *(b + 1092 * OS1_S1 + 0) - 
                p_over_q * *(b + 1263 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 939 * OS1_S1 + 0);
            *(b + 1092 * OS1_S1 + 2) = prefactor_y * *(b + 1092 * OS1_S1 + 0) - 
                p_over_q * *(b + 1279 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 924 * OS1_S1 + 0);
            *(b + 1092 * OS1_S1 + 3) = prefactor_z * *(b + 1092 * OS1_S1 + 0) - 
                p_over_q * *(b + 1280 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 923 * OS1_S1 + 0);
            *(b + 1093 * OS1_S1 + 1) = prefactor_x * *(b + 1093 * OS1_S1 + 0) - 
                p_over_q * *(b + 1264 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 940 * OS1_S1 + 0);
            *(b + 1093 * OS1_S1 + 2) = prefactor_y * *(b + 1093 * OS1_S1 + 0) - 
                p_over_q * *(b + 1280 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 925 * OS1_S1 + 0);
            *(b + 1093 * OS1_S1 + 3) = prefactor_z * *(b + 1093 * OS1_S1 + 0) - 
                p_over_q * *(b + 1281 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 924 * OS1_S1 + 0);
            *(b + 1094 * OS1_S1 + 1) = prefactor_x * *(b + 1094 * OS1_S1 + 0) - 
                p_over_q * *(b + 1265 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 941 * OS1_S1 + 0);
            *(b + 1094 * OS1_S1 + 2) = prefactor_y * *(b + 1094 * OS1_S1 + 0) - 
                p_over_q * *(b + 1281 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 926 * OS1_S1 + 0);
            *(b + 1094 * OS1_S1 + 3) = prefactor_z * *(b + 1094 * OS1_S1 + 0) - 
                p_over_q * *(b + 1282 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 925 * OS1_S1 + 0);
            *(b + 1095 * OS1_S1 + 1) = prefactor_x * *(b + 1095 * OS1_S1 + 0) - 
                p_over_q * *(b + 1266 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 942 * OS1_S1 + 0);
            *(b + 1095 * OS1_S1 + 2) = prefactor_y * *(b + 1095 * OS1_S1 + 0) - 
                p_over_q * *(b + 1282 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 927 * OS1_S1 + 0);
            *(b + 1095 * OS1_S1 + 3) = prefactor_z * *(b + 1095 * OS1_S1 + 0) - 
                p_over_q * *(b + 1283 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 926 * OS1_S1 + 0);
            *(b + 1096 * OS1_S1 + 1) = prefactor_x * *(b + 1096 * OS1_S1 + 0) - 
                p_over_q * *(b + 1267 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 943 * OS1_S1 + 0);
            *(b + 1096 * OS1_S1 + 2) = prefactor_y * *(b + 1096 * OS1_S1 + 0) - 
                p_over_q * *(b + 1283 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 928 * OS1_S1 + 0);
            *(b + 1096 * OS1_S1 + 3) = prefactor_z * *(b + 1096 * OS1_S1 + 0) - 
                p_over_q * *(b + 1284 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 927 * OS1_S1 + 0);
            *(b + 1097 * OS1_S1 + 1) = prefactor_x * *(b + 1097 * OS1_S1 + 0) - 
                p_over_q * *(b + 1268 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 944 * OS1_S1 + 0);
            *(b + 1097 * OS1_S1 + 2) = prefactor_y * *(b + 1097 * OS1_S1 + 0) - 
                p_over_q * *(b + 1284 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 929 * OS1_S1 + 0);
            *(b + 1097 * OS1_S1 + 3) = prefactor_z * *(b + 1097 * OS1_S1 + 0) - 
                p_over_q * *(b + 1285 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 928 * OS1_S1 + 0);
            *(b + 1098 * OS1_S1 + 1) = prefactor_x * *(b + 1098 * OS1_S1 + 0) - 
                p_over_q * *(b + 1269 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 945 * OS1_S1 + 0);
            *(b + 1098 * OS1_S1 + 2) = prefactor_y * *(b + 1098 * OS1_S1 + 0) - 
                p_over_q * *(b + 1285 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 930 * OS1_S1 + 0);
            *(b + 1098 * OS1_S1 + 3) = prefactor_z * *(b + 1098 * OS1_S1 + 0) - 
                p_over_q * *(b + 1286 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 929 * OS1_S1 + 0);
            *(b + 1099 * OS1_S1 + 1) = prefactor_x * *(b + 1099 * OS1_S1 + 0) - 
                p_over_q * *(b + 1270 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 946 * OS1_S1 + 0);
            *(b + 1099 * OS1_S1 + 2) = prefactor_y * *(b + 1099 * OS1_S1 + 0) - 
                p_over_q * *(b + 1286 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 931 * OS1_S1 + 0);
            *(b + 1099 * OS1_S1 + 3) = prefactor_z * *(b + 1099 * OS1_S1 + 0) - 
                p_over_q * *(b + 1287 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 930 * OS1_S1 + 0);
            *(b + 1100 * OS1_S1 + 1) = prefactor_x * *(b + 1100 * OS1_S1 + 0) - 
                p_over_q * *(b + 1271 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 947 * OS1_S1 + 0);
            *(b + 1100 * OS1_S1 + 2) = prefactor_y * *(b + 1100 * OS1_S1 + 0) - 
                p_over_q * *(b + 1287 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 932 * OS1_S1 + 0);
            *(b + 1100 * OS1_S1 + 3) = prefactor_z * *(b + 1100 * OS1_S1 + 0) - 
                p_over_q * *(b + 1288 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 931 * OS1_S1 + 0);
            *(b + 1101 * OS1_S1 + 1) = prefactor_x * *(b + 1101 * OS1_S1 + 0) - 
                p_over_q * *(b + 1272 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 948 * OS1_S1 + 0);
            *(b + 1101 * OS1_S1 + 2) = prefactor_y * *(b + 1101 * OS1_S1 + 0) - 
                p_over_q * *(b + 1288 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 933 * OS1_S1 + 0);
            *(b + 1101 * OS1_S1 + 3) = prefactor_z * *(b + 1101 * OS1_S1 + 0) - 
                p_over_q * *(b + 1289 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 932 * OS1_S1 + 0);
            *(b + 1102 * OS1_S1 + 1) = prefactor_x * *(b + 1102 * OS1_S1 + 0) - 
                p_over_q * *(b + 1273 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 949 * OS1_S1 + 0);
            *(b + 1102 * OS1_S1 + 2) = prefactor_y * *(b + 1102 * OS1_S1 + 0) - 
                p_over_q * *(b + 1289 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 934 * OS1_S1 + 0);
            *(b + 1102 * OS1_S1 + 3) = prefactor_z * *(b + 1102 * OS1_S1 + 0) - 
                p_over_q * *(b + 1290 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 933 * OS1_S1 + 0);
            *(b + 1103 * OS1_S1 + 1) = prefactor_x * *(b + 1103 * OS1_S1 + 0) - 
                p_over_q * *(b + 1274 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 950 * OS1_S1 + 0);
            *(b + 1103 * OS1_S1 + 2) = prefactor_y * *(b + 1103 * OS1_S1 + 0) - 
                p_over_q * *(b + 1290 * OS1_S1 + 0) +
                one_over_two_q * *(b + 935 * OS1_S1 + 0);
            *(b + 1103 * OS1_S1 + 3) = prefactor_z * *(b + 1103 * OS1_S1 + 0) - 
                p_over_q * *(b + 1291 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 934 * OS1_S1 + 0);
            *(b + 1104 * OS1_S1 + 1) = prefactor_x * *(b + 1104 * OS1_S1 + 0) - 
                p_over_q * *(b + 1275 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 951 * OS1_S1 + 0);
            *(b + 1104 * OS1_S1 + 2) = prefactor_y * *(b + 1104 * OS1_S1 + 0) - 
                p_over_q * *(b + 1291 * OS1_S1 + 0);
            *(b + 1104 * OS1_S1 + 3) = prefactor_z * *(b + 1104 * OS1_S1 + 0) - 
                p_over_q * *(b + 1292 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 935 * OS1_S1 + 0);
            *(b + 1105 * OS1_S1 + 1) = prefactor_x * *(b + 1105 * OS1_S1 + 0) - 
                p_over_q * *(b + 1276 * OS1_S1 + 0) +
                one_over_two_q * *(b + 952 * OS1_S1 + 0);
            *(b + 1105 * OS1_S1 + 2) = prefactor_y * *(b + 1105 * OS1_S1 + 0) - 
                p_over_q * *(b + 1293 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 936 * OS1_S1 + 0);
            *(b + 1105 * OS1_S1 + 3) = prefactor_z * *(b + 1105 * OS1_S1 + 0) - 
                p_over_q * *(b + 1294 * OS1_S1 + 0);
            *(b + 1106 * OS1_S1 + 1) = prefactor_x * *(b + 1106 * OS1_S1 + 0) - 
                p_over_q * *(b + 1277 * OS1_S1 + 0) +
                one_over_two_q * *(b + 953 * OS1_S1 + 0);
            *(b + 1106 * OS1_S1 + 2) = prefactor_y * *(b + 1106 * OS1_S1 + 0) - 
                p_over_q * *(b + 1294 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 937 * OS1_S1 + 0);
            *(b + 1106 * OS1_S1 + 3) = prefactor_z * *(b + 1106 * OS1_S1 + 0) - 
                p_over_q * *(b + 1295 * OS1_S1 + 0) +
                one_over_two_q * *(b + 936 * OS1_S1 + 0);
            *(b + 1107 * OS1_S1 + 1) = prefactor_x * *(b + 1107 * OS1_S1 + 0) - 
                p_over_q * *(b + 1278 * OS1_S1 + 0) +
                one_over_two_q * *(b + 954 * OS1_S1 + 0);
            *(b + 1107 * OS1_S1 + 2) = prefactor_y * *(b + 1107 * OS1_S1 + 0) - 
                p_over_q * *(b + 1295 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 938 * OS1_S1 + 0);
            *(b + 1107 * OS1_S1 + 3) = prefactor_z * *(b + 1107 * OS1_S1 + 0) - 
                p_over_q * *(b + 1296 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 937 * OS1_S1 + 0);
            *(b + 1108 * OS1_S1 + 1) = prefactor_x * *(b + 1108 * OS1_S1 + 0) - 
                p_over_q * *(b + 1279 * OS1_S1 + 0) +
                one_over_two_q * *(b + 955 * OS1_S1 + 0);
            *(b + 1108 * OS1_S1 + 2) = prefactor_y * *(b + 1108 * OS1_S1 + 0) - 
                p_over_q * *(b + 1296 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 939 * OS1_S1 + 0);
            *(b + 1108 * OS1_S1 + 3) = prefactor_z * *(b + 1108 * OS1_S1 + 0) - 
                p_over_q * *(b + 1297 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 938 * OS1_S1 + 0);
            *(b + 1109 * OS1_S1 + 1) = prefactor_x * *(b + 1109 * OS1_S1 + 0) - 
                p_over_q * *(b + 1280 * OS1_S1 + 0) +
                one_over_two_q * *(b + 956 * OS1_S1 + 0);
            *(b + 1109 * OS1_S1 + 2) = prefactor_y * *(b + 1109 * OS1_S1 + 0) - 
                p_over_q * *(b + 1297 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 940 * OS1_S1 + 0);
            *(b + 1109 * OS1_S1 + 3) = prefactor_z * *(b + 1109 * OS1_S1 + 0) - 
                p_over_q * *(b + 1298 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 939 * OS1_S1 + 0);
            *(b + 1110 * OS1_S1 + 1) = prefactor_x * *(b + 1110 * OS1_S1 + 0) - 
                p_over_q * *(b + 1281 * OS1_S1 + 0) +
                one_over_two_q * *(b + 957 * OS1_S1 + 0);
            *(b + 1110 * OS1_S1 + 2) = prefactor_y * *(b + 1110 * OS1_S1 + 0) - 
                p_over_q * *(b + 1298 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 941 * OS1_S1 + 0);
            *(b + 1110 * OS1_S1 + 3) = prefactor_z * *(b + 1110 * OS1_S1 + 0) - 
                p_over_q * *(b + 1299 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 940 * OS1_S1 + 0);
            *(b + 1111 * OS1_S1 + 1) = prefactor_x * *(b + 1111 * OS1_S1 + 0) - 
                p_over_q * *(b + 1282 * OS1_S1 + 0) +
                one_over_two_q * *(b + 958 * OS1_S1 + 0);
            *(b + 1111 * OS1_S1 + 2) = prefactor_y * *(b + 1111 * OS1_S1 + 0) - 
                p_over_q * *(b + 1299 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 942 * OS1_S1 + 0);
            *(b + 1111 * OS1_S1 + 3) = prefactor_z * *(b + 1111 * OS1_S1 + 0) - 
                p_over_q * *(b + 1300 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 941 * OS1_S1 + 0);
            *(b + 1112 * OS1_S1 + 1) = prefactor_x * *(b + 1112 * OS1_S1 + 0) - 
                p_over_q * *(b + 1283 * OS1_S1 + 0) +
                one_over_two_q * *(b + 959 * OS1_S1 + 0);
            *(b + 1112 * OS1_S1 + 2) = prefactor_y * *(b + 1112 * OS1_S1 + 0) - 
                p_over_q * *(b + 1300 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 943 * OS1_S1 + 0);
            *(b + 1112 * OS1_S1 + 3) = prefactor_z * *(b + 1112 * OS1_S1 + 0) - 
                p_over_q * *(b + 1301 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 942 * OS1_S1 + 0);
            *(b + 1113 * OS1_S1 + 1) = prefactor_x * *(b + 1113 * OS1_S1 + 0) - 
                p_over_q * *(b + 1284 * OS1_S1 + 0) +
                one_over_two_q * *(b + 960 * OS1_S1 + 0);
            *(b + 1113 * OS1_S1 + 2) = prefactor_y * *(b + 1113 * OS1_S1 + 0) - 
                p_over_q * *(b + 1301 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 944 * OS1_S1 + 0);
            *(b + 1113 * OS1_S1 + 3) = prefactor_z * *(b + 1113 * OS1_S1 + 0) - 
                p_over_q * *(b + 1302 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 943 * OS1_S1 + 0);
            *(b + 1114 * OS1_S1 + 1) = prefactor_x * *(b + 1114 * OS1_S1 + 0) - 
                p_over_q * *(b + 1285 * OS1_S1 + 0) +
                one_over_two_q * *(b + 961 * OS1_S1 + 0);
            *(b + 1114 * OS1_S1 + 2) = prefactor_y * *(b + 1114 * OS1_S1 + 0) - 
                p_over_q * *(b + 1302 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 945 * OS1_S1 + 0);
            *(b + 1114 * OS1_S1 + 3) = prefactor_z * *(b + 1114 * OS1_S1 + 0) - 
                p_over_q * *(b + 1303 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 944 * OS1_S1 + 0);
            *(b + 1115 * OS1_S1 + 1) = prefactor_x * *(b + 1115 * OS1_S1 + 0) - 
                p_over_q * *(b + 1286 * OS1_S1 + 0) +
                one_over_two_q * *(b + 962 * OS1_S1 + 0);
            *(b + 1115 * OS1_S1 + 2) = prefactor_y * *(b + 1115 * OS1_S1 + 0) - 
                p_over_q * *(b + 1303 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 946 * OS1_S1 + 0);
            *(b + 1115 * OS1_S1 + 3) = prefactor_z * *(b + 1115 * OS1_S1 + 0) - 
                p_over_q * *(b + 1304 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 945 * OS1_S1 + 0);
            *(b + 1116 * OS1_S1 + 1) = prefactor_x * *(b + 1116 * OS1_S1 + 0) - 
                p_over_q * *(b + 1287 * OS1_S1 + 0) +
                one_over_two_q * *(b + 963 * OS1_S1 + 0);
            *(b + 1116 * OS1_S1 + 2) = prefactor_y * *(b + 1116 * OS1_S1 + 0) - 
                p_over_q * *(b + 1304 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 947 * OS1_S1 + 0);
            *(b + 1116 * OS1_S1 + 3) = prefactor_z * *(b + 1116 * OS1_S1 + 0) - 
                p_over_q * *(b + 1305 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 946 * OS1_S1 + 0);
            *(b + 1117 * OS1_S1 + 1) = prefactor_x * *(b + 1117 * OS1_S1 + 0) - 
                p_over_q * *(b + 1288 * OS1_S1 + 0) +
                one_over_two_q * *(b + 964 * OS1_S1 + 0);
            *(b + 1117 * OS1_S1 + 2) = prefactor_y * *(b + 1117 * OS1_S1 + 0) - 
                p_over_q * *(b + 1305 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 948 * OS1_S1 + 0);
            *(b + 1117 * OS1_S1 + 3) = prefactor_z * *(b + 1117 * OS1_S1 + 0) - 
                p_over_q * *(b + 1306 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 947 * OS1_S1 + 0);
            *(b + 1118 * OS1_S1 + 1) = prefactor_x * *(b + 1118 * OS1_S1 + 0) - 
                p_over_q * *(b + 1289 * OS1_S1 + 0) +
                one_over_two_q * *(b + 965 * OS1_S1 + 0);
            *(b + 1118 * OS1_S1 + 2) = prefactor_y * *(b + 1118 * OS1_S1 + 0) - 
                p_over_q * *(b + 1306 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 949 * OS1_S1 + 0);
            *(b + 1118 * OS1_S1 + 3) = prefactor_z * *(b + 1118 * OS1_S1 + 0) - 
                p_over_q * *(b + 1307 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 948 * OS1_S1 + 0);
            *(b + 1119 * OS1_S1 + 1) = prefactor_x * *(b + 1119 * OS1_S1 + 0) - 
                p_over_q * *(b + 1290 * OS1_S1 + 0) +
                one_over_two_q * *(b + 966 * OS1_S1 + 0);
            *(b + 1119 * OS1_S1 + 2) = prefactor_y * *(b + 1119 * OS1_S1 + 0) - 
                p_over_q * *(b + 1307 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 950 * OS1_S1 + 0);
            *(b + 1119 * OS1_S1 + 3) = prefactor_z * *(b + 1119 * OS1_S1 + 0) - 
                p_over_q * *(b + 1308 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 949 * OS1_S1 + 0);
            *(b + 1120 * OS1_S1 + 1) = prefactor_x * *(b + 1120 * OS1_S1 + 0) - 
                p_over_q * *(b + 1291 * OS1_S1 + 0) +
                one_over_two_q * *(b + 967 * OS1_S1 + 0);
            *(b + 1120 * OS1_S1 + 2) = prefactor_y * *(b + 1120 * OS1_S1 + 0) - 
                p_over_q * *(b + 1308 * OS1_S1 + 0) +
                one_over_two_q * *(b + 951 * OS1_S1 + 0);
            *(b + 1120 * OS1_S1 + 3) = prefactor_z * *(b + 1120 * OS1_S1 + 0) - 
                p_over_q * *(b + 1309 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 950 * OS1_S1 + 0);
            *(b + 1121 * OS1_S1 + 1) = prefactor_x * *(b + 1121 * OS1_S1 + 0) - 
                p_over_q * *(b + 1292 * OS1_S1 + 0) +
                one_over_two_q * *(b + 968 * OS1_S1 + 0);
            *(b + 1121 * OS1_S1 + 2) = prefactor_y * *(b + 1121 * OS1_S1 + 0) - 
                p_over_q * *(b + 1309 * OS1_S1 + 0);
            *(b + 1121 * OS1_S1 + 3) = prefactor_z * *(b + 1121 * OS1_S1 + 0) - 
                p_over_q * *(b + 1310 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 951 * OS1_S1 + 0);
            *(b + 1122 * OS1_S1 + 1) = prefactor_x * *(b + 1122 * OS1_S1 + 0) - 
                p_over_q * *(b + 1293 * OS1_S1 + 0);
            *(b + 1122 * OS1_S1 + 2) = prefactor_y * *(b + 1122 * OS1_S1 + 0) - 
                p_over_q * *(b + 1311 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 952 * OS1_S1 + 0);
            *(b + 1122 * OS1_S1 + 3) = prefactor_z * *(b + 1122 * OS1_S1 + 0) - 
                p_over_q * *(b + 1312 * OS1_S1 + 0);
            *(b + 1123 * OS1_S1 + 1) = prefactor_x * *(b + 1123 * OS1_S1 + 0) - 
                p_over_q * *(b + 1294 * OS1_S1 + 0);
            *(b + 1123 * OS1_S1 + 2) = prefactor_y * *(b + 1123 * OS1_S1 + 0) - 
                p_over_q * *(b + 1312 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 953 * OS1_S1 + 0);
            *(b + 1123 * OS1_S1 + 3) = prefactor_z * *(b + 1123 * OS1_S1 + 0) - 
                p_over_q * *(b + 1313 * OS1_S1 + 0) +
                one_over_two_q * *(b + 952 * OS1_S1 + 0);
            *(b + 1124 * OS1_S1 + 1) = prefactor_x * *(b + 1124 * OS1_S1 + 0) - 
                p_over_q * *(b + 1295 * OS1_S1 + 0);
            *(b + 1124 * OS1_S1 + 2) = prefactor_y * *(b + 1124 * OS1_S1 + 0) - 
                p_over_q * *(b + 1313 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 954 * OS1_S1 + 0);
            *(b + 1124 * OS1_S1 + 3) = prefactor_z * *(b + 1124 * OS1_S1 + 0) - 
                p_over_q * *(b + 1314 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 953 * OS1_S1 + 0);
            *(b + 1125 * OS1_S1 + 1) = prefactor_x * *(b + 1125 * OS1_S1 + 0) - 
                p_over_q * *(b + 1296 * OS1_S1 + 0);
            *(b + 1125 * OS1_S1 + 2) = prefactor_y * *(b + 1125 * OS1_S1 + 0) - 
                p_over_q * *(b + 1314 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 955 * OS1_S1 + 0);
            *(b + 1125 * OS1_S1 + 3) = prefactor_z * *(b + 1125 * OS1_S1 + 0) - 
                p_over_q * *(b + 1315 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 954 * OS1_S1 + 0);
            *(b + 1126 * OS1_S1 + 1) = prefactor_x * *(b + 1126 * OS1_S1 + 0) - 
                p_over_q * *(b + 1297 * OS1_S1 + 0);
            *(b + 1126 * OS1_S1 + 2) = prefactor_y * *(b + 1126 * OS1_S1 + 0) - 
                p_over_q * *(b + 1315 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 956 * OS1_S1 + 0);
            *(b + 1126 * OS1_S1 + 3) = prefactor_z * *(b + 1126 * OS1_S1 + 0) - 
                p_over_q * *(b + 1316 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 955 * OS1_S1 + 0);
            *(b + 1127 * OS1_S1 + 1) = prefactor_x * *(b + 1127 * OS1_S1 + 0) - 
                p_over_q * *(b + 1298 * OS1_S1 + 0);
            *(b + 1127 * OS1_S1 + 2) = prefactor_y * *(b + 1127 * OS1_S1 + 0) - 
                p_over_q * *(b + 1316 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 957 * OS1_S1 + 0);
            *(b + 1127 * OS1_S1 + 3) = prefactor_z * *(b + 1127 * OS1_S1 + 0) - 
                p_over_q * *(b + 1317 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 956 * OS1_S1 + 0);
            *(b + 1128 * OS1_S1 + 1) = prefactor_x * *(b + 1128 * OS1_S1 + 0) - 
                p_over_q * *(b + 1299 * OS1_S1 + 0);
            *(b + 1128 * OS1_S1 + 2) = prefactor_y * *(b + 1128 * OS1_S1 + 0) - 
                p_over_q * *(b + 1317 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 958 * OS1_S1 + 0);
            *(b + 1128 * OS1_S1 + 3) = prefactor_z * *(b + 1128 * OS1_S1 + 0) - 
                p_over_q * *(b + 1318 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 957 * OS1_S1 + 0);
            *(b + 1129 * OS1_S1 + 1) = prefactor_x * *(b + 1129 * OS1_S1 + 0) - 
                p_over_q * *(b + 1300 * OS1_S1 + 0);
            *(b + 1129 * OS1_S1 + 2) = prefactor_y * *(b + 1129 * OS1_S1 + 0) - 
                p_over_q * *(b + 1318 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 959 * OS1_S1 + 0);
            *(b + 1129 * OS1_S1 + 3) = prefactor_z * *(b + 1129 * OS1_S1 + 0) - 
                p_over_q * *(b + 1319 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 958 * OS1_S1 + 0);
            *(b + 1130 * OS1_S1 + 1) = prefactor_x * *(b + 1130 * OS1_S1 + 0) - 
                p_over_q * *(b + 1301 * OS1_S1 + 0);
            *(b + 1130 * OS1_S1 + 2) = prefactor_y * *(b + 1130 * OS1_S1 + 0) - 
                p_over_q * *(b + 1319 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 960 * OS1_S1 + 0);
            *(b + 1130 * OS1_S1 + 3) = prefactor_z * *(b + 1130 * OS1_S1 + 0) - 
                p_over_q * *(b + 1320 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 959 * OS1_S1 + 0);
            *(b + 1131 * OS1_S1 + 1) = prefactor_x * *(b + 1131 * OS1_S1 + 0) - 
                p_over_q * *(b + 1302 * OS1_S1 + 0);
            *(b + 1131 * OS1_S1 + 2) = prefactor_y * *(b + 1131 * OS1_S1 + 0) - 
                p_over_q * *(b + 1320 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 961 * OS1_S1 + 0);
            *(b + 1131 * OS1_S1 + 3) = prefactor_z * *(b + 1131 * OS1_S1 + 0) - 
                p_over_q * *(b + 1321 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 960 * OS1_S1 + 0);
            *(b + 1132 * OS1_S1 + 1) = prefactor_x * *(b + 1132 * OS1_S1 + 0) - 
                p_over_q * *(b + 1303 * OS1_S1 + 0);
            *(b + 1132 * OS1_S1 + 2) = prefactor_y * *(b + 1132 * OS1_S1 + 0) - 
                p_over_q * *(b + 1321 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 962 * OS1_S1 + 0);
            *(b + 1132 * OS1_S1 + 3) = prefactor_z * *(b + 1132 * OS1_S1 + 0) - 
                p_over_q * *(b + 1322 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 961 * OS1_S1 + 0);
            *(b + 1133 * OS1_S1 + 1) = prefactor_x * *(b + 1133 * OS1_S1 + 0) - 
                p_over_q * *(b + 1304 * OS1_S1 + 0);
            *(b + 1133 * OS1_S1 + 2) = prefactor_y * *(b + 1133 * OS1_S1 + 0) - 
                p_over_q * *(b + 1322 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 963 * OS1_S1 + 0);
            *(b + 1133 * OS1_S1 + 3) = prefactor_z * *(b + 1133 * OS1_S1 + 0) - 
                p_over_q * *(b + 1323 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 962 * OS1_S1 + 0);
            *(b + 1134 * OS1_S1 + 1) = prefactor_x * *(b + 1134 * OS1_S1 + 0) - 
                p_over_q * *(b + 1305 * OS1_S1 + 0);
            *(b + 1134 * OS1_S1 + 2) = prefactor_y * *(b + 1134 * OS1_S1 + 0) - 
                p_over_q * *(b + 1323 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 964 * OS1_S1 + 0);
            *(b + 1134 * OS1_S1 + 3) = prefactor_z * *(b + 1134 * OS1_S1 + 0) - 
                p_over_q * *(b + 1324 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 963 * OS1_S1 + 0);
            *(b + 1135 * OS1_S1 + 1) = prefactor_x * *(b + 1135 * OS1_S1 + 0) - 
                p_over_q * *(b + 1306 * OS1_S1 + 0);
            *(b + 1135 * OS1_S1 + 2) = prefactor_y * *(b + 1135 * OS1_S1 + 0) - 
                p_over_q * *(b + 1324 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 965 * OS1_S1 + 0);
            *(b + 1135 * OS1_S1 + 3) = prefactor_z * *(b + 1135 * OS1_S1 + 0) - 
                p_over_q * *(b + 1325 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 964 * OS1_S1 + 0);
            *(b + 1136 * OS1_S1 + 1) = prefactor_x * *(b + 1136 * OS1_S1 + 0) - 
                p_over_q * *(b + 1307 * OS1_S1 + 0);
            *(b + 1136 * OS1_S1 + 2) = prefactor_y * *(b + 1136 * OS1_S1 + 0) - 
                p_over_q * *(b + 1325 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 966 * OS1_S1 + 0);
            *(b + 1136 * OS1_S1 + 3) = prefactor_z * *(b + 1136 * OS1_S1 + 0) - 
                p_over_q * *(b + 1326 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 965 * OS1_S1 + 0);
            *(b + 1137 * OS1_S1 + 1) = prefactor_x * *(b + 1137 * OS1_S1 + 0) - 
                p_over_q * *(b + 1308 * OS1_S1 + 0);
            *(b + 1137 * OS1_S1 + 2) = prefactor_y * *(b + 1137 * OS1_S1 + 0) - 
                p_over_q * *(b + 1326 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 967 * OS1_S1 + 0);
            *(b + 1137 * OS1_S1 + 3) = prefactor_z * *(b + 1137 * OS1_S1 + 0) - 
                p_over_q * *(b + 1327 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 966 * OS1_S1 + 0);
            *(b + 1138 * OS1_S1 + 1) = prefactor_x * *(b + 1138 * OS1_S1 + 0) - 
                p_over_q * *(b + 1309 * OS1_S1 + 0);
            *(b + 1138 * OS1_S1 + 2) = prefactor_y * *(b + 1138 * OS1_S1 + 0) - 
                p_over_q * *(b + 1327 * OS1_S1 + 0) +
                one_over_two_q * *(b + 968 * OS1_S1 + 0);
            *(b + 1138 * OS1_S1 + 3) = prefactor_z * *(b + 1138 * OS1_S1 + 0) - 
                p_over_q * *(b + 1328 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 967 * OS1_S1 + 0);
            *(b + 1139 * OS1_S1 + 1) = prefactor_x * *(b + 1139 * OS1_S1 + 0) - 
                p_over_q * *(b + 1310 * OS1_S1 + 0);
            *(b + 1139 * OS1_S1 + 2) = prefactor_y * *(b + 1139 * OS1_S1 + 0) - 
                p_over_q * *(b + 1328 * OS1_S1 + 0);
            *(b + 1139 * OS1_S1 + 3) = prefactor_z * *(b + 1139 * OS1_S1 + 0) - 
                p_over_q * *(b + 1329 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 968 * OS1_S1 + 0);
            return;
        }
        void transfer_18_1(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 1140 * OS1_S1 + 1) = prefactor_x * *(b + 1140 * OS1_S1 + 0) - 
                p_over_q * *(b + 1330 * OS1_S1 + 0) +
                18 * one_over_two_q * *(b + 969 * OS1_S1 + 0);
            *(b + 1140 * OS1_S1 + 2) = prefactor_y * *(b + 1140 * OS1_S1 + 0) - 
                p_over_q * *(b + 1331 * OS1_S1 + 0);
            *(b + 1140 * OS1_S1 + 3) = prefactor_z * *(b + 1140 * OS1_S1 + 0) - 
                p_over_q * *(b + 1332 * OS1_S1 + 0);
            *(b + 1141 * OS1_S1 + 1) = prefactor_x * *(b + 1141 * OS1_S1 + 0) - 
                p_over_q * *(b + 1331 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 970 * OS1_S1 + 0);
            *(b + 1141 * OS1_S1 + 2) = prefactor_y * *(b + 1141 * OS1_S1 + 0) - 
                p_over_q * *(b + 1333 * OS1_S1 + 0) +
                one_over_two_q * *(b + 969 * OS1_S1 + 0);
            *(b + 1141 * OS1_S1 + 3) = prefactor_z * *(b + 1141 * OS1_S1 + 0) - 
                p_over_q * *(b + 1334 * OS1_S1 + 0);
            *(b + 1142 * OS1_S1 + 1) = prefactor_x * *(b + 1142 * OS1_S1 + 0) - 
                p_over_q * *(b + 1332 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 971 * OS1_S1 + 0);
            *(b + 1142 * OS1_S1 + 2) = prefactor_y * *(b + 1142 * OS1_S1 + 0) - 
                p_over_q * *(b + 1334 * OS1_S1 + 0);
            *(b + 1142 * OS1_S1 + 3) = prefactor_z * *(b + 1142 * OS1_S1 + 0) - 
                p_over_q * *(b + 1335 * OS1_S1 + 0) +
                one_over_two_q * *(b + 969 * OS1_S1 + 0);
            *(b + 1143 * OS1_S1 + 1) = prefactor_x * *(b + 1143 * OS1_S1 + 0) - 
                p_over_q * *(b + 1333 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 972 * OS1_S1 + 0);
            *(b + 1143 * OS1_S1 + 2) = prefactor_y * *(b + 1143 * OS1_S1 + 0) - 
                p_over_q * *(b + 1336 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 970 * OS1_S1 + 0);
            *(b + 1143 * OS1_S1 + 3) = prefactor_z * *(b + 1143 * OS1_S1 + 0) - 
                p_over_q * *(b + 1337 * OS1_S1 + 0);
            *(b + 1144 * OS1_S1 + 1) = prefactor_x * *(b + 1144 * OS1_S1 + 0) - 
                p_over_q * *(b + 1334 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 973 * OS1_S1 + 0);
            *(b + 1144 * OS1_S1 + 2) = prefactor_y * *(b + 1144 * OS1_S1 + 0) - 
                p_over_q * *(b + 1337 * OS1_S1 + 0) +
                one_over_two_q * *(b + 971 * OS1_S1 + 0);
            *(b + 1144 * OS1_S1 + 3) = prefactor_z * *(b + 1144 * OS1_S1 + 0) - 
                p_over_q * *(b + 1338 * OS1_S1 + 0) +
                one_over_two_q * *(b + 970 * OS1_S1 + 0);
            *(b + 1145 * OS1_S1 + 1) = prefactor_x * *(b + 1145 * OS1_S1 + 0) - 
                p_over_q * *(b + 1335 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 974 * OS1_S1 + 0);
            *(b + 1145 * OS1_S1 + 2) = prefactor_y * *(b + 1145 * OS1_S1 + 0) - 
                p_over_q * *(b + 1338 * OS1_S1 + 0);
            *(b + 1145 * OS1_S1 + 3) = prefactor_z * *(b + 1145 * OS1_S1 + 0) - 
                p_over_q * *(b + 1339 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 971 * OS1_S1 + 0);
            *(b + 1146 * OS1_S1 + 1) = prefactor_x * *(b + 1146 * OS1_S1 + 0) - 
                p_over_q * *(b + 1336 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 975 * OS1_S1 + 0);
            *(b + 1146 * OS1_S1 + 2) = prefactor_y * *(b + 1146 * OS1_S1 + 0) - 
                p_over_q * *(b + 1340 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 972 * OS1_S1 + 0);
            *(b + 1146 * OS1_S1 + 3) = prefactor_z * *(b + 1146 * OS1_S1 + 0) - 
                p_over_q * *(b + 1341 * OS1_S1 + 0);
            *(b + 1147 * OS1_S1 + 1) = prefactor_x * *(b + 1147 * OS1_S1 + 0) - 
                p_over_q * *(b + 1337 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 976 * OS1_S1 + 0);
            *(b + 1147 * OS1_S1 + 2) = prefactor_y * *(b + 1147 * OS1_S1 + 0) - 
                p_over_q * *(b + 1341 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 973 * OS1_S1 + 0);
            *(b + 1147 * OS1_S1 + 3) = prefactor_z * *(b + 1147 * OS1_S1 + 0) - 
                p_over_q * *(b + 1342 * OS1_S1 + 0) +
                one_over_two_q * *(b + 972 * OS1_S1 + 0);
            *(b + 1148 * OS1_S1 + 1) = prefactor_x * *(b + 1148 * OS1_S1 + 0) - 
                p_over_q * *(b + 1338 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 977 * OS1_S1 + 0);
            *(b + 1148 * OS1_S1 + 2) = prefactor_y * *(b + 1148 * OS1_S1 + 0) - 
                p_over_q * *(b + 1342 * OS1_S1 + 0) +
                one_over_two_q * *(b + 974 * OS1_S1 + 0);
            *(b + 1148 * OS1_S1 + 3) = prefactor_z * *(b + 1148 * OS1_S1 + 0) - 
                p_over_q * *(b + 1343 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 973 * OS1_S1 + 0);
            *(b + 1149 * OS1_S1 + 1) = prefactor_x * *(b + 1149 * OS1_S1 + 0) - 
                p_over_q * *(b + 1339 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 978 * OS1_S1 + 0);
            *(b + 1149 * OS1_S1 + 2) = prefactor_y * *(b + 1149 * OS1_S1 + 0) - 
                p_over_q * *(b + 1343 * OS1_S1 + 0);
            *(b + 1149 * OS1_S1 + 3) = prefactor_z * *(b + 1149 * OS1_S1 + 0) - 
                p_over_q * *(b + 1344 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 974 * OS1_S1 + 0);
            *(b + 1150 * OS1_S1 + 1) = prefactor_x * *(b + 1150 * OS1_S1 + 0) - 
                p_over_q * *(b + 1340 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 979 * OS1_S1 + 0);
            *(b + 1150 * OS1_S1 + 2) = prefactor_y * *(b + 1150 * OS1_S1 + 0) - 
                p_over_q * *(b + 1345 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 975 * OS1_S1 + 0);
            *(b + 1150 * OS1_S1 + 3) = prefactor_z * *(b + 1150 * OS1_S1 + 0) - 
                p_over_q * *(b + 1346 * OS1_S1 + 0);
            *(b + 1151 * OS1_S1 + 1) = prefactor_x * *(b + 1151 * OS1_S1 + 0) - 
                p_over_q * *(b + 1341 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 980 * OS1_S1 + 0);
            *(b + 1151 * OS1_S1 + 2) = prefactor_y * *(b + 1151 * OS1_S1 + 0) - 
                p_over_q * *(b + 1346 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 976 * OS1_S1 + 0);
            *(b + 1151 * OS1_S1 + 3) = prefactor_z * *(b + 1151 * OS1_S1 + 0) - 
                p_over_q * *(b + 1347 * OS1_S1 + 0) +
                one_over_two_q * *(b + 975 * OS1_S1 + 0);
            *(b + 1152 * OS1_S1 + 1) = prefactor_x * *(b + 1152 * OS1_S1 + 0) - 
                p_over_q * *(b + 1342 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 981 * OS1_S1 + 0);
            *(b + 1152 * OS1_S1 + 2) = prefactor_y * *(b + 1152 * OS1_S1 + 0) - 
                p_over_q * *(b + 1347 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 977 * OS1_S1 + 0);
            *(b + 1152 * OS1_S1 + 3) = prefactor_z * *(b + 1152 * OS1_S1 + 0) - 
                p_over_q * *(b + 1348 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 976 * OS1_S1 + 0);
            *(b + 1153 * OS1_S1 + 1) = prefactor_x * *(b + 1153 * OS1_S1 + 0) - 
                p_over_q * *(b + 1343 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 982 * OS1_S1 + 0);
            *(b + 1153 * OS1_S1 + 2) = prefactor_y * *(b + 1153 * OS1_S1 + 0) - 
                p_over_q * *(b + 1348 * OS1_S1 + 0) +
                one_over_two_q * *(b + 978 * OS1_S1 + 0);
            *(b + 1153 * OS1_S1 + 3) = prefactor_z * *(b + 1153 * OS1_S1 + 0) - 
                p_over_q * *(b + 1349 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 977 * OS1_S1 + 0);
            *(b + 1154 * OS1_S1 + 1) = prefactor_x * *(b + 1154 * OS1_S1 + 0) - 
                p_over_q * *(b + 1344 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 983 * OS1_S1 + 0);
            *(b + 1154 * OS1_S1 + 2) = prefactor_y * *(b + 1154 * OS1_S1 + 0) - 
                p_over_q * *(b + 1349 * OS1_S1 + 0);
            *(b + 1154 * OS1_S1 + 3) = prefactor_z * *(b + 1154 * OS1_S1 + 0) - 
                p_over_q * *(b + 1350 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 978 * OS1_S1 + 0);
            *(b + 1155 * OS1_S1 + 1) = prefactor_x * *(b + 1155 * OS1_S1 + 0) - 
                p_over_q * *(b + 1345 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 984 * OS1_S1 + 0);
            *(b + 1155 * OS1_S1 + 2) = prefactor_y * *(b + 1155 * OS1_S1 + 0) - 
                p_over_q * *(b + 1351 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 979 * OS1_S1 + 0);
            *(b + 1155 * OS1_S1 + 3) = prefactor_z * *(b + 1155 * OS1_S1 + 0) - 
                p_over_q * *(b + 1352 * OS1_S1 + 0);
            *(b + 1156 * OS1_S1 + 1) = prefactor_x * *(b + 1156 * OS1_S1 + 0) - 
                p_over_q * *(b + 1346 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 985 * OS1_S1 + 0);
            *(b + 1156 * OS1_S1 + 2) = prefactor_y * *(b + 1156 * OS1_S1 + 0) - 
                p_over_q * *(b + 1352 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 980 * OS1_S1 + 0);
            *(b + 1156 * OS1_S1 + 3) = prefactor_z * *(b + 1156 * OS1_S1 + 0) - 
                p_over_q * *(b + 1353 * OS1_S1 + 0) +
                one_over_two_q * *(b + 979 * OS1_S1 + 0);
            *(b + 1157 * OS1_S1 + 1) = prefactor_x * *(b + 1157 * OS1_S1 + 0) - 
                p_over_q * *(b + 1347 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 986 * OS1_S1 + 0);
            *(b + 1157 * OS1_S1 + 2) = prefactor_y * *(b + 1157 * OS1_S1 + 0) - 
                p_over_q * *(b + 1353 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 981 * OS1_S1 + 0);
            *(b + 1157 * OS1_S1 + 3) = prefactor_z * *(b + 1157 * OS1_S1 + 0) - 
                p_over_q * *(b + 1354 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 980 * OS1_S1 + 0);
            *(b + 1158 * OS1_S1 + 1) = prefactor_x * *(b + 1158 * OS1_S1 + 0) - 
                p_over_q * *(b + 1348 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 987 * OS1_S1 + 0);
            *(b + 1158 * OS1_S1 + 2) = prefactor_y * *(b + 1158 * OS1_S1 + 0) - 
                p_over_q * *(b + 1354 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 982 * OS1_S1 + 0);
            *(b + 1158 * OS1_S1 + 3) = prefactor_z * *(b + 1158 * OS1_S1 + 0) - 
                p_over_q * *(b + 1355 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 981 * OS1_S1 + 0);
            *(b + 1159 * OS1_S1 + 1) = prefactor_x * *(b + 1159 * OS1_S1 + 0) - 
                p_over_q * *(b + 1349 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 988 * OS1_S1 + 0);
            *(b + 1159 * OS1_S1 + 2) = prefactor_y * *(b + 1159 * OS1_S1 + 0) - 
                p_over_q * *(b + 1355 * OS1_S1 + 0) +
                one_over_two_q * *(b + 983 * OS1_S1 + 0);
            *(b + 1159 * OS1_S1 + 3) = prefactor_z * *(b + 1159 * OS1_S1 + 0) - 
                p_over_q * *(b + 1356 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 982 * OS1_S1 + 0);
            *(b + 1160 * OS1_S1 + 1) = prefactor_x * *(b + 1160 * OS1_S1 + 0) - 
                p_over_q * *(b + 1350 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 989 * OS1_S1 + 0);
            *(b + 1160 * OS1_S1 + 2) = prefactor_y * *(b + 1160 * OS1_S1 + 0) - 
                p_over_q * *(b + 1356 * OS1_S1 + 0);
            *(b + 1160 * OS1_S1 + 3) = prefactor_z * *(b + 1160 * OS1_S1 + 0) - 
                p_over_q * *(b + 1357 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 983 * OS1_S1 + 0);
            *(b + 1161 * OS1_S1 + 1) = prefactor_x * *(b + 1161 * OS1_S1 + 0) - 
                p_over_q * *(b + 1351 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 990 * OS1_S1 + 0);
            *(b + 1161 * OS1_S1 + 2) = prefactor_y * *(b + 1161 * OS1_S1 + 0) - 
                p_over_q * *(b + 1358 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 984 * OS1_S1 + 0);
            *(b + 1161 * OS1_S1 + 3) = prefactor_z * *(b + 1161 * OS1_S1 + 0) - 
                p_over_q * *(b + 1359 * OS1_S1 + 0);
            *(b + 1162 * OS1_S1 + 1) = prefactor_x * *(b + 1162 * OS1_S1 + 0) - 
                p_over_q * *(b + 1352 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 991 * OS1_S1 + 0);
            *(b + 1162 * OS1_S1 + 2) = prefactor_y * *(b + 1162 * OS1_S1 + 0) - 
                p_over_q * *(b + 1359 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 985 * OS1_S1 + 0);
            *(b + 1162 * OS1_S1 + 3) = prefactor_z * *(b + 1162 * OS1_S1 + 0) - 
                p_over_q * *(b + 1360 * OS1_S1 + 0) +
                one_over_two_q * *(b + 984 * OS1_S1 + 0);
            *(b + 1163 * OS1_S1 + 1) = prefactor_x * *(b + 1163 * OS1_S1 + 0) - 
                p_over_q * *(b + 1353 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 992 * OS1_S1 + 0);
            *(b + 1163 * OS1_S1 + 2) = prefactor_y * *(b + 1163 * OS1_S1 + 0) - 
                p_over_q * *(b + 1360 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 986 * OS1_S1 + 0);
            *(b + 1163 * OS1_S1 + 3) = prefactor_z * *(b + 1163 * OS1_S1 + 0) - 
                p_over_q * *(b + 1361 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 985 * OS1_S1 + 0);
            *(b + 1164 * OS1_S1 + 1) = prefactor_x * *(b + 1164 * OS1_S1 + 0) - 
                p_over_q * *(b + 1354 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 993 * OS1_S1 + 0);
            *(b + 1164 * OS1_S1 + 2) = prefactor_y * *(b + 1164 * OS1_S1 + 0) - 
                p_over_q * *(b + 1361 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 987 * OS1_S1 + 0);
            *(b + 1164 * OS1_S1 + 3) = prefactor_z * *(b + 1164 * OS1_S1 + 0) - 
                p_over_q * *(b + 1362 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 986 * OS1_S1 + 0);
            *(b + 1165 * OS1_S1 + 1) = prefactor_x * *(b + 1165 * OS1_S1 + 0) - 
                p_over_q * *(b + 1355 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 994 * OS1_S1 + 0);
            *(b + 1165 * OS1_S1 + 2) = prefactor_y * *(b + 1165 * OS1_S1 + 0) - 
                p_over_q * *(b + 1362 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 988 * OS1_S1 + 0);
            *(b + 1165 * OS1_S1 + 3) = prefactor_z * *(b + 1165 * OS1_S1 + 0) - 
                p_over_q * *(b + 1363 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 987 * OS1_S1 + 0);
            *(b + 1166 * OS1_S1 + 1) = prefactor_x * *(b + 1166 * OS1_S1 + 0) - 
                p_over_q * *(b + 1356 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 995 * OS1_S1 + 0);
            *(b + 1166 * OS1_S1 + 2) = prefactor_y * *(b + 1166 * OS1_S1 + 0) - 
                p_over_q * *(b + 1363 * OS1_S1 + 0) +
                one_over_two_q * *(b + 989 * OS1_S1 + 0);
            *(b + 1166 * OS1_S1 + 3) = prefactor_z * *(b + 1166 * OS1_S1 + 0) - 
                p_over_q * *(b + 1364 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 988 * OS1_S1 + 0);
            *(b + 1167 * OS1_S1 + 1) = prefactor_x * *(b + 1167 * OS1_S1 + 0) - 
                p_over_q * *(b + 1357 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 996 * OS1_S1 + 0);
            *(b + 1167 * OS1_S1 + 2) = prefactor_y * *(b + 1167 * OS1_S1 + 0) - 
                p_over_q * *(b + 1364 * OS1_S1 + 0);
            *(b + 1167 * OS1_S1 + 3) = prefactor_z * *(b + 1167 * OS1_S1 + 0) - 
                p_over_q * *(b + 1365 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 989 * OS1_S1 + 0);
            *(b + 1168 * OS1_S1 + 1) = prefactor_x * *(b + 1168 * OS1_S1 + 0) - 
                p_over_q * *(b + 1358 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 997 * OS1_S1 + 0);
            *(b + 1168 * OS1_S1 + 2) = prefactor_y * *(b + 1168 * OS1_S1 + 0) - 
                p_over_q * *(b + 1366 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 990 * OS1_S1 + 0);
            *(b + 1168 * OS1_S1 + 3) = prefactor_z * *(b + 1168 * OS1_S1 + 0) - 
                p_over_q * *(b + 1367 * OS1_S1 + 0);
            *(b + 1169 * OS1_S1 + 1) = prefactor_x * *(b + 1169 * OS1_S1 + 0) - 
                p_over_q * *(b + 1359 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 998 * OS1_S1 + 0);
            *(b + 1169 * OS1_S1 + 2) = prefactor_y * *(b + 1169 * OS1_S1 + 0) - 
                p_over_q * *(b + 1367 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 991 * OS1_S1 + 0);
            *(b + 1169 * OS1_S1 + 3) = prefactor_z * *(b + 1169 * OS1_S1 + 0) - 
                p_over_q * *(b + 1368 * OS1_S1 + 0) +
                one_over_two_q * *(b + 990 * OS1_S1 + 0);
            *(b + 1170 * OS1_S1 + 1) = prefactor_x * *(b + 1170 * OS1_S1 + 0) - 
                p_over_q * *(b + 1360 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 999 * OS1_S1 + 0);
            *(b + 1170 * OS1_S1 + 2) = prefactor_y * *(b + 1170 * OS1_S1 + 0) - 
                p_over_q * *(b + 1368 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 992 * OS1_S1 + 0);
            *(b + 1170 * OS1_S1 + 3) = prefactor_z * *(b + 1170 * OS1_S1 + 0) - 
                p_over_q * *(b + 1369 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 991 * OS1_S1 + 0);
            *(b + 1171 * OS1_S1 + 1) = prefactor_x * *(b + 1171 * OS1_S1 + 0) - 
                p_over_q * *(b + 1361 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1000 * OS1_S1 + 0);
            *(b + 1171 * OS1_S1 + 2) = prefactor_y * *(b + 1171 * OS1_S1 + 0) - 
                p_over_q * *(b + 1369 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 993 * OS1_S1 + 0);
            *(b + 1171 * OS1_S1 + 3) = prefactor_z * *(b + 1171 * OS1_S1 + 0) - 
                p_over_q * *(b + 1370 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 992 * OS1_S1 + 0);
            *(b + 1172 * OS1_S1 + 1) = prefactor_x * *(b + 1172 * OS1_S1 + 0) - 
                p_over_q * *(b + 1362 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1001 * OS1_S1 + 0);
            *(b + 1172 * OS1_S1 + 2) = prefactor_y * *(b + 1172 * OS1_S1 + 0) - 
                p_over_q * *(b + 1370 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 994 * OS1_S1 + 0);
            *(b + 1172 * OS1_S1 + 3) = prefactor_z * *(b + 1172 * OS1_S1 + 0) - 
                p_over_q * *(b + 1371 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 993 * OS1_S1 + 0);
            *(b + 1173 * OS1_S1 + 1) = prefactor_x * *(b + 1173 * OS1_S1 + 0) - 
                p_over_q * *(b + 1363 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1002 * OS1_S1 + 0);
            *(b + 1173 * OS1_S1 + 2) = prefactor_y * *(b + 1173 * OS1_S1 + 0) - 
                p_over_q * *(b + 1371 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 995 * OS1_S1 + 0);
            *(b + 1173 * OS1_S1 + 3) = prefactor_z * *(b + 1173 * OS1_S1 + 0) - 
                p_over_q * *(b + 1372 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 994 * OS1_S1 + 0);
            *(b + 1174 * OS1_S1 + 1) = prefactor_x * *(b + 1174 * OS1_S1 + 0) - 
                p_over_q * *(b + 1364 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1003 * OS1_S1 + 0);
            *(b + 1174 * OS1_S1 + 2) = prefactor_y * *(b + 1174 * OS1_S1 + 0) - 
                p_over_q * *(b + 1372 * OS1_S1 + 0) +
                one_over_two_q * *(b + 996 * OS1_S1 + 0);
            *(b + 1174 * OS1_S1 + 3) = prefactor_z * *(b + 1174 * OS1_S1 + 0) - 
                p_over_q * *(b + 1373 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 995 * OS1_S1 + 0);
            *(b + 1175 * OS1_S1 + 1) = prefactor_x * *(b + 1175 * OS1_S1 + 0) - 
                p_over_q * *(b + 1365 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1004 * OS1_S1 + 0);
            *(b + 1175 * OS1_S1 + 2) = prefactor_y * *(b + 1175 * OS1_S1 + 0) - 
                p_over_q * *(b + 1373 * OS1_S1 + 0);
            *(b + 1175 * OS1_S1 + 3) = prefactor_z * *(b + 1175 * OS1_S1 + 0) - 
                p_over_q * *(b + 1374 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 996 * OS1_S1 + 0);
            *(b + 1176 * OS1_S1 + 1) = prefactor_x * *(b + 1176 * OS1_S1 + 0) - 
                p_over_q * *(b + 1366 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1005 * OS1_S1 + 0);
            *(b + 1176 * OS1_S1 + 2) = prefactor_y * *(b + 1176 * OS1_S1 + 0) - 
                p_over_q * *(b + 1375 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 997 * OS1_S1 + 0);
            *(b + 1176 * OS1_S1 + 3) = prefactor_z * *(b + 1176 * OS1_S1 + 0) - 
                p_over_q * *(b + 1376 * OS1_S1 + 0);
            *(b + 1177 * OS1_S1 + 1) = prefactor_x * *(b + 1177 * OS1_S1 + 0) - 
                p_over_q * *(b + 1367 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1006 * OS1_S1 + 0);
            *(b + 1177 * OS1_S1 + 2) = prefactor_y * *(b + 1177 * OS1_S1 + 0) - 
                p_over_q * *(b + 1376 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 998 * OS1_S1 + 0);
            *(b + 1177 * OS1_S1 + 3) = prefactor_z * *(b + 1177 * OS1_S1 + 0) - 
                p_over_q * *(b + 1377 * OS1_S1 + 0) +
                one_over_two_q * *(b + 997 * OS1_S1 + 0);
            *(b + 1178 * OS1_S1 + 1) = prefactor_x * *(b + 1178 * OS1_S1 + 0) - 
                p_over_q * *(b + 1368 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1007 * OS1_S1 + 0);
            *(b + 1178 * OS1_S1 + 2) = prefactor_y * *(b + 1178 * OS1_S1 + 0) - 
                p_over_q * *(b + 1377 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 999 * OS1_S1 + 0);
            *(b + 1178 * OS1_S1 + 3) = prefactor_z * *(b + 1178 * OS1_S1 + 0) - 
                p_over_q * *(b + 1378 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 998 * OS1_S1 + 0);
            *(b + 1179 * OS1_S1 + 1) = prefactor_x * *(b + 1179 * OS1_S1 + 0) - 
                p_over_q * *(b + 1369 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1008 * OS1_S1 + 0);
            *(b + 1179 * OS1_S1 + 2) = prefactor_y * *(b + 1179 * OS1_S1 + 0) - 
                p_over_q * *(b + 1378 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1000 * OS1_S1 + 0);
            *(b + 1179 * OS1_S1 + 3) = prefactor_z * *(b + 1179 * OS1_S1 + 0) - 
                p_over_q * *(b + 1379 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 999 * OS1_S1 + 0);
            *(b + 1180 * OS1_S1 + 1) = prefactor_x * *(b + 1180 * OS1_S1 + 0) - 
                p_over_q * *(b + 1370 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1009 * OS1_S1 + 0);
            *(b + 1180 * OS1_S1 + 2) = prefactor_y * *(b + 1180 * OS1_S1 + 0) - 
                p_over_q * *(b + 1379 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1001 * OS1_S1 + 0);
            *(b + 1180 * OS1_S1 + 3) = prefactor_z * *(b + 1180 * OS1_S1 + 0) - 
                p_over_q * *(b + 1380 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1000 * OS1_S1 + 0);
            *(b + 1181 * OS1_S1 + 1) = prefactor_x * *(b + 1181 * OS1_S1 + 0) - 
                p_over_q * *(b + 1371 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1010 * OS1_S1 + 0);
            *(b + 1181 * OS1_S1 + 2) = prefactor_y * *(b + 1181 * OS1_S1 + 0) - 
                p_over_q * *(b + 1380 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1002 * OS1_S1 + 0);
            *(b + 1181 * OS1_S1 + 3) = prefactor_z * *(b + 1181 * OS1_S1 + 0) - 
                p_over_q * *(b + 1381 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1001 * OS1_S1 + 0);
            *(b + 1182 * OS1_S1 + 1) = prefactor_x * *(b + 1182 * OS1_S1 + 0) - 
                p_over_q * *(b + 1372 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1011 * OS1_S1 + 0);
            *(b + 1182 * OS1_S1 + 2) = prefactor_y * *(b + 1182 * OS1_S1 + 0) - 
                p_over_q * *(b + 1381 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1003 * OS1_S1 + 0);
            *(b + 1182 * OS1_S1 + 3) = prefactor_z * *(b + 1182 * OS1_S1 + 0) - 
                p_over_q * *(b + 1382 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1002 * OS1_S1 + 0);
            *(b + 1183 * OS1_S1 + 1) = prefactor_x * *(b + 1183 * OS1_S1 + 0) - 
                p_over_q * *(b + 1373 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1012 * OS1_S1 + 0);
            *(b + 1183 * OS1_S1 + 2) = prefactor_y * *(b + 1183 * OS1_S1 + 0) - 
                p_over_q * *(b + 1382 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1004 * OS1_S1 + 0);
            *(b + 1183 * OS1_S1 + 3) = prefactor_z * *(b + 1183 * OS1_S1 + 0) - 
                p_over_q * *(b + 1383 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1003 * OS1_S1 + 0);
            *(b + 1184 * OS1_S1 + 1) = prefactor_x * *(b + 1184 * OS1_S1 + 0) - 
                p_over_q * *(b + 1374 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1013 * OS1_S1 + 0);
            *(b + 1184 * OS1_S1 + 2) = prefactor_y * *(b + 1184 * OS1_S1 + 0) - 
                p_over_q * *(b + 1383 * OS1_S1 + 0);
            *(b + 1184 * OS1_S1 + 3) = prefactor_z * *(b + 1184 * OS1_S1 + 0) - 
                p_over_q * *(b + 1384 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1004 * OS1_S1 + 0);
            *(b + 1185 * OS1_S1 + 1) = prefactor_x * *(b + 1185 * OS1_S1 + 0) - 
                p_over_q * *(b + 1375 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1014 * OS1_S1 + 0);
            *(b + 1185 * OS1_S1 + 2) = prefactor_y * *(b + 1185 * OS1_S1 + 0) - 
                p_over_q * *(b + 1385 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1005 * OS1_S1 + 0);
            *(b + 1185 * OS1_S1 + 3) = prefactor_z * *(b + 1185 * OS1_S1 + 0) - 
                p_over_q * *(b + 1386 * OS1_S1 + 0);
            *(b + 1186 * OS1_S1 + 1) = prefactor_x * *(b + 1186 * OS1_S1 + 0) - 
                p_over_q * *(b + 1376 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1015 * OS1_S1 + 0);
            *(b + 1186 * OS1_S1 + 2) = prefactor_y * *(b + 1186 * OS1_S1 + 0) - 
                p_over_q * *(b + 1386 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1006 * OS1_S1 + 0);
            *(b + 1186 * OS1_S1 + 3) = prefactor_z * *(b + 1186 * OS1_S1 + 0) - 
                p_over_q * *(b + 1387 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1005 * OS1_S1 + 0);
            *(b + 1187 * OS1_S1 + 1) = prefactor_x * *(b + 1187 * OS1_S1 + 0) - 
                p_over_q * *(b + 1377 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1016 * OS1_S1 + 0);
            *(b + 1187 * OS1_S1 + 2) = prefactor_y * *(b + 1187 * OS1_S1 + 0) - 
                p_over_q * *(b + 1387 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1007 * OS1_S1 + 0);
            *(b + 1187 * OS1_S1 + 3) = prefactor_z * *(b + 1187 * OS1_S1 + 0) - 
                p_over_q * *(b + 1388 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1006 * OS1_S1 + 0);
            *(b + 1188 * OS1_S1 + 1) = prefactor_x * *(b + 1188 * OS1_S1 + 0) - 
                p_over_q * *(b + 1378 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1017 * OS1_S1 + 0);
            *(b + 1188 * OS1_S1 + 2) = prefactor_y * *(b + 1188 * OS1_S1 + 0) - 
                p_over_q * *(b + 1388 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1008 * OS1_S1 + 0);
            *(b + 1188 * OS1_S1 + 3) = prefactor_z * *(b + 1188 * OS1_S1 + 0) - 
                p_over_q * *(b + 1389 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1007 * OS1_S1 + 0);
            *(b + 1189 * OS1_S1 + 1) = prefactor_x * *(b + 1189 * OS1_S1 + 0) - 
                p_over_q * *(b + 1379 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1018 * OS1_S1 + 0);
            *(b + 1189 * OS1_S1 + 2) = prefactor_y * *(b + 1189 * OS1_S1 + 0) - 
                p_over_q * *(b + 1389 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1009 * OS1_S1 + 0);
            *(b + 1189 * OS1_S1 + 3) = prefactor_z * *(b + 1189 * OS1_S1 + 0) - 
                p_over_q * *(b + 1390 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1008 * OS1_S1 + 0);
            *(b + 1190 * OS1_S1 + 1) = prefactor_x * *(b + 1190 * OS1_S1 + 0) - 
                p_over_q * *(b + 1380 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1019 * OS1_S1 + 0);
            *(b + 1190 * OS1_S1 + 2) = prefactor_y * *(b + 1190 * OS1_S1 + 0) - 
                p_over_q * *(b + 1390 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1010 * OS1_S1 + 0);
            *(b + 1190 * OS1_S1 + 3) = prefactor_z * *(b + 1190 * OS1_S1 + 0) - 
                p_over_q * *(b + 1391 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1009 * OS1_S1 + 0);
            *(b + 1191 * OS1_S1 + 1) = prefactor_x * *(b + 1191 * OS1_S1 + 0) - 
                p_over_q * *(b + 1381 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1020 * OS1_S1 + 0);
            *(b + 1191 * OS1_S1 + 2) = prefactor_y * *(b + 1191 * OS1_S1 + 0) - 
                p_over_q * *(b + 1391 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1011 * OS1_S1 + 0);
            *(b + 1191 * OS1_S1 + 3) = prefactor_z * *(b + 1191 * OS1_S1 + 0) - 
                p_over_q * *(b + 1392 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1010 * OS1_S1 + 0);
            *(b + 1192 * OS1_S1 + 1) = prefactor_x * *(b + 1192 * OS1_S1 + 0) - 
                p_over_q * *(b + 1382 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1021 * OS1_S1 + 0);
            *(b + 1192 * OS1_S1 + 2) = prefactor_y * *(b + 1192 * OS1_S1 + 0) - 
                p_over_q * *(b + 1392 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1012 * OS1_S1 + 0);
            *(b + 1192 * OS1_S1 + 3) = prefactor_z * *(b + 1192 * OS1_S1 + 0) - 
                p_over_q * *(b + 1393 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1011 * OS1_S1 + 0);
            *(b + 1193 * OS1_S1 + 1) = prefactor_x * *(b + 1193 * OS1_S1 + 0) - 
                p_over_q * *(b + 1383 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1022 * OS1_S1 + 0);
            *(b + 1193 * OS1_S1 + 2) = prefactor_y * *(b + 1193 * OS1_S1 + 0) - 
                p_over_q * *(b + 1393 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1013 * OS1_S1 + 0);
            *(b + 1193 * OS1_S1 + 3) = prefactor_z * *(b + 1193 * OS1_S1 + 0) - 
                p_over_q * *(b + 1394 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1012 * OS1_S1 + 0);
            *(b + 1194 * OS1_S1 + 1) = prefactor_x * *(b + 1194 * OS1_S1 + 0) - 
                p_over_q * *(b + 1384 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1023 * OS1_S1 + 0);
            *(b + 1194 * OS1_S1 + 2) = prefactor_y * *(b + 1194 * OS1_S1 + 0) - 
                p_over_q * *(b + 1394 * OS1_S1 + 0);
            *(b + 1194 * OS1_S1 + 3) = prefactor_z * *(b + 1194 * OS1_S1 + 0) - 
                p_over_q * *(b + 1395 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1013 * OS1_S1 + 0);
            *(b + 1195 * OS1_S1 + 1) = prefactor_x * *(b + 1195 * OS1_S1 + 0) - 
                p_over_q * *(b + 1385 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1024 * OS1_S1 + 0);
            *(b + 1195 * OS1_S1 + 2) = prefactor_y * *(b + 1195 * OS1_S1 + 0) - 
                p_over_q * *(b + 1396 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1014 * OS1_S1 + 0);
            *(b + 1195 * OS1_S1 + 3) = prefactor_z * *(b + 1195 * OS1_S1 + 0) - 
                p_over_q * *(b + 1397 * OS1_S1 + 0);
            *(b + 1196 * OS1_S1 + 1) = prefactor_x * *(b + 1196 * OS1_S1 + 0) - 
                p_over_q * *(b + 1386 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1025 * OS1_S1 + 0);
            *(b + 1196 * OS1_S1 + 2) = prefactor_y * *(b + 1196 * OS1_S1 + 0) - 
                p_over_q * *(b + 1397 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1015 * OS1_S1 + 0);
            *(b + 1196 * OS1_S1 + 3) = prefactor_z * *(b + 1196 * OS1_S1 + 0) - 
                p_over_q * *(b + 1398 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1014 * OS1_S1 + 0);
            *(b + 1197 * OS1_S1 + 1) = prefactor_x * *(b + 1197 * OS1_S1 + 0) - 
                p_over_q * *(b + 1387 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1026 * OS1_S1 + 0);
            *(b + 1197 * OS1_S1 + 2) = prefactor_y * *(b + 1197 * OS1_S1 + 0) - 
                p_over_q * *(b + 1398 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1016 * OS1_S1 + 0);
            *(b + 1197 * OS1_S1 + 3) = prefactor_z * *(b + 1197 * OS1_S1 + 0) - 
                p_over_q * *(b + 1399 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1015 * OS1_S1 + 0);
            *(b + 1198 * OS1_S1 + 1) = prefactor_x * *(b + 1198 * OS1_S1 + 0) - 
                p_over_q * *(b + 1388 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1027 * OS1_S1 + 0);
            *(b + 1198 * OS1_S1 + 2) = prefactor_y * *(b + 1198 * OS1_S1 + 0) - 
                p_over_q * *(b + 1399 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1017 * OS1_S1 + 0);
            *(b + 1198 * OS1_S1 + 3) = prefactor_z * *(b + 1198 * OS1_S1 + 0) - 
                p_over_q * *(b + 1400 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1016 * OS1_S1 + 0);
            *(b + 1199 * OS1_S1 + 1) = prefactor_x * *(b + 1199 * OS1_S1 + 0) - 
                p_over_q * *(b + 1389 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1028 * OS1_S1 + 0);
            *(b + 1199 * OS1_S1 + 2) = prefactor_y * *(b + 1199 * OS1_S1 + 0) - 
                p_over_q * *(b + 1400 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1018 * OS1_S1 + 0);
            *(b + 1199 * OS1_S1 + 3) = prefactor_z * *(b + 1199 * OS1_S1 + 0) - 
                p_over_q * *(b + 1401 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1017 * OS1_S1 + 0);
            *(b + 1200 * OS1_S1 + 1) = prefactor_x * *(b + 1200 * OS1_S1 + 0) - 
                p_over_q * *(b + 1390 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1029 * OS1_S1 + 0);
            *(b + 1200 * OS1_S1 + 2) = prefactor_y * *(b + 1200 * OS1_S1 + 0) - 
                p_over_q * *(b + 1401 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1019 * OS1_S1 + 0);
            *(b + 1200 * OS1_S1 + 3) = prefactor_z * *(b + 1200 * OS1_S1 + 0) - 
                p_over_q * *(b + 1402 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1018 * OS1_S1 + 0);
            *(b + 1201 * OS1_S1 + 1) = prefactor_x * *(b + 1201 * OS1_S1 + 0) - 
                p_over_q * *(b + 1391 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1030 * OS1_S1 + 0);
            *(b + 1201 * OS1_S1 + 2) = prefactor_y * *(b + 1201 * OS1_S1 + 0) - 
                p_over_q * *(b + 1402 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1020 * OS1_S1 + 0);
            *(b + 1201 * OS1_S1 + 3) = prefactor_z * *(b + 1201 * OS1_S1 + 0) - 
                p_over_q * *(b + 1403 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1019 * OS1_S1 + 0);
            *(b + 1202 * OS1_S1 + 1) = prefactor_x * *(b + 1202 * OS1_S1 + 0) - 
                p_over_q * *(b + 1392 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1031 * OS1_S1 + 0);
            *(b + 1202 * OS1_S1 + 2) = prefactor_y * *(b + 1202 * OS1_S1 + 0) - 
                p_over_q * *(b + 1403 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1021 * OS1_S1 + 0);
            *(b + 1202 * OS1_S1 + 3) = prefactor_z * *(b + 1202 * OS1_S1 + 0) - 
                p_over_q * *(b + 1404 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1020 * OS1_S1 + 0);
            *(b + 1203 * OS1_S1 + 1) = prefactor_x * *(b + 1203 * OS1_S1 + 0) - 
                p_over_q * *(b + 1393 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1032 * OS1_S1 + 0);
            *(b + 1203 * OS1_S1 + 2) = prefactor_y * *(b + 1203 * OS1_S1 + 0) - 
                p_over_q * *(b + 1404 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1022 * OS1_S1 + 0);
            *(b + 1203 * OS1_S1 + 3) = prefactor_z * *(b + 1203 * OS1_S1 + 0) - 
                p_over_q * *(b + 1405 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1021 * OS1_S1 + 0);
            *(b + 1204 * OS1_S1 + 1) = prefactor_x * *(b + 1204 * OS1_S1 + 0) - 
                p_over_q * *(b + 1394 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1033 * OS1_S1 + 0);
            *(b + 1204 * OS1_S1 + 2) = prefactor_y * *(b + 1204 * OS1_S1 + 0) - 
                p_over_q * *(b + 1405 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1023 * OS1_S1 + 0);
            *(b + 1204 * OS1_S1 + 3) = prefactor_z * *(b + 1204 * OS1_S1 + 0) - 
                p_over_q * *(b + 1406 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1022 * OS1_S1 + 0);
            *(b + 1205 * OS1_S1 + 1) = prefactor_x * *(b + 1205 * OS1_S1 + 0) - 
                p_over_q * *(b + 1395 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1034 * OS1_S1 + 0);
            *(b + 1205 * OS1_S1 + 2) = prefactor_y * *(b + 1205 * OS1_S1 + 0) - 
                p_over_q * *(b + 1406 * OS1_S1 + 0);
            *(b + 1205 * OS1_S1 + 3) = prefactor_z * *(b + 1205 * OS1_S1 + 0) - 
                p_over_q * *(b + 1407 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1023 * OS1_S1 + 0);
            *(b + 1206 * OS1_S1 + 1) = prefactor_x * *(b + 1206 * OS1_S1 + 0) - 
                p_over_q * *(b + 1396 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1035 * OS1_S1 + 0);
            *(b + 1206 * OS1_S1 + 2) = prefactor_y * *(b + 1206 * OS1_S1 + 0) - 
                p_over_q * *(b + 1408 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1024 * OS1_S1 + 0);
            *(b + 1206 * OS1_S1 + 3) = prefactor_z * *(b + 1206 * OS1_S1 + 0) - 
                p_over_q * *(b + 1409 * OS1_S1 + 0);
            *(b + 1207 * OS1_S1 + 1) = prefactor_x * *(b + 1207 * OS1_S1 + 0) - 
                p_over_q * *(b + 1397 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1036 * OS1_S1 + 0);
            *(b + 1207 * OS1_S1 + 2) = prefactor_y * *(b + 1207 * OS1_S1 + 0) - 
                p_over_q * *(b + 1409 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1025 * OS1_S1 + 0);
            *(b + 1207 * OS1_S1 + 3) = prefactor_z * *(b + 1207 * OS1_S1 + 0) - 
                p_over_q * *(b + 1410 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1024 * OS1_S1 + 0);
            *(b + 1208 * OS1_S1 + 1) = prefactor_x * *(b + 1208 * OS1_S1 + 0) - 
                p_over_q * *(b + 1398 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1037 * OS1_S1 + 0);
            *(b + 1208 * OS1_S1 + 2) = prefactor_y * *(b + 1208 * OS1_S1 + 0) - 
                p_over_q * *(b + 1410 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1026 * OS1_S1 + 0);
            *(b + 1208 * OS1_S1 + 3) = prefactor_z * *(b + 1208 * OS1_S1 + 0) - 
                p_over_q * *(b + 1411 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1025 * OS1_S1 + 0);
            *(b + 1209 * OS1_S1 + 1) = prefactor_x * *(b + 1209 * OS1_S1 + 0) - 
                p_over_q * *(b + 1399 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1038 * OS1_S1 + 0);
            *(b + 1209 * OS1_S1 + 2) = prefactor_y * *(b + 1209 * OS1_S1 + 0) - 
                p_over_q * *(b + 1411 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1027 * OS1_S1 + 0);
            *(b + 1209 * OS1_S1 + 3) = prefactor_z * *(b + 1209 * OS1_S1 + 0) - 
                p_over_q * *(b + 1412 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1026 * OS1_S1 + 0);
            *(b + 1210 * OS1_S1 + 1) = prefactor_x * *(b + 1210 * OS1_S1 + 0) - 
                p_over_q * *(b + 1400 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1039 * OS1_S1 + 0);
            *(b + 1210 * OS1_S1 + 2) = prefactor_y * *(b + 1210 * OS1_S1 + 0) - 
                p_over_q * *(b + 1412 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1028 * OS1_S1 + 0);
            *(b + 1210 * OS1_S1 + 3) = prefactor_z * *(b + 1210 * OS1_S1 + 0) - 
                p_over_q * *(b + 1413 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1027 * OS1_S1 + 0);
            *(b + 1211 * OS1_S1 + 1) = prefactor_x * *(b + 1211 * OS1_S1 + 0) - 
                p_over_q * *(b + 1401 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1040 * OS1_S1 + 0);
            *(b + 1211 * OS1_S1 + 2) = prefactor_y * *(b + 1211 * OS1_S1 + 0) - 
                p_over_q * *(b + 1413 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1029 * OS1_S1 + 0);
            *(b + 1211 * OS1_S1 + 3) = prefactor_z * *(b + 1211 * OS1_S1 + 0) - 
                p_over_q * *(b + 1414 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1028 * OS1_S1 + 0);
            *(b + 1212 * OS1_S1 + 1) = prefactor_x * *(b + 1212 * OS1_S1 + 0) - 
                p_over_q * *(b + 1402 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1041 * OS1_S1 + 0);
            *(b + 1212 * OS1_S1 + 2) = prefactor_y * *(b + 1212 * OS1_S1 + 0) - 
                p_over_q * *(b + 1414 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1030 * OS1_S1 + 0);
            *(b + 1212 * OS1_S1 + 3) = prefactor_z * *(b + 1212 * OS1_S1 + 0) - 
                p_over_q * *(b + 1415 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1029 * OS1_S1 + 0);
            *(b + 1213 * OS1_S1 + 1) = prefactor_x * *(b + 1213 * OS1_S1 + 0) - 
                p_over_q * *(b + 1403 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1042 * OS1_S1 + 0);
            *(b + 1213 * OS1_S1 + 2) = prefactor_y * *(b + 1213 * OS1_S1 + 0) - 
                p_over_q * *(b + 1415 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1031 * OS1_S1 + 0);
            *(b + 1213 * OS1_S1 + 3) = prefactor_z * *(b + 1213 * OS1_S1 + 0) - 
                p_over_q * *(b + 1416 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1030 * OS1_S1 + 0);
            *(b + 1214 * OS1_S1 + 1) = prefactor_x * *(b + 1214 * OS1_S1 + 0) - 
                p_over_q * *(b + 1404 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1043 * OS1_S1 + 0);
            *(b + 1214 * OS1_S1 + 2) = prefactor_y * *(b + 1214 * OS1_S1 + 0) - 
                p_over_q * *(b + 1416 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1032 * OS1_S1 + 0);
            *(b + 1214 * OS1_S1 + 3) = prefactor_z * *(b + 1214 * OS1_S1 + 0) - 
                p_over_q * *(b + 1417 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1031 * OS1_S1 + 0);
            *(b + 1215 * OS1_S1 + 1) = prefactor_x * *(b + 1215 * OS1_S1 + 0) - 
                p_over_q * *(b + 1405 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1044 * OS1_S1 + 0);
            *(b + 1215 * OS1_S1 + 2) = prefactor_y * *(b + 1215 * OS1_S1 + 0) - 
                p_over_q * *(b + 1417 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1033 * OS1_S1 + 0);
            *(b + 1215 * OS1_S1 + 3) = prefactor_z * *(b + 1215 * OS1_S1 + 0) - 
                p_over_q * *(b + 1418 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1032 * OS1_S1 + 0);
            *(b + 1216 * OS1_S1 + 1) = prefactor_x * *(b + 1216 * OS1_S1 + 0) - 
                p_over_q * *(b + 1406 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1045 * OS1_S1 + 0);
            *(b + 1216 * OS1_S1 + 2) = prefactor_y * *(b + 1216 * OS1_S1 + 0) - 
                p_over_q * *(b + 1418 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1034 * OS1_S1 + 0);
            *(b + 1216 * OS1_S1 + 3) = prefactor_z * *(b + 1216 * OS1_S1 + 0) - 
                p_over_q * *(b + 1419 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1033 * OS1_S1 + 0);
            *(b + 1217 * OS1_S1 + 1) = prefactor_x * *(b + 1217 * OS1_S1 + 0) - 
                p_over_q * *(b + 1407 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1046 * OS1_S1 + 0);
            *(b + 1217 * OS1_S1 + 2) = prefactor_y * *(b + 1217 * OS1_S1 + 0) - 
                p_over_q * *(b + 1419 * OS1_S1 + 0);
            *(b + 1217 * OS1_S1 + 3) = prefactor_z * *(b + 1217 * OS1_S1 + 0) - 
                p_over_q * *(b + 1420 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1034 * OS1_S1 + 0);
            *(b + 1218 * OS1_S1 + 1) = prefactor_x * *(b + 1218 * OS1_S1 + 0) - 
                p_over_q * *(b + 1408 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1047 * OS1_S1 + 0);
            *(b + 1218 * OS1_S1 + 2) = prefactor_y * *(b + 1218 * OS1_S1 + 0) - 
                p_over_q * *(b + 1421 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1035 * OS1_S1 + 0);
            *(b + 1218 * OS1_S1 + 3) = prefactor_z * *(b + 1218 * OS1_S1 + 0) - 
                p_over_q * *(b + 1422 * OS1_S1 + 0);
            *(b + 1219 * OS1_S1 + 1) = prefactor_x * *(b + 1219 * OS1_S1 + 0) - 
                p_over_q * *(b + 1409 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1048 * OS1_S1 + 0);
            *(b + 1219 * OS1_S1 + 2) = prefactor_y * *(b + 1219 * OS1_S1 + 0) - 
                p_over_q * *(b + 1422 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1036 * OS1_S1 + 0);
            *(b + 1219 * OS1_S1 + 3) = prefactor_z * *(b + 1219 * OS1_S1 + 0) - 
                p_over_q * *(b + 1423 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1035 * OS1_S1 + 0);
            *(b + 1220 * OS1_S1 + 1) = prefactor_x * *(b + 1220 * OS1_S1 + 0) - 
                p_over_q * *(b + 1410 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1049 * OS1_S1 + 0);
            *(b + 1220 * OS1_S1 + 2) = prefactor_y * *(b + 1220 * OS1_S1 + 0) - 
                p_over_q * *(b + 1423 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1037 * OS1_S1 + 0);
            *(b + 1220 * OS1_S1 + 3) = prefactor_z * *(b + 1220 * OS1_S1 + 0) - 
                p_over_q * *(b + 1424 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1036 * OS1_S1 + 0);
            *(b + 1221 * OS1_S1 + 1) = prefactor_x * *(b + 1221 * OS1_S1 + 0) - 
                p_over_q * *(b + 1411 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1050 * OS1_S1 + 0);
            *(b + 1221 * OS1_S1 + 2) = prefactor_y * *(b + 1221 * OS1_S1 + 0) - 
                p_over_q * *(b + 1424 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1038 * OS1_S1 + 0);
            *(b + 1221 * OS1_S1 + 3) = prefactor_z * *(b + 1221 * OS1_S1 + 0) - 
                p_over_q * *(b + 1425 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1037 * OS1_S1 + 0);
            *(b + 1222 * OS1_S1 + 1) = prefactor_x * *(b + 1222 * OS1_S1 + 0) - 
                p_over_q * *(b + 1412 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1051 * OS1_S1 + 0);
            *(b + 1222 * OS1_S1 + 2) = prefactor_y * *(b + 1222 * OS1_S1 + 0) - 
                p_over_q * *(b + 1425 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1039 * OS1_S1 + 0);
            *(b + 1222 * OS1_S1 + 3) = prefactor_z * *(b + 1222 * OS1_S1 + 0) - 
                p_over_q * *(b + 1426 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1038 * OS1_S1 + 0);
            *(b + 1223 * OS1_S1 + 1) = prefactor_x * *(b + 1223 * OS1_S1 + 0) - 
                p_over_q * *(b + 1413 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1052 * OS1_S1 + 0);
            *(b + 1223 * OS1_S1 + 2) = prefactor_y * *(b + 1223 * OS1_S1 + 0) - 
                p_over_q * *(b + 1426 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1040 * OS1_S1 + 0);
            *(b + 1223 * OS1_S1 + 3) = prefactor_z * *(b + 1223 * OS1_S1 + 0) - 
                p_over_q * *(b + 1427 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1039 * OS1_S1 + 0);
            *(b + 1224 * OS1_S1 + 1) = prefactor_x * *(b + 1224 * OS1_S1 + 0) - 
                p_over_q * *(b + 1414 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1053 * OS1_S1 + 0);
            *(b + 1224 * OS1_S1 + 2) = prefactor_y * *(b + 1224 * OS1_S1 + 0) - 
                p_over_q * *(b + 1427 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1041 * OS1_S1 + 0);
            *(b + 1224 * OS1_S1 + 3) = prefactor_z * *(b + 1224 * OS1_S1 + 0) - 
                p_over_q * *(b + 1428 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1040 * OS1_S1 + 0);
            *(b + 1225 * OS1_S1 + 1) = prefactor_x * *(b + 1225 * OS1_S1 + 0) - 
                p_over_q * *(b + 1415 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1054 * OS1_S1 + 0);
            *(b + 1225 * OS1_S1 + 2) = prefactor_y * *(b + 1225 * OS1_S1 + 0) - 
                p_over_q * *(b + 1428 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1042 * OS1_S1 + 0);
            *(b + 1225 * OS1_S1 + 3) = prefactor_z * *(b + 1225 * OS1_S1 + 0) - 
                p_over_q * *(b + 1429 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1041 * OS1_S1 + 0);
            *(b + 1226 * OS1_S1 + 1) = prefactor_x * *(b + 1226 * OS1_S1 + 0) - 
                p_over_q * *(b + 1416 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1055 * OS1_S1 + 0);
            *(b + 1226 * OS1_S1 + 2) = prefactor_y * *(b + 1226 * OS1_S1 + 0) - 
                p_over_q * *(b + 1429 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1043 * OS1_S1 + 0);
            *(b + 1226 * OS1_S1 + 3) = prefactor_z * *(b + 1226 * OS1_S1 + 0) - 
                p_over_q * *(b + 1430 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1042 * OS1_S1 + 0);
            *(b + 1227 * OS1_S1 + 1) = prefactor_x * *(b + 1227 * OS1_S1 + 0) - 
                p_over_q * *(b + 1417 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1056 * OS1_S1 + 0);
            *(b + 1227 * OS1_S1 + 2) = prefactor_y * *(b + 1227 * OS1_S1 + 0) - 
                p_over_q * *(b + 1430 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1044 * OS1_S1 + 0);
            *(b + 1227 * OS1_S1 + 3) = prefactor_z * *(b + 1227 * OS1_S1 + 0) - 
                p_over_q * *(b + 1431 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1043 * OS1_S1 + 0);
            *(b + 1228 * OS1_S1 + 1) = prefactor_x * *(b + 1228 * OS1_S1 + 0) - 
                p_over_q * *(b + 1418 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1057 * OS1_S1 + 0);
            *(b + 1228 * OS1_S1 + 2) = prefactor_y * *(b + 1228 * OS1_S1 + 0) - 
                p_over_q * *(b + 1431 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1045 * OS1_S1 + 0);
            *(b + 1228 * OS1_S1 + 3) = prefactor_z * *(b + 1228 * OS1_S1 + 0) - 
                p_over_q * *(b + 1432 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1044 * OS1_S1 + 0);
            *(b + 1229 * OS1_S1 + 1) = prefactor_x * *(b + 1229 * OS1_S1 + 0) - 
                p_over_q * *(b + 1419 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1058 * OS1_S1 + 0);
            *(b + 1229 * OS1_S1 + 2) = prefactor_y * *(b + 1229 * OS1_S1 + 0) - 
                p_over_q * *(b + 1432 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1046 * OS1_S1 + 0);
            *(b + 1229 * OS1_S1 + 3) = prefactor_z * *(b + 1229 * OS1_S1 + 0) - 
                p_over_q * *(b + 1433 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1045 * OS1_S1 + 0);
            *(b + 1230 * OS1_S1 + 1) = prefactor_x * *(b + 1230 * OS1_S1 + 0) - 
                p_over_q * *(b + 1420 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1059 * OS1_S1 + 0);
            *(b + 1230 * OS1_S1 + 2) = prefactor_y * *(b + 1230 * OS1_S1 + 0) - 
                p_over_q * *(b + 1433 * OS1_S1 + 0);
            *(b + 1230 * OS1_S1 + 3) = prefactor_z * *(b + 1230 * OS1_S1 + 0) - 
                p_over_q * *(b + 1434 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1046 * OS1_S1 + 0);
            *(b + 1231 * OS1_S1 + 1) = prefactor_x * *(b + 1231 * OS1_S1 + 0) - 
                p_over_q * *(b + 1421 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1060 * OS1_S1 + 0);
            *(b + 1231 * OS1_S1 + 2) = prefactor_y * *(b + 1231 * OS1_S1 + 0) - 
                p_over_q * *(b + 1435 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1047 * OS1_S1 + 0);
            *(b + 1231 * OS1_S1 + 3) = prefactor_z * *(b + 1231 * OS1_S1 + 0) - 
                p_over_q * *(b + 1436 * OS1_S1 + 0);
            *(b + 1232 * OS1_S1 + 1) = prefactor_x * *(b + 1232 * OS1_S1 + 0) - 
                p_over_q * *(b + 1422 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1061 * OS1_S1 + 0);
            *(b + 1232 * OS1_S1 + 2) = prefactor_y * *(b + 1232 * OS1_S1 + 0) - 
                p_over_q * *(b + 1436 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1048 * OS1_S1 + 0);
            *(b + 1232 * OS1_S1 + 3) = prefactor_z * *(b + 1232 * OS1_S1 + 0) - 
                p_over_q * *(b + 1437 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1047 * OS1_S1 + 0);
            *(b + 1233 * OS1_S1 + 1) = prefactor_x * *(b + 1233 * OS1_S1 + 0) - 
                p_over_q * *(b + 1423 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1062 * OS1_S1 + 0);
            *(b + 1233 * OS1_S1 + 2) = prefactor_y * *(b + 1233 * OS1_S1 + 0) - 
                p_over_q * *(b + 1437 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1049 * OS1_S1 + 0);
            *(b + 1233 * OS1_S1 + 3) = prefactor_z * *(b + 1233 * OS1_S1 + 0) - 
                p_over_q * *(b + 1438 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1048 * OS1_S1 + 0);
            *(b + 1234 * OS1_S1 + 1) = prefactor_x * *(b + 1234 * OS1_S1 + 0) - 
                p_over_q * *(b + 1424 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1063 * OS1_S1 + 0);
            *(b + 1234 * OS1_S1 + 2) = prefactor_y * *(b + 1234 * OS1_S1 + 0) - 
                p_over_q * *(b + 1438 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1050 * OS1_S1 + 0);
            *(b + 1234 * OS1_S1 + 3) = prefactor_z * *(b + 1234 * OS1_S1 + 0) - 
                p_over_q * *(b + 1439 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1049 * OS1_S1 + 0);
            *(b + 1235 * OS1_S1 + 1) = prefactor_x * *(b + 1235 * OS1_S1 + 0) - 
                p_over_q * *(b + 1425 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1064 * OS1_S1 + 0);
            *(b + 1235 * OS1_S1 + 2) = prefactor_y * *(b + 1235 * OS1_S1 + 0) - 
                p_over_q * *(b + 1439 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1051 * OS1_S1 + 0);
            *(b + 1235 * OS1_S1 + 3) = prefactor_z * *(b + 1235 * OS1_S1 + 0) - 
                p_over_q * *(b + 1440 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1050 * OS1_S1 + 0);
            *(b + 1236 * OS1_S1 + 1) = prefactor_x * *(b + 1236 * OS1_S1 + 0) - 
                p_over_q * *(b + 1426 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1065 * OS1_S1 + 0);
            *(b + 1236 * OS1_S1 + 2) = prefactor_y * *(b + 1236 * OS1_S1 + 0) - 
                p_over_q * *(b + 1440 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1052 * OS1_S1 + 0);
            *(b + 1236 * OS1_S1 + 3) = prefactor_z * *(b + 1236 * OS1_S1 + 0) - 
                p_over_q * *(b + 1441 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1051 * OS1_S1 + 0);
            *(b + 1237 * OS1_S1 + 1) = prefactor_x * *(b + 1237 * OS1_S1 + 0) - 
                p_over_q * *(b + 1427 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1066 * OS1_S1 + 0);
            *(b + 1237 * OS1_S1 + 2) = prefactor_y * *(b + 1237 * OS1_S1 + 0) - 
                p_over_q * *(b + 1441 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1053 * OS1_S1 + 0);
            *(b + 1237 * OS1_S1 + 3) = prefactor_z * *(b + 1237 * OS1_S1 + 0) - 
                p_over_q * *(b + 1442 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1052 * OS1_S1 + 0);
            *(b + 1238 * OS1_S1 + 1) = prefactor_x * *(b + 1238 * OS1_S1 + 0) - 
                p_over_q * *(b + 1428 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1067 * OS1_S1 + 0);
            *(b + 1238 * OS1_S1 + 2) = prefactor_y * *(b + 1238 * OS1_S1 + 0) - 
                p_over_q * *(b + 1442 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1054 * OS1_S1 + 0);
            *(b + 1238 * OS1_S1 + 3) = prefactor_z * *(b + 1238 * OS1_S1 + 0) - 
                p_over_q * *(b + 1443 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1053 * OS1_S1 + 0);
            *(b + 1239 * OS1_S1 + 1) = prefactor_x * *(b + 1239 * OS1_S1 + 0) - 
                p_over_q * *(b + 1429 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1068 * OS1_S1 + 0);
            *(b + 1239 * OS1_S1 + 2) = prefactor_y * *(b + 1239 * OS1_S1 + 0) - 
                p_over_q * *(b + 1443 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1055 * OS1_S1 + 0);
            *(b + 1239 * OS1_S1 + 3) = prefactor_z * *(b + 1239 * OS1_S1 + 0) - 
                p_over_q * *(b + 1444 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1054 * OS1_S1 + 0);
            *(b + 1240 * OS1_S1 + 1) = prefactor_x * *(b + 1240 * OS1_S1 + 0) - 
                p_over_q * *(b + 1430 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1069 * OS1_S1 + 0);
            *(b + 1240 * OS1_S1 + 2) = prefactor_y * *(b + 1240 * OS1_S1 + 0) - 
                p_over_q * *(b + 1444 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1056 * OS1_S1 + 0);
            *(b + 1240 * OS1_S1 + 3) = prefactor_z * *(b + 1240 * OS1_S1 + 0) - 
                p_over_q * *(b + 1445 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1055 * OS1_S1 + 0);
            *(b + 1241 * OS1_S1 + 1) = prefactor_x * *(b + 1241 * OS1_S1 + 0) - 
                p_over_q * *(b + 1431 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1070 * OS1_S1 + 0);
            *(b + 1241 * OS1_S1 + 2) = prefactor_y * *(b + 1241 * OS1_S1 + 0) - 
                p_over_q * *(b + 1445 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1057 * OS1_S1 + 0);
            *(b + 1241 * OS1_S1 + 3) = prefactor_z * *(b + 1241 * OS1_S1 + 0) - 
                p_over_q * *(b + 1446 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1056 * OS1_S1 + 0);
            *(b + 1242 * OS1_S1 + 1) = prefactor_x * *(b + 1242 * OS1_S1 + 0) - 
                p_over_q * *(b + 1432 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1071 * OS1_S1 + 0);
            *(b + 1242 * OS1_S1 + 2) = prefactor_y * *(b + 1242 * OS1_S1 + 0) - 
                p_over_q * *(b + 1446 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1058 * OS1_S1 + 0);
            *(b + 1242 * OS1_S1 + 3) = prefactor_z * *(b + 1242 * OS1_S1 + 0) - 
                p_over_q * *(b + 1447 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1057 * OS1_S1 + 0);
            *(b + 1243 * OS1_S1 + 1) = prefactor_x * *(b + 1243 * OS1_S1 + 0) - 
                p_over_q * *(b + 1433 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1072 * OS1_S1 + 0);
            *(b + 1243 * OS1_S1 + 2) = prefactor_y * *(b + 1243 * OS1_S1 + 0) - 
                p_over_q * *(b + 1447 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1059 * OS1_S1 + 0);
            *(b + 1243 * OS1_S1 + 3) = prefactor_z * *(b + 1243 * OS1_S1 + 0) - 
                p_over_q * *(b + 1448 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1058 * OS1_S1 + 0);
            *(b + 1244 * OS1_S1 + 1) = prefactor_x * *(b + 1244 * OS1_S1 + 0) - 
                p_over_q * *(b + 1434 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1073 * OS1_S1 + 0);
            *(b + 1244 * OS1_S1 + 2) = prefactor_y * *(b + 1244 * OS1_S1 + 0) - 
                p_over_q * *(b + 1448 * OS1_S1 + 0);
            *(b + 1244 * OS1_S1 + 3) = prefactor_z * *(b + 1244 * OS1_S1 + 0) - 
                p_over_q * *(b + 1449 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1059 * OS1_S1 + 0);
            *(b + 1245 * OS1_S1 + 1) = prefactor_x * *(b + 1245 * OS1_S1 + 0) - 
                p_over_q * *(b + 1435 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1074 * OS1_S1 + 0);
            *(b + 1245 * OS1_S1 + 2) = prefactor_y * *(b + 1245 * OS1_S1 + 0) - 
                p_over_q * *(b + 1450 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1060 * OS1_S1 + 0);
            *(b + 1245 * OS1_S1 + 3) = prefactor_z * *(b + 1245 * OS1_S1 + 0) - 
                p_over_q * *(b + 1451 * OS1_S1 + 0);
            *(b + 1246 * OS1_S1 + 1) = prefactor_x * *(b + 1246 * OS1_S1 + 0) - 
                p_over_q * *(b + 1436 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1075 * OS1_S1 + 0);
            *(b + 1246 * OS1_S1 + 2) = prefactor_y * *(b + 1246 * OS1_S1 + 0) - 
                p_over_q * *(b + 1451 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1061 * OS1_S1 + 0);
            *(b + 1246 * OS1_S1 + 3) = prefactor_z * *(b + 1246 * OS1_S1 + 0) - 
                p_over_q * *(b + 1452 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1060 * OS1_S1 + 0);
            *(b + 1247 * OS1_S1 + 1) = prefactor_x * *(b + 1247 * OS1_S1 + 0) - 
                p_over_q * *(b + 1437 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1076 * OS1_S1 + 0);
            *(b + 1247 * OS1_S1 + 2) = prefactor_y * *(b + 1247 * OS1_S1 + 0) - 
                p_over_q * *(b + 1452 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1062 * OS1_S1 + 0);
            *(b + 1247 * OS1_S1 + 3) = prefactor_z * *(b + 1247 * OS1_S1 + 0) - 
                p_over_q * *(b + 1453 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1061 * OS1_S1 + 0);
            *(b + 1248 * OS1_S1 + 1) = prefactor_x * *(b + 1248 * OS1_S1 + 0) - 
                p_over_q * *(b + 1438 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1077 * OS1_S1 + 0);
            *(b + 1248 * OS1_S1 + 2) = prefactor_y * *(b + 1248 * OS1_S1 + 0) - 
                p_over_q * *(b + 1453 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1063 * OS1_S1 + 0);
            *(b + 1248 * OS1_S1 + 3) = prefactor_z * *(b + 1248 * OS1_S1 + 0) - 
                p_over_q * *(b + 1454 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1062 * OS1_S1 + 0);
            *(b + 1249 * OS1_S1 + 1) = prefactor_x * *(b + 1249 * OS1_S1 + 0) - 
                p_over_q * *(b + 1439 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1078 * OS1_S1 + 0);
            *(b + 1249 * OS1_S1 + 2) = prefactor_y * *(b + 1249 * OS1_S1 + 0) - 
                p_over_q * *(b + 1454 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1064 * OS1_S1 + 0);
            *(b + 1249 * OS1_S1 + 3) = prefactor_z * *(b + 1249 * OS1_S1 + 0) - 
                p_over_q * *(b + 1455 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1063 * OS1_S1 + 0);
            *(b + 1250 * OS1_S1 + 1) = prefactor_x * *(b + 1250 * OS1_S1 + 0) - 
                p_over_q * *(b + 1440 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1079 * OS1_S1 + 0);
            *(b + 1250 * OS1_S1 + 2) = prefactor_y * *(b + 1250 * OS1_S1 + 0) - 
                p_over_q * *(b + 1455 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1065 * OS1_S1 + 0);
            *(b + 1250 * OS1_S1 + 3) = prefactor_z * *(b + 1250 * OS1_S1 + 0) - 
                p_over_q * *(b + 1456 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1064 * OS1_S1 + 0);
            *(b + 1251 * OS1_S1 + 1) = prefactor_x * *(b + 1251 * OS1_S1 + 0) - 
                p_over_q * *(b + 1441 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1080 * OS1_S1 + 0);
            *(b + 1251 * OS1_S1 + 2) = prefactor_y * *(b + 1251 * OS1_S1 + 0) - 
                p_over_q * *(b + 1456 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1066 * OS1_S1 + 0);
            *(b + 1251 * OS1_S1 + 3) = prefactor_z * *(b + 1251 * OS1_S1 + 0) - 
                p_over_q * *(b + 1457 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1065 * OS1_S1 + 0);
            *(b + 1252 * OS1_S1 + 1) = prefactor_x * *(b + 1252 * OS1_S1 + 0) - 
                p_over_q * *(b + 1442 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1081 * OS1_S1 + 0);
            *(b + 1252 * OS1_S1 + 2) = prefactor_y * *(b + 1252 * OS1_S1 + 0) - 
                p_over_q * *(b + 1457 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1067 * OS1_S1 + 0);
            *(b + 1252 * OS1_S1 + 3) = prefactor_z * *(b + 1252 * OS1_S1 + 0) - 
                p_over_q * *(b + 1458 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1066 * OS1_S1 + 0);
            *(b + 1253 * OS1_S1 + 1) = prefactor_x * *(b + 1253 * OS1_S1 + 0) - 
                p_over_q * *(b + 1443 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1082 * OS1_S1 + 0);
            *(b + 1253 * OS1_S1 + 2) = prefactor_y * *(b + 1253 * OS1_S1 + 0) - 
                p_over_q * *(b + 1458 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1068 * OS1_S1 + 0);
            *(b + 1253 * OS1_S1 + 3) = prefactor_z * *(b + 1253 * OS1_S1 + 0) - 
                p_over_q * *(b + 1459 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1067 * OS1_S1 + 0);
            *(b + 1254 * OS1_S1 + 1) = prefactor_x * *(b + 1254 * OS1_S1 + 0) - 
                p_over_q * *(b + 1444 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1083 * OS1_S1 + 0);
            *(b + 1254 * OS1_S1 + 2) = prefactor_y * *(b + 1254 * OS1_S1 + 0) - 
                p_over_q * *(b + 1459 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1069 * OS1_S1 + 0);
            *(b + 1254 * OS1_S1 + 3) = prefactor_z * *(b + 1254 * OS1_S1 + 0) - 
                p_over_q * *(b + 1460 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1068 * OS1_S1 + 0);
            *(b + 1255 * OS1_S1 + 1) = prefactor_x * *(b + 1255 * OS1_S1 + 0) - 
                p_over_q * *(b + 1445 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1084 * OS1_S1 + 0);
            *(b + 1255 * OS1_S1 + 2) = prefactor_y * *(b + 1255 * OS1_S1 + 0) - 
                p_over_q * *(b + 1460 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1070 * OS1_S1 + 0);
            *(b + 1255 * OS1_S1 + 3) = prefactor_z * *(b + 1255 * OS1_S1 + 0) - 
                p_over_q * *(b + 1461 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1069 * OS1_S1 + 0);
            *(b + 1256 * OS1_S1 + 1) = prefactor_x * *(b + 1256 * OS1_S1 + 0) - 
                p_over_q * *(b + 1446 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1085 * OS1_S1 + 0);
            *(b + 1256 * OS1_S1 + 2) = prefactor_y * *(b + 1256 * OS1_S1 + 0) - 
                p_over_q * *(b + 1461 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1071 * OS1_S1 + 0);
            *(b + 1256 * OS1_S1 + 3) = prefactor_z * *(b + 1256 * OS1_S1 + 0) - 
                p_over_q * *(b + 1462 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1070 * OS1_S1 + 0);
            *(b + 1257 * OS1_S1 + 1) = prefactor_x * *(b + 1257 * OS1_S1 + 0) - 
                p_over_q * *(b + 1447 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1086 * OS1_S1 + 0);
            *(b + 1257 * OS1_S1 + 2) = prefactor_y * *(b + 1257 * OS1_S1 + 0) - 
                p_over_q * *(b + 1462 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1072 * OS1_S1 + 0);
            *(b + 1257 * OS1_S1 + 3) = prefactor_z * *(b + 1257 * OS1_S1 + 0) - 
                p_over_q * *(b + 1463 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1071 * OS1_S1 + 0);
            *(b + 1258 * OS1_S1 + 1) = prefactor_x * *(b + 1258 * OS1_S1 + 0) - 
                p_over_q * *(b + 1448 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1087 * OS1_S1 + 0);
            *(b + 1258 * OS1_S1 + 2) = prefactor_y * *(b + 1258 * OS1_S1 + 0) - 
                p_over_q * *(b + 1463 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1073 * OS1_S1 + 0);
            *(b + 1258 * OS1_S1 + 3) = prefactor_z * *(b + 1258 * OS1_S1 + 0) - 
                p_over_q * *(b + 1464 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1072 * OS1_S1 + 0);
            *(b + 1259 * OS1_S1 + 1) = prefactor_x * *(b + 1259 * OS1_S1 + 0) - 
                p_over_q * *(b + 1449 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1088 * OS1_S1 + 0);
            *(b + 1259 * OS1_S1 + 2) = prefactor_y * *(b + 1259 * OS1_S1 + 0) - 
                p_over_q * *(b + 1464 * OS1_S1 + 0);
            *(b + 1259 * OS1_S1 + 3) = prefactor_z * *(b + 1259 * OS1_S1 + 0) - 
                p_over_q * *(b + 1465 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1073 * OS1_S1 + 0);
            *(b + 1260 * OS1_S1 + 1) = prefactor_x * *(b + 1260 * OS1_S1 + 0) - 
                p_over_q * *(b + 1450 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1089 * OS1_S1 + 0);
            *(b + 1260 * OS1_S1 + 2) = prefactor_y * *(b + 1260 * OS1_S1 + 0) - 
                p_over_q * *(b + 1466 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1074 * OS1_S1 + 0);
            *(b + 1260 * OS1_S1 + 3) = prefactor_z * *(b + 1260 * OS1_S1 + 0) - 
                p_over_q * *(b + 1467 * OS1_S1 + 0);
            *(b + 1261 * OS1_S1 + 1) = prefactor_x * *(b + 1261 * OS1_S1 + 0) - 
                p_over_q * *(b + 1451 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1090 * OS1_S1 + 0);
            *(b + 1261 * OS1_S1 + 2) = prefactor_y * *(b + 1261 * OS1_S1 + 0) - 
                p_over_q * *(b + 1467 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1075 * OS1_S1 + 0);
            *(b + 1261 * OS1_S1 + 3) = prefactor_z * *(b + 1261 * OS1_S1 + 0) - 
                p_over_q * *(b + 1468 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1074 * OS1_S1 + 0);
            *(b + 1262 * OS1_S1 + 1) = prefactor_x * *(b + 1262 * OS1_S1 + 0) - 
                p_over_q * *(b + 1452 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1091 * OS1_S1 + 0);
            *(b + 1262 * OS1_S1 + 2) = prefactor_y * *(b + 1262 * OS1_S1 + 0) - 
                p_over_q * *(b + 1468 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1076 * OS1_S1 + 0);
            *(b + 1262 * OS1_S1 + 3) = prefactor_z * *(b + 1262 * OS1_S1 + 0) - 
                p_over_q * *(b + 1469 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1075 * OS1_S1 + 0);
            *(b + 1263 * OS1_S1 + 1) = prefactor_x * *(b + 1263 * OS1_S1 + 0) - 
                p_over_q * *(b + 1453 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1092 * OS1_S1 + 0);
            *(b + 1263 * OS1_S1 + 2) = prefactor_y * *(b + 1263 * OS1_S1 + 0) - 
                p_over_q * *(b + 1469 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1077 * OS1_S1 + 0);
            *(b + 1263 * OS1_S1 + 3) = prefactor_z * *(b + 1263 * OS1_S1 + 0) - 
                p_over_q * *(b + 1470 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1076 * OS1_S1 + 0);
            *(b + 1264 * OS1_S1 + 1) = prefactor_x * *(b + 1264 * OS1_S1 + 0) - 
                p_over_q * *(b + 1454 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1093 * OS1_S1 + 0);
            *(b + 1264 * OS1_S1 + 2) = prefactor_y * *(b + 1264 * OS1_S1 + 0) - 
                p_over_q * *(b + 1470 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1078 * OS1_S1 + 0);
            *(b + 1264 * OS1_S1 + 3) = prefactor_z * *(b + 1264 * OS1_S1 + 0) - 
                p_over_q * *(b + 1471 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1077 * OS1_S1 + 0);
            *(b + 1265 * OS1_S1 + 1) = prefactor_x * *(b + 1265 * OS1_S1 + 0) - 
                p_over_q * *(b + 1455 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1094 * OS1_S1 + 0);
            *(b + 1265 * OS1_S1 + 2) = prefactor_y * *(b + 1265 * OS1_S1 + 0) - 
                p_over_q * *(b + 1471 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1079 * OS1_S1 + 0);
            *(b + 1265 * OS1_S1 + 3) = prefactor_z * *(b + 1265 * OS1_S1 + 0) - 
                p_over_q * *(b + 1472 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1078 * OS1_S1 + 0);
            *(b + 1266 * OS1_S1 + 1) = prefactor_x * *(b + 1266 * OS1_S1 + 0) - 
                p_over_q * *(b + 1456 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1095 * OS1_S1 + 0);
            *(b + 1266 * OS1_S1 + 2) = prefactor_y * *(b + 1266 * OS1_S1 + 0) - 
                p_over_q * *(b + 1472 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1080 * OS1_S1 + 0);
            *(b + 1266 * OS1_S1 + 3) = prefactor_z * *(b + 1266 * OS1_S1 + 0) - 
                p_over_q * *(b + 1473 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1079 * OS1_S1 + 0);
            *(b + 1267 * OS1_S1 + 1) = prefactor_x * *(b + 1267 * OS1_S1 + 0) - 
                p_over_q * *(b + 1457 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1096 * OS1_S1 + 0);
            *(b + 1267 * OS1_S1 + 2) = prefactor_y * *(b + 1267 * OS1_S1 + 0) - 
                p_over_q * *(b + 1473 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1081 * OS1_S1 + 0);
            *(b + 1267 * OS1_S1 + 3) = prefactor_z * *(b + 1267 * OS1_S1 + 0) - 
                p_over_q * *(b + 1474 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1080 * OS1_S1 + 0);
            *(b + 1268 * OS1_S1 + 1) = prefactor_x * *(b + 1268 * OS1_S1 + 0) - 
                p_over_q * *(b + 1458 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1097 * OS1_S1 + 0);
            *(b + 1268 * OS1_S1 + 2) = prefactor_y * *(b + 1268 * OS1_S1 + 0) - 
                p_over_q * *(b + 1474 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1082 * OS1_S1 + 0);
            *(b + 1268 * OS1_S1 + 3) = prefactor_z * *(b + 1268 * OS1_S1 + 0) - 
                p_over_q * *(b + 1475 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1081 * OS1_S1 + 0);
            *(b + 1269 * OS1_S1 + 1) = prefactor_x * *(b + 1269 * OS1_S1 + 0) - 
                p_over_q * *(b + 1459 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1098 * OS1_S1 + 0);
            *(b + 1269 * OS1_S1 + 2) = prefactor_y * *(b + 1269 * OS1_S1 + 0) - 
                p_over_q * *(b + 1475 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1083 * OS1_S1 + 0);
            *(b + 1269 * OS1_S1 + 3) = prefactor_z * *(b + 1269 * OS1_S1 + 0) - 
                p_over_q * *(b + 1476 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1082 * OS1_S1 + 0);
            *(b + 1270 * OS1_S1 + 1) = prefactor_x * *(b + 1270 * OS1_S1 + 0) - 
                p_over_q * *(b + 1460 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1099 * OS1_S1 + 0);
            *(b + 1270 * OS1_S1 + 2) = prefactor_y * *(b + 1270 * OS1_S1 + 0) - 
                p_over_q * *(b + 1476 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1084 * OS1_S1 + 0);
            *(b + 1270 * OS1_S1 + 3) = prefactor_z * *(b + 1270 * OS1_S1 + 0) - 
                p_over_q * *(b + 1477 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1083 * OS1_S1 + 0);
            *(b + 1271 * OS1_S1 + 1) = prefactor_x * *(b + 1271 * OS1_S1 + 0) - 
                p_over_q * *(b + 1461 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1100 * OS1_S1 + 0);
            *(b + 1271 * OS1_S1 + 2) = prefactor_y * *(b + 1271 * OS1_S1 + 0) - 
                p_over_q * *(b + 1477 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1085 * OS1_S1 + 0);
            *(b + 1271 * OS1_S1 + 3) = prefactor_z * *(b + 1271 * OS1_S1 + 0) - 
                p_over_q * *(b + 1478 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1084 * OS1_S1 + 0);
            *(b + 1272 * OS1_S1 + 1) = prefactor_x * *(b + 1272 * OS1_S1 + 0) - 
                p_over_q * *(b + 1462 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1101 * OS1_S1 + 0);
            *(b + 1272 * OS1_S1 + 2) = prefactor_y * *(b + 1272 * OS1_S1 + 0) - 
                p_over_q * *(b + 1478 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1086 * OS1_S1 + 0);
            *(b + 1272 * OS1_S1 + 3) = prefactor_z * *(b + 1272 * OS1_S1 + 0) - 
                p_over_q * *(b + 1479 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1085 * OS1_S1 + 0);
            *(b + 1273 * OS1_S1 + 1) = prefactor_x * *(b + 1273 * OS1_S1 + 0) - 
                p_over_q * *(b + 1463 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1102 * OS1_S1 + 0);
            *(b + 1273 * OS1_S1 + 2) = prefactor_y * *(b + 1273 * OS1_S1 + 0) - 
                p_over_q * *(b + 1479 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1087 * OS1_S1 + 0);
            *(b + 1273 * OS1_S1 + 3) = prefactor_z * *(b + 1273 * OS1_S1 + 0) - 
                p_over_q * *(b + 1480 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1086 * OS1_S1 + 0);
            *(b + 1274 * OS1_S1 + 1) = prefactor_x * *(b + 1274 * OS1_S1 + 0) - 
                p_over_q * *(b + 1464 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1103 * OS1_S1 + 0);
            *(b + 1274 * OS1_S1 + 2) = prefactor_y * *(b + 1274 * OS1_S1 + 0) - 
                p_over_q * *(b + 1480 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1088 * OS1_S1 + 0);
            *(b + 1274 * OS1_S1 + 3) = prefactor_z * *(b + 1274 * OS1_S1 + 0) - 
                p_over_q * *(b + 1481 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1087 * OS1_S1 + 0);
            *(b + 1275 * OS1_S1 + 1) = prefactor_x * *(b + 1275 * OS1_S1 + 0) - 
                p_over_q * *(b + 1465 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1104 * OS1_S1 + 0);
            *(b + 1275 * OS1_S1 + 2) = prefactor_y * *(b + 1275 * OS1_S1 + 0) - 
                p_over_q * *(b + 1481 * OS1_S1 + 0);
            *(b + 1275 * OS1_S1 + 3) = prefactor_z * *(b + 1275 * OS1_S1 + 0) - 
                p_over_q * *(b + 1482 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1088 * OS1_S1 + 0);
            *(b + 1276 * OS1_S1 + 1) = prefactor_x * *(b + 1276 * OS1_S1 + 0) - 
                p_over_q * *(b + 1466 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1105 * OS1_S1 + 0);
            *(b + 1276 * OS1_S1 + 2) = prefactor_y * *(b + 1276 * OS1_S1 + 0) - 
                p_over_q * *(b + 1483 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1089 * OS1_S1 + 0);
            *(b + 1276 * OS1_S1 + 3) = prefactor_z * *(b + 1276 * OS1_S1 + 0) - 
                p_over_q * *(b + 1484 * OS1_S1 + 0);
            *(b + 1277 * OS1_S1 + 1) = prefactor_x * *(b + 1277 * OS1_S1 + 0) - 
                p_over_q * *(b + 1467 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1106 * OS1_S1 + 0);
            *(b + 1277 * OS1_S1 + 2) = prefactor_y * *(b + 1277 * OS1_S1 + 0) - 
                p_over_q * *(b + 1484 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1090 * OS1_S1 + 0);
            *(b + 1277 * OS1_S1 + 3) = prefactor_z * *(b + 1277 * OS1_S1 + 0) - 
                p_over_q * *(b + 1485 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1089 * OS1_S1 + 0);
            *(b + 1278 * OS1_S1 + 1) = prefactor_x * *(b + 1278 * OS1_S1 + 0) - 
                p_over_q * *(b + 1468 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1107 * OS1_S1 + 0);
            *(b + 1278 * OS1_S1 + 2) = prefactor_y * *(b + 1278 * OS1_S1 + 0) - 
                p_over_q * *(b + 1485 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1091 * OS1_S1 + 0);
            *(b + 1278 * OS1_S1 + 3) = prefactor_z * *(b + 1278 * OS1_S1 + 0) - 
                p_over_q * *(b + 1486 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1090 * OS1_S1 + 0);
            *(b + 1279 * OS1_S1 + 1) = prefactor_x * *(b + 1279 * OS1_S1 + 0) - 
                p_over_q * *(b + 1469 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1108 * OS1_S1 + 0);
            *(b + 1279 * OS1_S1 + 2) = prefactor_y * *(b + 1279 * OS1_S1 + 0) - 
                p_over_q * *(b + 1486 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1092 * OS1_S1 + 0);
            *(b + 1279 * OS1_S1 + 3) = prefactor_z * *(b + 1279 * OS1_S1 + 0) - 
                p_over_q * *(b + 1487 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1091 * OS1_S1 + 0);
            *(b + 1280 * OS1_S1 + 1) = prefactor_x * *(b + 1280 * OS1_S1 + 0) - 
                p_over_q * *(b + 1470 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1109 * OS1_S1 + 0);
            *(b + 1280 * OS1_S1 + 2) = prefactor_y * *(b + 1280 * OS1_S1 + 0) - 
                p_over_q * *(b + 1487 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1093 * OS1_S1 + 0);
            *(b + 1280 * OS1_S1 + 3) = prefactor_z * *(b + 1280 * OS1_S1 + 0) - 
                p_over_q * *(b + 1488 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1092 * OS1_S1 + 0);
            *(b + 1281 * OS1_S1 + 1) = prefactor_x * *(b + 1281 * OS1_S1 + 0) - 
                p_over_q * *(b + 1471 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1110 * OS1_S1 + 0);
            *(b + 1281 * OS1_S1 + 2) = prefactor_y * *(b + 1281 * OS1_S1 + 0) - 
                p_over_q * *(b + 1488 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1094 * OS1_S1 + 0);
            *(b + 1281 * OS1_S1 + 3) = prefactor_z * *(b + 1281 * OS1_S1 + 0) - 
                p_over_q * *(b + 1489 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1093 * OS1_S1 + 0);
            *(b + 1282 * OS1_S1 + 1) = prefactor_x * *(b + 1282 * OS1_S1 + 0) - 
                p_over_q * *(b + 1472 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1111 * OS1_S1 + 0);
            *(b + 1282 * OS1_S1 + 2) = prefactor_y * *(b + 1282 * OS1_S1 + 0) - 
                p_over_q * *(b + 1489 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1095 * OS1_S1 + 0);
            *(b + 1282 * OS1_S1 + 3) = prefactor_z * *(b + 1282 * OS1_S1 + 0) - 
                p_over_q * *(b + 1490 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1094 * OS1_S1 + 0);
            *(b + 1283 * OS1_S1 + 1) = prefactor_x * *(b + 1283 * OS1_S1 + 0) - 
                p_over_q * *(b + 1473 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1112 * OS1_S1 + 0);
            *(b + 1283 * OS1_S1 + 2) = prefactor_y * *(b + 1283 * OS1_S1 + 0) - 
                p_over_q * *(b + 1490 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1096 * OS1_S1 + 0);
            *(b + 1283 * OS1_S1 + 3) = prefactor_z * *(b + 1283 * OS1_S1 + 0) - 
                p_over_q * *(b + 1491 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1095 * OS1_S1 + 0);
            *(b + 1284 * OS1_S1 + 1) = prefactor_x * *(b + 1284 * OS1_S1 + 0) - 
                p_over_q * *(b + 1474 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1113 * OS1_S1 + 0);
            *(b + 1284 * OS1_S1 + 2) = prefactor_y * *(b + 1284 * OS1_S1 + 0) - 
                p_over_q * *(b + 1491 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1097 * OS1_S1 + 0);
            *(b + 1284 * OS1_S1 + 3) = prefactor_z * *(b + 1284 * OS1_S1 + 0) - 
                p_over_q * *(b + 1492 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1096 * OS1_S1 + 0);
            *(b + 1285 * OS1_S1 + 1) = prefactor_x * *(b + 1285 * OS1_S1 + 0) - 
                p_over_q * *(b + 1475 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1114 * OS1_S1 + 0);
            *(b + 1285 * OS1_S1 + 2) = prefactor_y * *(b + 1285 * OS1_S1 + 0) - 
                p_over_q * *(b + 1492 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1098 * OS1_S1 + 0);
            *(b + 1285 * OS1_S1 + 3) = prefactor_z * *(b + 1285 * OS1_S1 + 0) - 
                p_over_q * *(b + 1493 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1097 * OS1_S1 + 0);
            *(b + 1286 * OS1_S1 + 1) = prefactor_x * *(b + 1286 * OS1_S1 + 0) - 
                p_over_q * *(b + 1476 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1115 * OS1_S1 + 0);
            *(b + 1286 * OS1_S1 + 2) = prefactor_y * *(b + 1286 * OS1_S1 + 0) - 
                p_over_q * *(b + 1493 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1099 * OS1_S1 + 0);
            *(b + 1286 * OS1_S1 + 3) = prefactor_z * *(b + 1286 * OS1_S1 + 0) - 
                p_over_q * *(b + 1494 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1098 * OS1_S1 + 0);
            *(b + 1287 * OS1_S1 + 1) = prefactor_x * *(b + 1287 * OS1_S1 + 0) - 
                p_over_q * *(b + 1477 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1116 * OS1_S1 + 0);
            *(b + 1287 * OS1_S1 + 2) = prefactor_y * *(b + 1287 * OS1_S1 + 0) - 
                p_over_q * *(b + 1494 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1100 * OS1_S1 + 0);
            *(b + 1287 * OS1_S1 + 3) = prefactor_z * *(b + 1287 * OS1_S1 + 0) - 
                p_over_q * *(b + 1495 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1099 * OS1_S1 + 0);
            *(b + 1288 * OS1_S1 + 1) = prefactor_x * *(b + 1288 * OS1_S1 + 0) - 
                p_over_q * *(b + 1478 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1117 * OS1_S1 + 0);
            *(b + 1288 * OS1_S1 + 2) = prefactor_y * *(b + 1288 * OS1_S1 + 0) - 
                p_over_q * *(b + 1495 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1101 * OS1_S1 + 0);
            *(b + 1288 * OS1_S1 + 3) = prefactor_z * *(b + 1288 * OS1_S1 + 0) - 
                p_over_q * *(b + 1496 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1100 * OS1_S1 + 0);
            *(b + 1289 * OS1_S1 + 1) = prefactor_x * *(b + 1289 * OS1_S1 + 0) - 
                p_over_q * *(b + 1479 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1118 * OS1_S1 + 0);
            *(b + 1289 * OS1_S1 + 2) = prefactor_y * *(b + 1289 * OS1_S1 + 0) - 
                p_over_q * *(b + 1496 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1102 * OS1_S1 + 0);
            *(b + 1289 * OS1_S1 + 3) = prefactor_z * *(b + 1289 * OS1_S1 + 0) - 
                p_over_q * *(b + 1497 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1101 * OS1_S1 + 0);
            *(b + 1290 * OS1_S1 + 1) = prefactor_x * *(b + 1290 * OS1_S1 + 0) - 
                p_over_q * *(b + 1480 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1119 * OS1_S1 + 0);
            *(b + 1290 * OS1_S1 + 2) = prefactor_y * *(b + 1290 * OS1_S1 + 0) - 
                p_over_q * *(b + 1497 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1103 * OS1_S1 + 0);
            *(b + 1290 * OS1_S1 + 3) = prefactor_z * *(b + 1290 * OS1_S1 + 0) - 
                p_over_q * *(b + 1498 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1102 * OS1_S1 + 0);
            *(b + 1291 * OS1_S1 + 1) = prefactor_x * *(b + 1291 * OS1_S1 + 0) - 
                p_over_q * *(b + 1481 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1120 * OS1_S1 + 0);
            *(b + 1291 * OS1_S1 + 2) = prefactor_y * *(b + 1291 * OS1_S1 + 0) - 
                p_over_q * *(b + 1498 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1104 * OS1_S1 + 0);
            *(b + 1291 * OS1_S1 + 3) = prefactor_z * *(b + 1291 * OS1_S1 + 0) - 
                p_over_q * *(b + 1499 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1103 * OS1_S1 + 0);
            *(b + 1292 * OS1_S1 + 1) = prefactor_x * *(b + 1292 * OS1_S1 + 0) - 
                p_over_q * *(b + 1482 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1121 * OS1_S1 + 0);
            *(b + 1292 * OS1_S1 + 2) = prefactor_y * *(b + 1292 * OS1_S1 + 0) - 
                p_over_q * *(b + 1499 * OS1_S1 + 0);
            *(b + 1292 * OS1_S1 + 3) = prefactor_z * *(b + 1292 * OS1_S1 + 0) - 
                p_over_q * *(b + 1500 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1104 * OS1_S1 + 0);
            *(b + 1293 * OS1_S1 + 1) = prefactor_x * *(b + 1293 * OS1_S1 + 0) - 
                p_over_q * *(b + 1483 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1122 * OS1_S1 + 0);
            *(b + 1293 * OS1_S1 + 2) = prefactor_y * *(b + 1293 * OS1_S1 + 0) - 
                p_over_q * *(b + 1501 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1105 * OS1_S1 + 0);
            *(b + 1293 * OS1_S1 + 3) = prefactor_z * *(b + 1293 * OS1_S1 + 0) - 
                p_over_q * *(b + 1502 * OS1_S1 + 0);
            *(b + 1294 * OS1_S1 + 1) = prefactor_x * *(b + 1294 * OS1_S1 + 0) - 
                p_over_q * *(b + 1484 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1123 * OS1_S1 + 0);
            *(b + 1294 * OS1_S1 + 2) = prefactor_y * *(b + 1294 * OS1_S1 + 0) - 
                p_over_q * *(b + 1502 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1106 * OS1_S1 + 0);
            *(b + 1294 * OS1_S1 + 3) = prefactor_z * *(b + 1294 * OS1_S1 + 0) - 
                p_over_q * *(b + 1503 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1105 * OS1_S1 + 0);
            *(b + 1295 * OS1_S1 + 1) = prefactor_x * *(b + 1295 * OS1_S1 + 0) - 
                p_over_q * *(b + 1485 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1124 * OS1_S1 + 0);
            *(b + 1295 * OS1_S1 + 2) = prefactor_y * *(b + 1295 * OS1_S1 + 0) - 
                p_over_q * *(b + 1503 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1107 * OS1_S1 + 0);
            *(b + 1295 * OS1_S1 + 3) = prefactor_z * *(b + 1295 * OS1_S1 + 0) - 
                p_over_q * *(b + 1504 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1106 * OS1_S1 + 0);
            *(b + 1296 * OS1_S1 + 1) = prefactor_x * *(b + 1296 * OS1_S1 + 0) - 
                p_over_q * *(b + 1486 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1125 * OS1_S1 + 0);
            *(b + 1296 * OS1_S1 + 2) = prefactor_y * *(b + 1296 * OS1_S1 + 0) - 
                p_over_q * *(b + 1504 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1108 * OS1_S1 + 0);
            *(b + 1296 * OS1_S1 + 3) = prefactor_z * *(b + 1296 * OS1_S1 + 0) - 
                p_over_q * *(b + 1505 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1107 * OS1_S1 + 0);
            *(b + 1297 * OS1_S1 + 1) = prefactor_x * *(b + 1297 * OS1_S1 + 0) - 
                p_over_q * *(b + 1487 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1126 * OS1_S1 + 0);
            *(b + 1297 * OS1_S1 + 2) = prefactor_y * *(b + 1297 * OS1_S1 + 0) - 
                p_over_q * *(b + 1505 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1109 * OS1_S1 + 0);
            *(b + 1297 * OS1_S1 + 3) = prefactor_z * *(b + 1297 * OS1_S1 + 0) - 
                p_over_q * *(b + 1506 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1108 * OS1_S1 + 0);
            *(b + 1298 * OS1_S1 + 1) = prefactor_x * *(b + 1298 * OS1_S1 + 0) - 
                p_over_q * *(b + 1488 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1127 * OS1_S1 + 0);
            *(b + 1298 * OS1_S1 + 2) = prefactor_y * *(b + 1298 * OS1_S1 + 0) - 
                p_over_q * *(b + 1506 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1110 * OS1_S1 + 0);
            *(b + 1298 * OS1_S1 + 3) = prefactor_z * *(b + 1298 * OS1_S1 + 0) - 
                p_over_q * *(b + 1507 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1109 * OS1_S1 + 0);
            *(b + 1299 * OS1_S1 + 1) = prefactor_x * *(b + 1299 * OS1_S1 + 0) - 
                p_over_q * *(b + 1489 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1128 * OS1_S1 + 0);
            *(b + 1299 * OS1_S1 + 2) = prefactor_y * *(b + 1299 * OS1_S1 + 0) - 
                p_over_q * *(b + 1507 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1111 * OS1_S1 + 0);
            *(b + 1299 * OS1_S1 + 3) = prefactor_z * *(b + 1299 * OS1_S1 + 0) - 
                p_over_q * *(b + 1508 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1110 * OS1_S1 + 0);
            *(b + 1300 * OS1_S1 + 1) = prefactor_x * *(b + 1300 * OS1_S1 + 0) - 
                p_over_q * *(b + 1490 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1129 * OS1_S1 + 0);
            *(b + 1300 * OS1_S1 + 2) = prefactor_y * *(b + 1300 * OS1_S1 + 0) - 
                p_over_q * *(b + 1508 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1112 * OS1_S1 + 0);
            *(b + 1300 * OS1_S1 + 3) = prefactor_z * *(b + 1300 * OS1_S1 + 0) - 
                p_over_q * *(b + 1509 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1111 * OS1_S1 + 0);
            *(b + 1301 * OS1_S1 + 1) = prefactor_x * *(b + 1301 * OS1_S1 + 0) - 
                p_over_q * *(b + 1491 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1130 * OS1_S1 + 0);
            *(b + 1301 * OS1_S1 + 2) = prefactor_y * *(b + 1301 * OS1_S1 + 0) - 
                p_over_q * *(b + 1509 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1113 * OS1_S1 + 0);
            *(b + 1301 * OS1_S1 + 3) = prefactor_z * *(b + 1301 * OS1_S1 + 0) - 
                p_over_q * *(b + 1510 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1112 * OS1_S1 + 0);
            *(b + 1302 * OS1_S1 + 1) = prefactor_x * *(b + 1302 * OS1_S1 + 0) - 
                p_over_q * *(b + 1492 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1131 * OS1_S1 + 0);
            *(b + 1302 * OS1_S1 + 2) = prefactor_y * *(b + 1302 * OS1_S1 + 0) - 
                p_over_q * *(b + 1510 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1114 * OS1_S1 + 0);
            *(b + 1302 * OS1_S1 + 3) = prefactor_z * *(b + 1302 * OS1_S1 + 0) - 
                p_over_q * *(b + 1511 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1113 * OS1_S1 + 0);
            *(b + 1303 * OS1_S1 + 1) = prefactor_x * *(b + 1303 * OS1_S1 + 0) - 
                p_over_q * *(b + 1493 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1132 * OS1_S1 + 0);
            *(b + 1303 * OS1_S1 + 2) = prefactor_y * *(b + 1303 * OS1_S1 + 0) - 
                p_over_q * *(b + 1511 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1115 * OS1_S1 + 0);
            *(b + 1303 * OS1_S1 + 3) = prefactor_z * *(b + 1303 * OS1_S1 + 0) - 
                p_over_q * *(b + 1512 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1114 * OS1_S1 + 0);
            *(b + 1304 * OS1_S1 + 1) = prefactor_x * *(b + 1304 * OS1_S1 + 0) - 
                p_over_q * *(b + 1494 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1133 * OS1_S1 + 0);
            *(b + 1304 * OS1_S1 + 2) = prefactor_y * *(b + 1304 * OS1_S1 + 0) - 
                p_over_q * *(b + 1512 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1116 * OS1_S1 + 0);
            *(b + 1304 * OS1_S1 + 3) = prefactor_z * *(b + 1304 * OS1_S1 + 0) - 
                p_over_q * *(b + 1513 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1115 * OS1_S1 + 0);
            *(b + 1305 * OS1_S1 + 1) = prefactor_x * *(b + 1305 * OS1_S1 + 0) - 
                p_over_q * *(b + 1495 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1134 * OS1_S1 + 0);
            *(b + 1305 * OS1_S1 + 2) = prefactor_y * *(b + 1305 * OS1_S1 + 0) - 
                p_over_q * *(b + 1513 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1117 * OS1_S1 + 0);
            *(b + 1305 * OS1_S1 + 3) = prefactor_z * *(b + 1305 * OS1_S1 + 0) - 
                p_over_q * *(b + 1514 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1116 * OS1_S1 + 0);
            *(b + 1306 * OS1_S1 + 1) = prefactor_x * *(b + 1306 * OS1_S1 + 0) - 
                p_over_q * *(b + 1496 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1135 * OS1_S1 + 0);
            *(b + 1306 * OS1_S1 + 2) = prefactor_y * *(b + 1306 * OS1_S1 + 0) - 
                p_over_q * *(b + 1514 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1118 * OS1_S1 + 0);
            *(b + 1306 * OS1_S1 + 3) = prefactor_z * *(b + 1306 * OS1_S1 + 0) - 
                p_over_q * *(b + 1515 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1117 * OS1_S1 + 0);
            *(b + 1307 * OS1_S1 + 1) = prefactor_x * *(b + 1307 * OS1_S1 + 0) - 
                p_over_q * *(b + 1497 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1136 * OS1_S1 + 0);
            *(b + 1307 * OS1_S1 + 2) = prefactor_y * *(b + 1307 * OS1_S1 + 0) - 
                p_over_q * *(b + 1515 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1119 * OS1_S1 + 0);
            *(b + 1307 * OS1_S1 + 3) = prefactor_z * *(b + 1307 * OS1_S1 + 0) - 
                p_over_q * *(b + 1516 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1118 * OS1_S1 + 0);
            *(b + 1308 * OS1_S1 + 1) = prefactor_x * *(b + 1308 * OS1_S1 + 0) - 
                p_over_q * *(b + 1498 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1137 * OS1_S1 + 0);
            *(b + 1308 * OS1_S1 + 2) = prefactor_y * *(b + 1308 * OS1_S1 + 0) - 
                p_over_q * *(b + 1516 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1120 * OS1_S1 + 0);
            *(b + 1308 * OS1_S1 + 3) = prefactor_z * *(b + 1308 * OS1_S1 + 0) - 
                p_over_q * *(b + 1517 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1119 * OS1_S1 + 0);
            *(b + 1309 * OS1_S1 + 1) = prefactor_x * *(b + 1309 * OS1_S1 + 0) - 
                p_over_q * *(b + 1499 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1138 * OS1_S1 + 0);
            *(b + 1309 * OS1_S1 + 2) = prefactor_y * *(b + 1309 * OS1_S1 + 0) - 
                p_over_q * *(b + 1517 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1121 * OS1_S1 + 0);
            *(b + 1309 * OS1_S1 + 3) = prefactor_z * *(b + 1309 * OS1_S1 + 0) - 
                p_over_q * *(b + 1518 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1120 * OS1_S1 + 0);
            *(b + 1310 * OS1_S1 + 1) = prefactor_x * *(b + 1310 * OS1_S1 + 0) - 
                p_over_q * *(b + 1500 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1139 * OS1_S1 + 0);
            *(b + 1310 * OS1_S1 + 2) = prefactor_y * *(b + 1310 * OS1_S1 + 0) - 
                p_over_q * *(b + 1518 * OS1_S1 + 0);
            *(b + 1310 * OS1_S1 + 3) = prefactor_z * *(b + 1310 * OS1_S1 + 0) - 
                p_over_q * *(b + 1519 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1121 * OS1_S1 + 0);
            *(b + 1311 * OS1_S1 + 1) = prefactor_x * *(b + 1311 * OS1_S1 + 0) - 
                p_over_q * *(b + 1501 * OS1_S1 + 0);
            *(b + 1311 * OS1_S1 + 2) = prefactor_y * *(b + 1311 * OS1_S1 + 0) - 
                p_over_q * *(b + 1520 * OS1_S1 + 0) +
                18 * one_over_two_q * *(b + 1122 * OS1_S1 + 0);
            *(b + 1311 * OS1_S1 + 3) = prefactor_z * *(b + 1311 * OS1_S1 + 0) - 
                p_over_q * *(b + 1521 * OS1_S1 + 0);
            *(b + 1312 * OS1_S1 + 1) = prefactor_x * *(b + 1312 * OS1_S1 + 0) - 
                p_over_q * *(b + 1502 * OS1_S1 + 0);
            *(b + 1312 * OS1_S1 + 2) = prefactor_y * *(b + 1312 * OS1_S1 + 0) - 
                p_over_q * *(b + 1521 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1123 * OS1_S1 + 0);
            *(b + 1312 * OS1_S1 + 3) = prefactor_z * *(b + 1312 * OS1_S1 + 0) - 
                p_over_q * *(b + 1522 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1122 * OS1_S1 + 0);
            *(b + 1313 * OS1_S1 + 1) = prefactor_x * *(b + 1313 * OS1_S1 + 0) - 
                p_over_q * *(b + 1503 * OS1_S1 + 0);
            *(b + 1313 * OS1_S1 + 2) = prefactor_y * *(b + 1313 * OS1_S1 + 0) - 
                p_over_q * *(b + 1522 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1124 * OS1_S1 + 0);
            *(b + 1313 * OS1_S1 + 3) = prefactor_z * *(b + 1313 * OS1_S1 + 0) - 
                p_over_q * *(b + 1523 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1123 * OS1_S1 + 0);
            *(b + 1314 * OS1_S1 + 1) = prefactor_x * *(b + 1314 * OS1_S1 + 0) - 
                p_over_q * *(b + 1504 * OS1_S1 + 0);
            *(b + 1314 * OS1_S1 + 2) = prefactor_y * *(b + 1314 * OS1_S1 + 0) - 
                p_over_q * *(b + 1523 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1125 * OS1_S1 + 0);
            *(b + 1314 * OS1_S1 + 3) = prefactor_z * *(b + 1314 * OS1_S1 + 0) - 
                p_over_q * *(b + 1524 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1124 * OS1_S1 + 0);
            *(b + 1315 * OS1_S1 + 1) = prefactor_x * *(b + 1315 * OS1_S1 + 0) - 
                p_over_q * *(b + 1505 * OS1_S1 + 0);
            *(b + 1315 * OS1_S1 + 2) = prefactor_y * *(b + 1315 * OS1_S1 + 0) - 
                p_over_q * *(b + 1524 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1126 * OS1_S1 + 0);
            *(b + 1315 * OS1_S1 + 3) = prefactor_z * *(b + 1315 * OS1_S1 + 0) - 
                p_over_q * *(b + 1525 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1125 * OS1_S1 + 0);
            *(b + 1316 * OS1_S1 + 1) = prefactor_x * *(b + 1316 * OS1_S1 + 0) - 
                p_over_q * *(b + 1506 * OS1_S1 + 0);
            *(b + 1316 * OS1_S1 + 2) = prefactor_y * *(b + 1316 * OS1_S1 + 0) - 
                p_over_q * *(b + 1525 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1127 * OS1_S1 + 0);
            *(b + 1316 * OS1_S1 + 3) = prefactor_z * *(b + 1316 * OS1_S1 + 0) - 
                p_over_q * *(b + 1526 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1126 * OS1_S1 + 0);
            *(b + 1317 * OS1_S1 + 1) = prefactor_x * *(b + 1317 * OS1_S1 + 0) - 
                p_over_q * *(b + 1507 * OS1_S1 + 0);
            *(b + 1317 * OS1_S1 + 2) = prefactor_y * *(b + 1317 * OS1_S1 + 0) - 
                p_over_q * *(b + 1526 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1128 * OS1_S1 + 0);
            *(b + 1317 * OS1_S1 + 3) = prefactor_z * *(b + 1317 * OS1_S1 + 0) - 
                p_over_q * *(b + 1527 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1127 * OS1_S1 + 0);
            *(b + 1318 * OS1_S1 + 1) = prefactor_x * *(b + 1318 * OS1_S1 + 0) - 
                p_over_q * *(b + 1508 * OS1_S1 + 0);
            *(b + 1318 * OS1_S1 + 2) = prefactor_y * *(b + 1318 * OS1_S1 + 0) - 
                p_over_q * *(b + 1527 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1129 * OS1_S1 + 0);
            *(b + 1318 * OS1_S1 + 3) = prefactor_z * *(b + 1318 * OS1_S1 + 0) - 
                p_over_q * *(b + 1528 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1128 * OS1_S1 + 0);
            *(b + 1319 * OS1_S1 + 1) = prefactor_x * *(b + 1319 * OS1_S1 + 0) - 
                p_over_q * *(b + 1509 * OS1_S1 + 0);
            *(b + 1319 * OS1_S1 + 2) = prefactor_y * *(b + 1319 * OS1_S1 + 0) - 
                p_over_q * *(b + 1528 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1130 * OS1_S1 + 0);
            *(b + 1319 * OS1_S1 + 3) = prefactor_z * *(b + 1319 * OS1_S1 + 0) - 
                p_over_q * *(b + 1529 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1129 * OS1_S1 + 0);
            *(b + 1320 * OS1_S1 + 1) = prefactor_x * *(b + 1320 * OS1_S1 + 0) - 
                p_over_q * *(b + 1510 * OS1_S1 + 0);
            *(b + 1320 * OS1_S1 + 2) = prefactor_y * *(b + 1320 * OS1_S1 + 0) - 
                p_over_q * *(b + 1529 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1131 * OS1_S1 + 0);
            *(b + 1320 * OS1_S1 + 3) = prefactor_z * *(b + 1320 * OS1_S1 + 0) - 
                p_over_q * *(b + 1530 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1130 * OS1_S1 + 0);
            *(b + 1321 * OS1_S1 + 1) = prefactor_x * *(b + 1321 * OS1_S1 + 0) - 
                p_over_q * *(b + 1511 * OS1_S1 + 0);
            *(b + 1321 * OS1_S1 + 2) = prefactor_y * *(b + 1321 * OS1_S1 + 0) - 
                p_over_q * *(b + 1530 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1132 * OS1_S1 + 0);
            *(b + 1321 * OS1_S1 + 3) = prefactor_z * *(b + 1321 * OS1_S1 + 0) - 
                p_over_q * *(b + 1531 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1131 * OS1_S1 + 0);
            *(b + 1322 * OS1_S1 + 1) = prefactor_x * *(b + 1322 * OS1_S1 + 0) - 
                p_over_q * *(b + 1512 * OS1_S1 + 0);
            *(b + 1322 * OS1_S1 + 2) = prefactor_y * *(b + 1322 * OS1_S1 + 0) - 
                p_over_q * *(b + 1531 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1133 * OS1_S1 + 0);
            *(b + 1322 * OS1_S1 + 3) = prefactor_z * *(b + 1322 * OS1_S1 + 0) - 
                p_over_q * *(b + 1532 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1132 * OS1_S1 + 0);
            *(b + 1323 * OS1_S1 + 1) = prefactor_x * *(b + 1323 * OS1_S1 + 0) - 
                p_over_q * *(b + 1513 * OS1_S1 + 0);
            *(b + 1323 * OS1_S1 + 2) = prefactor_y * *(b + 1323 * OS1_S1 + 0) - 
                p_over_q * *(b + 1532 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1134 * OS1_S1 + 0);
            *(b + 1323 * OS1_S1 + 3) = prefactor_z * *(b + 1323 * OS1_S1 + 0) - 
                p_over_q * *(b + 1533 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1133 * OS1_S1 + 0);
            *(b + 1324 * OS1_S1 + 1) = prefactor_x * *(b + 1324 * OS1_S1 + 0) - 
                p_over_q * *(b + 1514 * OS1_S1 + 0);
            *(b + 1324 * OS1_S1 + 2) = prefactor_y * *(b + 1324 * OS1_S1 + 0) - 
                p_over_q * *(b + 1533 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1135 * OS1_S1 + 0);
            *(b + 1324 * OS1_S1 + 3) = prefactor_z * *(b + 1324 * OS1_S1 + 0) - 
                p_over_q * *(b + 1534 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1134 * OS1_S1 + 0);
            *(b + 1325 * OS1_S1 + 1) = prefactor_x * *(b + 1325 * OS1_S1 + 0) - 
                p_over_q * *(b + 1515 * OS1_S1 + 0);
            *(b + 1325 * OS1_S1 + 2) = prefactor_y * *(b + 1325 * OS1_S1 + 0) - 
                p_over_q * *(b + 1534 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1136 * OS1_S1 + 0);
            *(b + 1325 * OS1_S1 + 3) = prefactor_z * *(b + 1325 * OS1_S1 + 0) - 
                p_over_q * *(b + 1535 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1135 * OS1_S1 + 0);
            *(b + 1326 * OS1_S1 + 1) = prefactor_x * *(b + 1326 * OS1_S1 + 0) - 
                p_over_q * *(b + 1516 * OS1_S1 + 0);
            *(b + 1326 * OS1_S1 + 2) = prefactor_y * *(b + 1326 * OS1_S1 + 0) - 
                p_over_q * *(b + 1535 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1137 * OS1_S1 + 0);
            *(b + 1326 * OS1_S1 + 3) = prefactor_z * *(b + 1326 * OS1_S1 + 0) - 
                p_over_q * *(b + 1536 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1136 * OS1_S1 + 0);
            *(b + 1327 * OS1_S1 + 1) = prefactor_x * *(b + 1327 * OS1_S1 + 0) - 
                p_over_q * *(b + 1517 * OS1_S1 + 0);
            *(b + 1327 * OS1_S1 + 2) = prefactor_y * *(b + 1327 * OS1_S1 + 0) - 
                p_over_q * *(b + 1536 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1138 * OS1_S1 + 0);
            *(b + 1327 * OS1_S1 + 3) = prefactor_z * *(b + 1327 * OS1_S1 + 0) - 
                p_over_q * *(b + 1537 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1137 * OS1_S1 + 0);
            *(b + 1328 * OS1_S1 + 1) = prefactor_x * *(b + 1328 * OS1_S1 + 0) - 
                p_over_q * *(b + 1518 * OS1_S1 + 0);
            *(b + 1328 * OS1_S1 + 2) = prefactor_y * *(b + 1328 * OS1_S1 + 0) - 
                p_over_q * *(b + 1537 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1139 * OS1_S1 + 0);
            *(b + 1328 * OS1_S1 + 3) = prefactor_z * *(b + 1328 * OS1_S1 + 0) - 
                p_over_q * *(b + 1538 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1138 * OS1_S1 + 0);
            *(b + 1329 * OS1_S1 + 1) = prefactor_x * *(b + 1329 * OS1_S1 + 0) - 
                p_over_q * *(b + 1519 * OS1_S1 + 0);
            *(b + 1329 * OS1_S1 + 2) = prefactor_y * *(b + 1329 * OS1_S1 + 0) - 
                p_over_q * *(b + 1538 * OS1_S1 + 0);
            *(b + 1329 * OS1_S1 + 3) = prefactor_z * *(b + 1329 * OS1_S1 + 0) - 
                p_over_q * *(b + 1539 * OS1_S1 + 0) +
                18 * one_over_two_q * *(b + 1139 * OS1_S1 + 0);
            return;
        }
        void transfer_19_1(const double prefactor_x,
                           const double prefactor_y,
                           const double prefactor_z,
                           const double p_over_q,
                           const double one_over_two_q,
                           double* NIEDOIDA_RESTRICT b)
        {
            *(b + 1330 * OS1_S1 + 1) = prefactor_x * *(b + 1330 * OS1_S1 + 0) - 
                p_over_q * *(b + 1540 * OS1_S1 + 0) +
                19 * one_over_two_q * *(b + 1140 * OS1_S1 + 0);
            *(b + 1330 * OS1_S1 + 2) = prefactor_y * *(b + 1330 * OS1_S1 + 0) - 
                p_over_q * *(b + 1541 * OS1_S1 + 0);
            *(b + 1330 * OS1_S1 + 3) = prefactor_z * *(b + 1330 * OS1_S1 + 0) - 
                p_over_q * *(b + 1542 * OS1_S1 + 0);
            *(b + 1331 * OS1_S1 + 1) = prefactor_x * *(b + 1331 * OS1_S1 + 0) - 
                p_over_q * *(b + 1541 * OS1_S1 + 0) +
                18 * one_over_two_q * *(b + 1141 * OS1_S1 + 0);
            *(b + 1331 * OS1_S1 + 2) = prefactor_y * *(b + 1331 * OS1_S1 + 0) - 
                p_over_q * *(b + 1543 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1140 * OS1_S1 + 0);
            *(b + 1331 * OS1_S1 + 3) = prefactor_z * *(b + 1331 * OS1_S1 + 0) - 
                p_over_q * *(b + 1544 * OS1_S1 + 0);
            *(b + 1332 * OS1_S1 + 1) = prefactor_x * *(b + 1332 * OS1_S1 + 0) - 
                p_over_q * *(b + 1542 * OS1_S1 + 0) +
                18 * one_over_two_q * *(b + 1142 * OS1_S1 + 0);
            *(b + 1332 * OS1_S1 + 2) = prefactor_y * *(b + 1332 * OS1_S1 + 0) - 
                p_over_q * *(b + 1544 * OS1_S1 + 0);
            *(b + 1332 * OS1_S1 + 3) = prefactor_z * *(b + 1332 * OS1_S1 + 0) - 
                p_over_q * *(b + 1545 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1140 * OS1_S1 + 0);
            *(b + 1333 * OS1_S1 + 1) = prefactor_x * *(b + 1333 * OS1_S1 + 0) - 
                p_over_q * *(b + 1543 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1143 * OS1_S1 + 0);
            *(b + 1333 * OS1_S1 + 2) = prefactor_y * *(b + 1333 * OS1_S1 + 0) - 
                p_over_q * *(b + 1546 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1141 * OS1_S1 + 0);
            *(b + 1333 * OS1_S1 + 3) = prefactor_z * *(b + 1333 * OS1_S1 + 0) - 
                p_over_q * *(b + 1547 * OS1_S1 + 0);
            *(b + 1334 * OS1_S1 + 1) = prefactor_x * *(b + 1334 * OS1_S1 + 0) - 
                p_over_q * *(b + 1544 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1144 * OS1_S1 + 0);
            *(b + 1334 * OS1_S1 + 2) = prefactor_y * *(b + 1334 * OS1_S1 + 0) - 
                p_over_q * *(b + 1547 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1142 * OS1_S1 + 0);
            *(b + 1334 * OS1_S1 + 3) = prefactor_z * *(b + 1334 * OS1_S1 + 0) - 
                p_over_q * *(b + 1548 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1141 * OS1_S1 + 0);
            *(b + 1335 * OS1_S1 + 1) = prefactor_x * *(b + 1335 * OS1_S1 + 0) - 
                p_over_q * *(b + 1545 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1145 * OS1_S1 + 0);
            *(b + 1335 * OS1_S1 + 2) = prefactor_y * *(b + 1335 * OS1_S1 + 0) - 
                p_over_q * *(b + 1548 * OS1_S1 + 0);
            *(b + 1335 * OS1_S1 + 3) = prefactor_z * *(b + 1335 * OS1_S1 + 0) - 
                p_over_q * *(b + 1549 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1142 * OS1_S1 + 0);
            *(b + 1336 * OS1_S1 + 1) = prefactor_x * *(b + 1336 * OS1_S1 + 0) - 
                p_over_q * *(b + 1546 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1146 * OS1_S1 + 0);
            *(b + 1336 * OS1_S1 + 2) = prefactor_y * *(b + 1336 * OS1_S1 + 0) - 
                p_over_q * *(b + 1550 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1143 * OS1_S1 + 0);
            *(b + 1336 * OS1_S1 + 3) = prefactor_z * *(b + 1336 * OS1_S1 + 0) - 
                p_over_q * *(b + 1551 * OS1_S1 + 0);
            *(b + 1337 * OS1_S1 + 1) = prefactor_x * *(b + 1337 * OS1_S1 + 0) - 
                p_over_q * *(b + 1547 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1147 * OS1_S1 + 0);
            *(b + 1337 * OS1_S1 + 2) = prefactor_y * *(b + 1337 * OS1_S1 + 0) - 
                p_over_q * *(b + 1551 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1144 * OS1_S1 + 0);
            *(b + 1337 * OS1_S1 + 3) = prefactor_z * *(b + 1337 * OS1_S1 + 0) - 
                p_over_q * *(b + 1552 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1143 * OS1_S1 + 0);
            *(b + 1338 * OS1_S1 + 1) = prefactor_x * *(b + 1338 * OS1_S1 + 0) - 
                p_over_q * *(b + 1548 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1148 * OS1_S1 + 0);
            *(b + 1338 * OS1_S1 + 2) = prefactor_y * *(b + 1338 * OS1_S1 + 0) - 
                p_over_q * *(b + 1552 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1145 * OS1_S1 + 0);
            *(b + 1338 * OS1_S1 + 3) = prefactor_z * *(b + 1338 * OS1_S1 + 0) - 
                p_over_q * *(b + 1553 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1144 * OS1_S1 + 0);
            *(b + 1339 * OS1_S1 + 1) = prefactor_x * *(b + 1339 * OS1_S1 + 0) - 
                p_over_q * *(b + 1549 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1149 * OS1_S1 + 0);
            *(b + 1339 * OS1_S1 + 2) = prefactor_y * *(b + 1339 * OS1_S1 + 0) - 
                p_over_q * *(b + 1553 * OS1_S1 + 0);
            *(b + 1339 * OS1_S1 + 3) = prefactor_z * *(b + 1339 * OS1_S1 + 0) - 
                p_over_q * *(b + 1554 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1145 * OS1_S1 + 0);
            *(b + 1340 * OS1_S1 + 1) = prefactor_x * *(b + 1340 * OS1_S1 + 0) - 
                p_over_q * *(b + 1550 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1150 * OS1_S1 + 0);
            *(b + 1340 * OS1_S1 + 2) = prefactor_y * *(b + 1340 * OS1_S1 + 0) - 
                p_over_q * *(b + 1555 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1146 * OS1_S1 + 0);
            *(b + 1340 * OS1_S1 + 3) = prefactor_z * *(b + 1340 * OS1_S1 + 0) - 
                p_over_q * *(b + 1556 * OS1_S1 + 0);
            *(b + 1341 * OS1_S1 + 1) = prefactor_x * *(b + 1341 * OS1_S1 + 0) - 
                p_over_q * *(b + 1551 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1151 * OS1_S1 + 0);
            *(b + 1341 * OS1_S1 + 2) = prefactor_y * *(b + 1341 * OS1_S1 + 0) - 
                p_over_q * *(b + 1556 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1147 * OS1_S1 + 0);
            *(b + 1341 * OS1_S1 + 3) = prefactor_z * *(b + 1341 * OS1_S1 + 0) - 
                p_over_q * *(b + 1557 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1146 * OS1_S1 + 0);
            *(b + 1342 * OS1_S1 + 1) = prefactor_x * *(b + 1342 * OS1_S1 + 0) - 
                p_over_q * *(b + 1552 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1152 * OS1_S1 + 0);
            *(b + 1342 * OS1_S1 + 2) = prefactor_y * *(b + 1342 * OS1_S1 + 0) - 
                p_over_q * *(b + 1557 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1148 * OS1_S1 + 0);
            *(b + 1342 * OS1_S1 + 3) = prefactor_z * *(b + 1342 * OS1_S1 + 0) - 
                p_over_q * *(b + 1558 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1147 * OS1_S1 + 0);
            *(b + 1343 * OS1_S1 + 1) = prefactor_x * *(b + 1343 * OS1_S1 + 0) - 
                p_over_q * *(b + 1553 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1153 * OS1_S1 + 0);
            *(b + 1343 * OS1_S1 + 2) = prefactor_y * *(b + 1343 * OS1_S1 + 0) - 
                p_over_q * *(b + 1558 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1149 * OS1_S1 + 0);
            *(b + 1343 * OS1_S1 + 3) = prefactor_z * *(b + 1343 * OS1_S1 + 0) - 
                p_over_q * *(b + 1559 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1148 * OS1_S1 + 0);
            *(b + 1344 * OS1_S1 + 1) = prefactor_x * *(b + 1344 * OS1_S1 + 0) - 
                p_over_q * *(b + 1554 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1154 * OS1_S1 + 0);
            *(b + 1344 * OS1_S1 + 2) = prefactor_y * *(b + 1344 * OS1_S1 + 0) - 
                p_over_q * *(b + 1559 * OS1_S1 + 0);
            *(b + 1344 * OS1_S1 + 3) = prefactor_z * *(b + 1344 * OS1_S1 + 0) - 
                p_over_q * *(b + 1560 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1149 * OS1_S1 + 0);
            *(b + 1345 * OS1_S1 + 1) = prefactor_x * *(b + 1345 * OS1_S1 + 0) - 
                p_over_q * *(b + 1555 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1155 * OS1_S1 + 0);
            *(b + 1345 * OS1_S1 + 2) = prefactor_y * *(b + 1345 * OS1_S1 + 0) - 
                p_over_q * *(b + 1561 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1150 * OS1_S1 + 0);
            *(b + 1345 * OS1_S1 + 3) = prefactor_z * *(b + 1345 * OS1_S1 + 0) - 
                p_over_q * *(b + 1562 * OS1_S1 + 0);
            *(b + 1346 * OS1_S1 + 1) = prefactor_x * *(b + 1346 * OS1_S1 + 0) - 
                p_over_q * *(b + 1556 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1156 * OS1_S1 + 0);
            *(b + 1346 * OS1_S1 + 2) = prefactor_y * *(b + 1346 * OS1_S1 + 0) - 
                p_over_q * *(b + 1562 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1151 * OS1_S1 + 0);
            *(b + 1346 * OS1_S1 + 3) = prefactor_z * *(b + 1346 * OS1_S1 + 0) - 
                p_over_q * *(b + 1563 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1150 * OS1_S1 + 0);
            *(b + 1347 * OS1_S1 + 1) = prefactor_x * *(b + 1347 * OS1_S1 + 0) - 
                p_over_q * *(b + 1557 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1157 * OS1_S1 + 0);
            *(b + 1347 * OS1_S1 + 2) = prefactor_y * *(b + 1347 * OS1_S1 + 0) - 
                p_over_q * *(b + 1563 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1152 * OS1_S1 + 0);
            *(b + 1347 * OS1_S1 + 3) = prefactor_z * *(b + 1347 * OS1_S1 + 0) - 
                p_over_q * *(b + 1564 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1151 * OS1_S1 + 0);
            *(b + 1348 * OS1_S1 + 1) = prefactor_x * *(b + 1348 * OS1_S1 + 0) - 
                p_over_q * *(b + 1558 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1158 * OS1_S1 + 0);
            *(b + 1348 * OS1_S1 + 2) = prefactor_y * *(b + 1348 * OS1_S1 + 0) - 
                p_over_q * *(b + 1564 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1153 * OS1_S1 + 0);
            *(b + 1348 * OS1_S1 + 3) = prefactor_z * *(b + 1348 * OS1_S1 + 0) - 
                p_over_q * *(b + 1565 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1152 * OS1_S1 + 0);
            *(b + 1349 * OS1_S1 + 1) = prefactor_x * *(b + 1349 * OS1_S1 + 0) - 
                p_over_q * *(b + 1559 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1159 * OS1_S1 + 0);
            *(b + 1349 * OS1_S1 + 2) = prefactor_y * *(b + 1349 * OS1_S1 + 0) - 
                p_over_q * *(b + 1565 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1154 * OS1_S1 + 0);
            *(b + 1349 * OS1_S1 + 3) = prefactor_z * *(b + 1349 * OS1_S1 + 0) - 
                p_over_q * *(b + 1566 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1153 * OS1_S1 + 0);
            *(b + 1350 * OS1_S1 + 1) = prefactor_x * *(b + 1350 * OS1_S1 + 0) - 
                p_over_q * *(b + 1560 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1160 * OS1_S1 + 0);
            *(b + 1350 * OS1_S1 + 2) = prefactor_y * *(b + 1350 * OS1_S1 + 0) - 
                p_over_q * *(b + 1566 * OS1_S1 + 0);
            *(b + 1350 * OS1_S1 + 3) = prefactor_z * *(b + 1350 * OS1_S1 + 0) - 
                p_over_q * *(b + 1567 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1154 * OS1_S1 + 0);
            *(b + 1351 * OS1_S1 + 1) = prefactor_x * *(b + 1351 * OS1_S1 + 0) - 
                p_over_q * *(b + 1561 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1161 * OS1_S1 + 0);
            *(b + 1351 * OS1_S1 + 2) = prefactor_y * *(b + 1351 * OS1_S1 + 0) - 
                p_over_q * *(b + 1568 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1155 * OS1_S1 + 0);
            *(b + 1351 * OS1_S1 + 3) = prefactor_z * *(b + 1351 * OS1_S1 + 0) - 
                p_over_q * *(b + 1569 * OS1_S1 + 0);
            *(b + 1352 * OS1_S1 + 1) = prefactor_x * *(b + 1352 * OS1_S1 + 0) - 
                p_over_q * *(b + 1562 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1162 * OS1_S1 + 0);
            *(b + 1352 * OS1_S1 + 2) = prefactor_y * *(b + 1352 * OS1_S1 + 0) - 
                p_over_q * *(b + 1569 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1156 * OS1_S1 + 0);
            *(b + 1352 * OS1_S1 + 3) = prefactor_z * *(b + 1352 * OS1_S1 + 0) - 
                p_over_q * *(b + 1570 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1155 * OS1_S1 + 0);
            *(b + 1353 * OS1_S1 + 1) = prefactor_x * *(b + 1353 * OS1_S1 + 0) - 
                p_over_q * *(b + 1563 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1163 * OS1_S1 + 0);
            *(b + 1353 * OS1_S1 + 2) = prefactor_y * *(b + 1353 * OS1_S1 + 0) - 
                p_over_q * *(b + 1570 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1157 * OS1_S1 + 0);
            *(b + 1353 * OS1_S1 + 3) = prefactor_z * *(b + 1353 * OS1_S1 + 0) - 
                p_over_q * *(b + 1571 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1156 * OS1_S1 + 0);
            *(b + 1354 * OS1_S1 + 1) = prefactor_x * *(b + 1354 * OS1_S1 + 0) - 
                p_over_q * *(b + 1564 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1164 * OS1_S1 + 0);
            *(b + 1354 * OS1_S1 + 2) = prefactor_y * *(b + 1354 * OS1_S1 + 0) - 
                p_over_q * *(b + 1571 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1158 * OS1_S1 + 0);
            *(b + 1354 * OS1_S1 + 3) = prefactor_z * *(b + 1354 * OS1_S1 + 0) - 
                p_over_q * *(b + 1572 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1157 * OS1_S1 + 0);
            *(b + 1355 * OS1_S1 + 1) = prefactor_x * *(b + 1355 * OS1_S1 + 0) - 
                p_over_q * *(b + 1565 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1165 * OS1_S1 + 0);
            *(b + 1355 * OS1_S1 + 2) = prefactor_y * *(b + 1355 * OS1_S1 + 0) - 
                p_over_q * *(b + 1572 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1159 * OS1_S1 + 0);
            *(b + 1355 * OS1_S1 + 3) = prefactor_z * *(b + 1355 * OS1_S1 + 0) - 
                p_over_q * *(b + 1573 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1158 * OS1_S1 + 0);
            *(b + 1356 * OS1_S1 + 1) = prefactor_x * *(b + 1356 * OS1_S1 + 0) - 
                p_over_q * *(b + 1566 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1166 * OS1_S1 + 0);
            *(b + 1356 * OS1_S1 + 2) = prefactor_y * *(b + 1356 * OS1_S1 + 0) - 
                p_over_q * *(b + 1573 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1160 * OS1_S1 + 0);
            *(b + 1356 * OS1_S1 + 3) = prefactor_z * *(b + 1356 * OS1_S1 + 0) - 
                p_over_q * *(b + 1574 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1159 * OS1_S1 + 0);
            *(b + 1357 * OS1_S1 + 1) = prefactor_x * *(b + 1357 * OS1_S1 + 0) - 
                p_over_q * *(b + 1567 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1167 * OS1_S1 + 0);
            *(b + 1357 * OS1_S1 + 2) = prefactor_y * *(b + 1357 * OS1_S1 + 0) - 
                p_over_q * *(b + 1574 * OS1_S1 + 0);
            *(b + 1357 * OS1_S1 + 3) = prefactor_z * *(b + 1357 * OS1_S1 + 0) - 
                p_over_q * *(b + 1575 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1160 * OS1_S1 + 0);
            *(b + 1358 * OS1_S1 + 1) = prefactor_x * *(b + 1358 * OS1_S1 + 0) - 
                p_over_q * *(b + 1568 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1168 * OS1_S1 + 0);
            *(b + 1358 * OS1_S1 + 2) = prefactor_y * *(b + 1358 * OS1_S1 + 0) - 
                p_over_q * *(b + 1576 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1161 * OS1_S1 + 0);
            *(b + 1358 * OS1_S1 + 3) = prefactor_z * *(b + 1358 * OS1_S1 + 0) - 
                p_over_q * *(b + 1577 * OS1_S1 + 0);
            *(b + 1359 * OS1_S1 + 1) = prefactor_x * *(b + 1359 * OS1_S1 + 0) - 
                p_over_q * *(b + 1569 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1169 * OS1_S1 + 0);
            *(b + 1359 * OS1_S1 + 2) = prefactor_y * *(b + 1359 * OS1_S1 + 0) - 
                p_over_q * *(b + 1577 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1162 * OS1_S1 + 0);
            *(b + 1359 * OS1_S1 + 3) = prefactor_z * *(b + 1359 * OS1_S1 + 0) - 
                p_over_q * *(b + 1578 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1161 * OS1_S1 + 0);
            *(b + 1360 * OS1_S1 + 1) = prefactor_x * *(b + 1360 * OS1_S1 + 0) - 
                p_over_q * *(b + 1570 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1170 * OS1_S1 + 0);
            *(b + 1360 * OS1_S1 + 2) = prefactor_y * *(b + 1360 * OS1_S1 + 0) - 
                p_over_q * *(b + 1578 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1163 * OS1_S1 + 0);
            *(b + 1360 * OS1_S1 + 3) = prefactor_z * *(b + 1360 * OS1_S1 + 0) - 
                p_over_q * *(b + 1579 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1162 * OS1_S1 + 0);
            *(b + 1361 * OS1_S1 + 1) = prefactor_x * *(b + 1361 * OS1_S1 + 0) - 
                p_over_q * *(b + 1571 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1171 * OS1_S1 + 0);
            *(b + 1361 * OS1_S1 + 2) = prefactor_y * *(b + 1361 * OS1_S1 + 0) - 
                p_over_q * *(b + 1579 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1164 * OS1_S1 + 0);
            *(b + 1361 * OS1_S1 + 3) = prefactor_z * *(b + 1361 * OS1_S1 + 0) - 
                p_over_q * *(b + 1580 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1163 * OS1_S1 + 0);
            *(b + 1362 * OS1_S1 + 1) = prefactor_x * *(b + 1362 * OS1_S1 + 0) - 
                p_over_q * *(b + 1572 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1172 * OS1_S1 + 0);
            *(b + 1362 * OS1_S1 + 2) = prefactor_y * *(b + 1362 * OS1_S1 + 0) - 
                p_over_q * *(b + 1580 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1165 * OS1_S1 + 0);
            *(b + 1362 * OS1_S1 + 3) = prefactor_z * *(b + 1362 * OS1_S1 + 0) - 
                p_over_q * *(b + 1581 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1164 * OS1_S1 + 0);
            *(b + 1363 * OS1_S1 + 1) = prefactor_x * *(b + 1363 * OS1_S1 + 0) - 
                p_over_q * *(b + 1573 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1173 * OS1_S1 + 0);
            *(b + 1363 * OS1_S1 + 2) = prefactor_y * *(b + 1363 * OS1_S1 + 0) - 
                p_over_q * *(b + 1581 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1166 * OS1_S1 + 0);
            *(b + 1363 * OS1_S1 + 3) = prefactor_z * *(b + 1363 * OS1_S1 + 0) - 
                p_over_q * *(b + 1582 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1165 * OS1_S1 + 0);
            *(b + 1364 * OS1_S1 + 1) = prefactor_x * *(b + 1364 * OS1_S1 + 0) - 
                p_over_q * *(b + 1574 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1174 * OS1_S1 + 0);
            *(b + 1364 * OS1_S1 + 2) = prefactor_y * *(b + 1364 * OS1_S1 + 0) - 
                p_over_q * *(b + 1582 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1167 * OS1_S1 + 0);
            *(b + 1364 * OS1_S1 + 3) = prefactor_z * *(b + 1364 * OS1_S1 + 0) - 
                p_over_q * *(b + 1583 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1166 * OS1_S1 + 0);
            *(b + 1365 * OS1_S1 + 1) = prefactor_x * *(b + 1365 * OS1_S1 + 0) - 
                p_over_q * *(b + 1575 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1175 * OS1_S1 + 0);
            *(b + 1365 * OS1_S1 + 2) = prefactor_y * *(b + 1365 * OS1_S1 + 0) - 
                p_over_q * *(b + 1583 * OS1_S1 + 0);
            *(b + 1365 * OS1_S1 + 3) = prefactor_z * *(b + 1365 * OS1_S1 + 0) - 
                p_over_q * *(b + 1584 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1167 * OS1_S1 + 0);
            *(b + 1366 * OS1_S1 + 1) = prefactor_x * *(b + 1366 * OS1_S1 + 0) - 
                p_over_q * *(b + 1576 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1176 * OS1_S1 + 0);
            *(b + 1366 * OS1_S1 + 2) = prefactor_y * *(b + 1366 * OS1_S1 + 0) - 
                p_over_q * *(b + 1585 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1168 * OS1_S1 + 0);
            *(b + 1366 * OS1_S1 + 3) = prefactor_z * *(b + 1366 * OS1_S1 + 0) - 
                p_over_q * *(b + 1586 * OS1_S1 + 0);
            *(b + 1367 * OS1_S1 + 1) = prefactor_x * *(b + 1367 * OS1_S1 + 0) - 
                p_over_q * *(b + 1577 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1177 * OS1_S1 + 0);
            *(b + 1367 * OS1_S1 + 2) = prefactor_y * *(b + 1367 * OS1_S1 + 0) - 
                p_over_q * *(b + 1586 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1169 * OS1_S1 + 0);
            *(b + 1367 * OS1_S1 + 3) = prefactor_z * *(b + 1367 * OS1_S1 + 0) - 
                p_over_q * *(b + 1587 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1168 * OS1_S1 + 0);
            *(b + 1368 * OS1_S1 + 1) = prefactor_x * *(b + 1368 * OS1_S1 + 0) - 
                p_over_q * *(b + 1578 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1178 * OS1_S1 + 0);
            *(b + 1368 * OS1_S1 + 2) = prefactor_y * *(b + 1368 * OS1_S1 + 0) - 
                p_over_q * *(b + 1587 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1170 * OS1_S1 + 0);
            *(b + 1368 * OS1_S1 + 3) = prefactor_z * *(b + 1368 * OS1_S1 + 0) - 
                p_over_q * *(b + 1588 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1169 * OS1_S1 + 0);
            *(b + 1369 * OS1_S1 + 1) = prefactor_x * *(b + 1369 * OS1_S1 + 0) - 
                p_over_q * *(b + 1579 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1179 * OS1_S1 + 0);
            *(b + 1369 * OS1_S1 + 2) = prefactor_y * *(b + 1369 * OS1_S1 + 0) - 
                p_over_q * *(b + 1588 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1171 * OS1_S1 + 0);
            *(b + 1369 * OS1_S1 + 3) = prefactor_z * *(b + 1369 * OS1_S1 + 0) - 
                p_over_q * *(b + 1589 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1170 * OS1_S1 + 0);
            *(b + 1370 * OS1_S1 + 1) = prefactor_x * *(b + 1370 * OS1_S1 + 0) - 
                p_over_q * *(b + 1580 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1180 * OS1_S1 + 0);
            *(b + 1370 * OS1_S1 + 2) = prefactor_y * *(b + 1370 * OS1_S1 + 0) - 
                p_over_q * *(b + 1589 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1172 * OS1_S1 + 0);
            *(b + 1370 * OS1_S1 + 3) = prefactor_z * *(b + 1370 * OS1_S1 + 0) - 
                p_over_q * *(b + 1590 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1171 * OS1_S1 + 0);
            *(b + 1371 * OS1_S1 + 1) = prefactor_x * *(b + 1371 * OS1_S1 + 0) - 
                p_over_q * *(b + 1581 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1181 * OS1_S1 + 0);
            *(b + 1371 * OS1_S1 + 2) = prefactor_y * *(b + 1371 * OS1_S1 + 0) - 
                p_over_q * *(b + 1590 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1173 * OS1_S1 + 0);
            *(b + 1371 * OS1_S1 + 3) = prefactor_z * *(b + 1371 * OS1_S1 + 0) - 
                p_over_q * *(b + 1591 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1172 * OS1_S1 + 0);
            *(b + 1372 * OS1_S1 + 1) = prefactor_x * *(b + 1372 * OS1_S1 + 0) - 
                p_over_q * *(b + 1582 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1182 * OS1_S1 + 0);
            *(b + 1372 * OS1_S1 + 2) = prefactor_y * *(b + 1372 * OS1_S1 + 0) - 
                p_over_q * *(b + 1591 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1174 * OS1_S1 + 0);
            *(b + 1372 * OS1_S1 + 3) = prefactor_z * *(b + 1372 * OS1_S1 + 0) - 
                p_over_q * *(b + 1592 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1173 * OS1_S1 + 0);
            *(b + 1373 * OS1_S1 + 1) = prefactor_x * *(b + 1373 * OS1_S1 + 0) - 
                p_over_q * *(b + 1583 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1183 * OS1_S1 + 0);
            *(b + 1373 * OS1_S1 + 2) = prefactor_y * *(b + 1373 * OS1_S1 + 0) - 
                p_over_q * *(b + 1592 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1175 * OS1_S1 + 0);
            *(b + 1373 * OS1_S1 + 3) = prefactor_z * *(b + 1373 * OS1_S1 + 0) - 
                p_over_q * *(b + 1593 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1174 * OS1_S1 + 0);
            *(b + 1374 * OS1_S1 + 1) = prefactor_x * *(b + 1374 * OS1_S1 + 0) - 
                p_over_q * *(b + 1584 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1184 * OS1_S1 + 0);
            *(b + 1374 * OS1_S1 + 2) = prefactor_y * *(b + 1374 * OS1_S1 + 0) - 
                p_over_q * *(b + 1593 * OS1_S1 + 0);
            *(b + 1374 * OS1_S1 + 3) = prefactor_z * *(b + 1374 * OS1_S1 + 0) - 
                p_over_q * *(b + 1594 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1175 * OS1_S1 + 0);
            *(b + 1375 * OS1_S1 + 1) = prefactor_x * *(b + 1375 * OS1_S1 + 0) - 
                p_over_q * *(b + 1585 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1185 * OS1_S1 + 0);
            *(b + 1375 * OS1_S1 + 2) = prefactor_y * *(b + 1375 * OS1_S1 + 0) - 
                p_over_q * *(b + 1595 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1176 * OS1_S1 + 0);
            *(b + 1375 * OS1_S1 + 3) = prefactor_z * *(b + 1375 * OS1_S1 + 0) - 
                p_over_q * *(b + 1596 * OS1_S1 + 0);
            *(b + 1376 * OS1_S1 + 1) = prefactor_x * *(b + 1376 * OS1_S1 + 0) - 
                p_over_q * *(b + 1586 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1186 * OS1_S1 + 0);
            *(b + 1376 * OS1_S1 + 2) = prefactor_y * *(b + 1376 * OS1_S1 + 0) - 
                p_over_q * *(b + 1596 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1177 * OS1_S1 + 0);
            *(b + 1376 * OS1_S1 + 3) = prefactor_z * *(b + 1376 * OS1_S1 + 0) - 
                p_over_q * *(b + 1597 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1176 * OS1_S1 + 0);
            *(b + 1377 * OS1_S1 + 1) = prefactor_x * *(b + 1377 * OS1_S1 + 0) - 
                p_over_q * *(b + 1587 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1187 * OS1_S1 + 0);
            *(b + 1377 * OS1_S1 + 2) = prefactor_y * *(b + 1377 * OS1_S1 + 0) - 
                p_over_q * *(b + 1597 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1178 * OS1_S1 + 0);
            *(b + 1377 * OS1_S1 + 3) = prefactor_z * *(b + 1377 * OS1_S1 + 0) - 
                p_over_q * *(b + 1598 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1177 * OS1_S1 + 0);
            *(b + 1378 * OS1_S1 + 1) = prefactor_x * *(b + 1378 * OS1_S1 + 0) - 
                p_over_q * *(b + 1588 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1188 * OS1_S1 + 0);
            *(b + 1378 * OS1_S1 + 2) = prefactor_y * *(b + 1378 * OS1_S1 + 0) - 
                p_over_q * *(b + 1598 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1179 * OS1_S1 + 0);
            *(b + 1378 * OS1_S1 + 3) = prefactor_z * *(b + 1378 * OS1_S1 + 0) - 
                p_over_q * *(b + 1599 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1178 * OS1_S1 + 0);
            *(b + 1379 * OS1_S1 + 1) = prefactor_x * *(b + 1379 * OS1_S1 + 0) - 
                p_over_q * *(b + 1589 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1189 * OS1_S1 + 0);
            *(b + 1379 * OS1_S1 + 2) = prefactor_y * *(b + 1379 * OS1_S1 + 0) - 
                p_over_q * *(b + 1599 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1180 * OS1_S1 + 0);
            *(b + 1379 * OS1_S1 + 3) = prefactor_z * *(b + 1379 * OS1_S1 + 0) - 
                p_over_q * *(b + 1600 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1179 * OS1_S1 + 0);
            *(b + 1380 * OS1_S1 + 1) = prefactor_x * *(b + 1380 * OS1_S1 + 0) - 
                p_over_q * *(b + 1590 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1190 * OS1_S1 + 0);
            *(b + 1380 * OS1_S1 + 2) = prefactor_y * *(b + 1380 * OS1_S1 + 0) - 
                p_over_q * *(b + 1600 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1181 * OS1_S1 + 0);
            *(b + 1380 * OS1_S1 + 3) = prefactor_z * *(b + 1380 * OS1_S1 + 0) - 
                p_over_q * *(b + 1601 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1180 * OS1_S1 + 0);
            *(b + 1381 * OS1_S1 + 1) = prefactor_x * *(b + 1381 * OS1_S1 + 0) - 
                p_over_q * *(b + 1591 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1191 * OS1_S1 + 0);
            *(b + 1381 * OS1_S1 + 2) = prefactor_y * *(b + 1381 * OS1_S1 + 0) - 
                p_over_q * *(b + 1601 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1182 * OS1_S1 + 0);
            *(b + 1381 * OS1_S1 + 3) = prefactor_z * *(b + 1381 * OS1_S1 + 0) - 
                p_over_q * *(b + 1602 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1181 * OS1_S1 + 0);
            *(b + 1382 * OS1_S1 + 1) = prefactor_x * *(b + 1382 * OS1_S1 + 0) - 
                p_over_q * *(b + 1592 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1192 * OS1_S1 + 0);
            *(b + 1382 * OS1_S1 + 2) = prefactor_y * *(b + 1382 * OS1_S1 + 0) - 
                p_over_q * *(b + 1602 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1183 * OS1_S1 + 0);
            *(b + 1382 * OS1_S1 + 3) = prefactor_z * *(b + 1382 * OS1_S1 + 0) - 
                p_over_q * *(b + 1603 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1182 * OS1_S1 + 0);
            *(b + 1383 * OS1_S1 + 1) = prefactor_x * *(b + 1383 * OS1_S1 + 0) - 
                p_over_q * *(b + 1593 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1193 * OS1_S1 + 0);
            *(b + 1383 * OS1_S1 + 2) = prefactor_y * *(b + 1383 * OS1_S1 + 0) - 
                p_over_q * *(b + 1603 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1184 * OS1_S1 + 0);
            *(b + 1383 * OS1_S1 + 3) = prefactor_z * *(b + 1383 * OS1_S1 + 0) - 
                p_over_q * *(b + 1604 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1183 * OS1_S1 + 0);
            *(b + 1384 * OS1_S1 + 1) = prefactor_x * *(b + 1384 * OS1_S1 + 0) - 
                p_over_q * *(b + 1594 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1194 * OS1_S1 + 0);
            *(b + 1384 * OS1_S1 + 2) = prefactor_y * *(b + 1384 * OS1_S1 + 0) - 
                p_over_q * *(b + 1604 * OS1_S1 + 0);
            *(b + 1384 * OS1_S1 + 3) = prefactor_z * *(b + 1384 * OS1_S1 + 0) - 
                p_over_q * *(b + 1605 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1184 * OS1_S1 + 0);
            *(b + 1385 * OS1_S1 + 1) = prefactor_x * *(b + 1385 * OS1_S1 + 0) - 
                p_over_q * *(b + 1595 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1195 * OS1_S1 + 0);
            *(b + 1385 * OS1_S1 + 2) = prefactor_y * *(b + 1385 * OS1_S1 + 0) - 
                p_over_q * *(b + 1606 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1185 * OS1_S1 + 0);
            *(b + 1385 * OS1_S1 + 3) = prefactor_z * *(b + 1385 * OS1_S1 + 0) - 
                p_over_q * *(b + 1607 * OS1_S1 + 0);
            *(b + 1386 * OS1_S1 + 1) = prefactor_x * *(b + 1386 * OS1_S1 + 0) - 
                p_over_q * *(b + 1596 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1196 * OS1_S1 + 0);
            *(b + 1386 * OS1_S1 + 2) = prefactor_y * *(b + 1386 * OS1_S1 + 0) - 
                p_over_q * *(b + 1607 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1186 * OS1_S1 + 0);
            *(b + 1386 * OS1_S1 + 3) = prefactor_z * *(b + 1386 * OS1_S1 + 0) - 
                p_over_q * *(b + 1608 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1185 * OS1_S1 + 0);
            *(b + 1387 * OS1_S1 + 1) = prefactor_x * *(b + 1387 * OS1_S1 + 0) - 
                p_over_q * *(b + 1597 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1197 * OS1_S1 + 0);
            *(b + 1387 * OS1_S1 + 2) = prefactor_y * *(b + 1387 * OS1_S1 + 0) - 
                p_over_q * *(b + 1608 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1187 * OS1_S1 + 0);
            *(b + 1387 * OS1_S1 + 3) = prefactor_z * *(b + 1387 * OS1_S1 + 0) - 
                p_over_q * *(b + 1609 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1186 * OS1_S1 + 0);
            *(b + 1388 * OS1_S1 + 1) = prefactor_x * *(b + 1388 * OS1_S1 + 0) - 
                p_over_q * *(b + 1598 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1198 * OS1_S1 + 0);
            *(b + 1388 * OS1_S1 + 2) = prefactor_y * *(b + 1388 * OS1_S1 + 0) - 
                p_over_q * *(b + 1609 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1188 * OS1_S1 + 0);
            *(b + 1388 * OS1_S1 + 3) = prefactor_z * *(b + 1388 * OS1_S1 + 0) - 
                p_over_q * *(b + 1610 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1187 * OS1_S1 + 0);
            *(b + 1389 * OS1_S1 + 1) = prefactor_x * *(b + 1389 * OS1_S1 + 0) - 
                p_over_q * *(b + 1599 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1199 * OS1_S1 + 0);
            *(b + 1389 * OS1_S1 + 2) = prefactor_y * *(b + 1389 * OS1_S1 + 0) - 
                p_over_q * *(b + 1610 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1189 * OS1_S1 + 0);
            *(b + 1389 * OS1_S1 + 3) = prefactor_z * *(b + 1389 * OS1_S1 + 0) - 
                p_over_q * *(b + 1611 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1188 * OS1_S1 + 0);
            *(b + 1390 * OS1_S1 + 1) = prefactor_x * *(b + 1390 * OS1_S1 + 0) - 
                p_over_q * *(b + 1600 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1200 * OS1_S1 + 0);
            *(b + 1390 * OS1_S1 + 2) = prefactor_y * *(b + 1390 * OS1_S1 + 0) - 
                p_over_q * *(b + 1611 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1190 * OS1_S1 + 0);
            *(b + 1390 * OS1_S1 + 3) = prefactor_z * *(b + 1390 * OS1_S1 + 0) - 
                p_over_q * *(b + 1612 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1189 * OS1_S1 + 0);
            *(b + 1391 * OS1_S1 + 1) = prefactor_x * *(b + 1391 * OS1_S1 + 0) - 
                p_over_q * *(b + 1601 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1201 * OS1_S1 + 0);
            *(b + 1391 * OS1_S1 + 2) = prefactor_y * *(b + 1391 * OS1_S1 + 0) - 
                p_over_q * *(b + 1612 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1191 * OS1_S1 + 0);
            *(b + 1391 * OS1_S1 + 3) = prefactor_z * *(b + 1391 * OS1_S1 + 0) - 
                p_over_q * *(b + 1613 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1190 * OS1_S1 + 0);
            *(b + 1392 * OS1_S1 + 1) = prefactor_x * *(b + 1392 * OS1_S1 + 0) - 
                p_over_q * *(b + 1602 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1202 * OS1_S1 + 0);
            *(b + 1392 * OS1_S1 + 2) = prefactor_y * *(b + 1392 * OS1_S1 + 0) - 
                p_over_q * *(b + 1613 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1192 * OS1_S1 + 0);
            *(b + 1392 * OS1_S1 + 3) = prefactor_z * *(b + 1392 * OS1_S1 + 0) - 
                p_over_q * *(b + 1614 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1191 * OS1_S1 + 0);
            *(b + 1393 * OS1_S1 + 1) = prefactor_x * *(b + 1393 * OS1_S1 + 0) - 
                p_over_q * *(b + 1603 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1203 * OS1_S1 + 0);
            *(b + 1393 * OS1_S1 + 2) = prefactor_y * *(b + 1393 * OS1_S1 + 0) - 
                p_over_q * *(b + 1614 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1193 * OS1_S1 + 0);
            *(b + 1393 * OS1_S1 + 3) = prefactor_z * *(b + 1393 * OS1_S1 + 0) - 
                p_over_q * *(b + 1615 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1192 * OS1_S1 + 0);
            *(b + 1394 * OS1_S1 + 1) = prefactor_x * *(b + 1394 * OS1_S1 + 0) - 
                p_over_q * *(b + 1604 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1204 * OS1_S1 + 0);
            *(b + 1394 * OS1_S1 + 2) = prefactor_y * *(b + 1394 * OS1_S1 + 0) - 
                p_over_q * *(b + 1615 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1194 * OS1_S1 + 0);
            *(b + 1394 * OS1_S1 + 3) = prefactor_z * *(b + 1394 * OS1_S1 + 0) - 
                p_over_q * *(b + 1616 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1193 * OS1_S1 + 0);
            *(b + 1395 * OS1_S1 + 1) = prefactor_x * *(b + 1395 * OS1_S1 + 0) - 
                p_over_q * *(b + 1605 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1205 * OS1_S1 + 0);
            *(b + 1395 * OS1_S1 + 2) = prefactor_y * *(b + 1395 * OS1_S1 + 0) - 
                p_over_q * *(b + 1616 * OS1_S1 + 0);
            *(b + 1395 * OS1_S1 + 3) = prefactor_z * *(b + 1395 * OS1_S1 + 0) - 
                p_over_q * *(b + 1617 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1194 * OS1_S1 + 0);
            *(b + 1396 * OS1_S1 + 1) = prefactor_x * *(b + 1396 * OS1_S1 + 0) - 
                p_over_q * *(b + 1606 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1206 * OS1_S1 + 0);
            *(b + 1396 * OS1_S1 + 2) = prefactor_y * *(b + 1396 * OS1_S1 + 0) - 
                p_over_q * *(b + 1618 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1195 * OS1_S1 + 0);
            *(b + 1396 * OS1_S1 + 3) = prefactor_z * *(b + 1396 * OS1_S1 + 0) - 
                p_over_q * *(b + 1619 * OS1_S1 + 0);
            *(b + 1397 * OS1_S1 + 1) = prefactor_x * *(b + 1397 * OS1_S1 + 0) - 
                p_over_q * *(b + 1607 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1207 * OS1_S1 + 0);
            *(b + 1397 * OS1_S1 + 2) = prefactor_y * *(b + 1397 * OS1_S1 + 0) - 
                p_over_q * *(b + 1619 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1196 * OS1_S1 + 0);
            *(b + 1397 * OS1_S1 + 3) = prefactor_z * *(b + 1397 * OS1_S1 + 0) - 
                p_over_q * *(b + 1620 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1195 * OS1_S1 + 0);
            *(b + 1398 * OS1_S1 + 1) = prefactor_x * *(b + 1398 * OS1_S1 + 0) - 
                p_over_q * *(b + 1608 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1208 * OS1_S1 + 0);
            *(b + 1398 * OS1_S1 + 2) = prefactor_y * *(b + 1398 * OS1_S1 + 0) - 
                p_over_q * *(b + 1620 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1197 * OS1_S1 + 0);
            *(b + 1398 * OS1_S1 + 3) = prefactor_z * *(b + 1398 * OS1_S1 + 0) - 
                p_over_q * *(b + 1621 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1196 * OS1_S1 + 0);
            *(b + 1399 * OS1_S1 + 1) = prefactor_x * *(b + 1399 * OS1_S1 + 0) - 
                p_over_q * *(b + 1609 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1209 * OS1_S1 + 0);
            *(b + 1399 * OS1_S1 + 2) = prefactor_y * *(b + 1399 * OS1_S1 + 0) - 
                p_over_q * *(b + 1621 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1198 * OS1_S1 + 0);
            *(b + 1399 * OS1_S1 + 3) = prefactor_z * *(b + 1399 * OS1_S1 + 0) - 
                p_over_q * *(b + 1622 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1197 * OS1_S1 + 0);
            *(b + 1400 * OS1_S1 + 1) = prefactor_x * *(b + 1400 * OS1_S1 + 0) - 
                p_over_q * *(b + 1610 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1210 * OS1_S1 + 0);
            *(b + 1400 * OS1_S1 + 2) = prefactor_y * *(b + 1400 * OS1_S1 + 0) - 
                p_over_q * *(b + 1622 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1199 * OS1_S1 + 0);
            *(b + 1400 * OS1_S1 + 3) = prefactor_z * *(b + 1400 * OS1_S1 + 0) - 
                p_over_q * *(b + 1623 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1198 * OS1_S1 + 0);
            *(b + 1401 * OS1_S1 + 1) = prefactor_x * *(b + 1401 * OS1_S1 + 0) - 
                p_over_q * *(b + 1611 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1211 * OS1_S1 + 0);
            *(b + 1401 * OS1_S1 + 2) = prefactor_y * *(b + 1401 * OS1_S1 + 0) - 
                p_over_q * *(b + 1623 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1200 * OS1_S1 + 0);
            *(b + 1401 * OS1_S1 + 3) = prefactor_z * *(b + 1401 * OS1_S1 + 0) - 
                p_over_q * *(b + 1624 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1199 * OS1_S1 + 0);
            *(b + 1402 * OS1_S1 + 1) = prefactor_x * *(b + 1402 * OS1_S1 + 0) - 
                p_over_q * *(b + 1612 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1212 * OS1_S1 + 0);
            *(b + 1402 * OS1_S1 + 2) = prefactor_y * *(b + 1402 * OS1_S1 + 0) - 
                p_over_q * *(b + 1624 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1201 * OS1_S1 + 0);
            *(b + 1402 * OS1_S1 + 3) = prefactor_z * *(b + 1402 * OS1_S1 + 0) - 
                p_over_q * *(b + 1625 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1200 * OS1_S1 + 0);
            *(b + 1403 * OS1_S1 + 1) = prefactor_x * *(b + 1403 * OS1_S1 + 0) - 
                p_over_q * *(b + 1613 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1213 * OS1_S1 + 0);
            *(b + 1403 * OS1_S1 + 2) = prefactor_y * *(b + 1403 * OS1_S1 + 0) - 
                p_over_q * *(b + 1625 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1202 * OS1_S1 + 0);
            *(b + 1403 * OS1_S1 + 3) = prefactor_z * *(b + 1403 * OS1_S1 + 0) - 
                p_over_q * *(b + 1626 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1201 * OS1_S1 + 0);
            *(b + 1404 * OS1_S1 + 1) = prefactor_x * *(b + 1404 * OS1_S1 + 0) - 
                p_over_q * *(b + 1614 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1214 * OS1_S1 + 0);
            *(b + 1404 * OS1_S1 + 2) = prefactor_y * *(b + 1404 * OS1_S1 + 0) - 
                p_over_q * *(b + 1626 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1203 * OS1_S1 + 0);
            *(b + 1404 * OS1_S1 + 3) = prefactor_z * *(b + 1404 * OS1_S1 + 0) - 
                p_over_q * *(b + 1627 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1202 * OS1_S1 + 0);
            *(b + 1405 * OS1_S1 + 1) = prefactor_x * *(b + 1405 * OS1_S1 + 0) - 
                p_over_q * *(b + 1615 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1215 * OS1_S1 + 0);
            *(b + 1405 * OS1_S1 + 2) = prefactor_y * *(b + 1405 * OS1_S1 + 0) - 
                p_over_q * *(b + 1627 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1204 * OS1_S1 + 0);
            *(b + 1405 * OS1_S1 + 3) = prefactor_z * *(b + 1405 * OS1_S1 + 0) - 
                p_over_q * *(b + 1628 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1203 * OS1_S1 + 0);
            *(b + 1406 * OS1_S1 + 1) = prefactor_x * *(b + 1406 * OS1_S1 + 0) - 
                p_over_q * *(b + 1616 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1216 * OS1_S1 + 0);
            *(b + 1406 * OS1_S1 + 2) = prefactor_y * *(b + 1406 * OS1_S1 + 0) - 
                p_over_q * *(b + 1628 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1205 * OS1_S1 + 0);
            *(b + 1406 * OS1_S1 + 3) = prefactor_z * *(b + 1406 * OS1_S1 + 0) - 
                p_over_q * *(b + 1629 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1204 * OS1_S1 + 0);
            *(b + 1407 * OS1_S1 + 1) = prefactor_x * *(b + 1407 * OS1_S1 + 0) - 
                p_over_q * *(b + 1617 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1217 * OS1_S1 + 0);
            *(b + 1407 * OS1_S1 + 2) = prefactor_y * *(b + 1407 * OS1_S1 + 0) - 
                p_over_q * *(b + 1629 * OS1_S1 + 0);
            *(b + 1407 * OS1_S1 + 3) = prefactor_z * *(b + 1407 * OS1_S1 + 0) - 
                p_over_q * *(b + 1630 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1205 * OS1_S1 + 0);
            *(b + 1408 * OS1_S1 + 1) = prefactor_x * *(b + 1408 * OS1_S1 + 0) - 
                p_over_q * *(b + 1618 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1218 * OS1_S1 + 0);
            *(b + 1408 * OS1_S1 + 2) = prefactor_y * *(b + 1408 * OS1_S1 + 0) - 
                p_over_q * *(b + 1631 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1206 * OS1_S1 + 0);
            *(b + 1408 * OS1_S1 + 3) = prefactor_z * *(b + 1408 * OS1_S1 + 0) - 
                p_over_q * *(b + 1632 * OS1_S1 + 0);
            *(b + 1409 * OS1_S1 + 1) = prefactor_x * *(b + 1409 * OS1_S1 + 0) - 
                p_over_q * *(b + 1619 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1219 * OS1_S1 + 0);
            *(b + 1409 * OS1_S1 + 2) = prefactor_y * *(b + 1409 * OS1_S1 + 0) - 
                p_over_q * *(b + 1632 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1207 * OS1_S1 + 0);
            *(b + 1409 * OS1_S1 + 3) = prefactor_z * *(b + 1409 * OS1_S1 + 0) - 
                p_over_q * *(b + 1633 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1206 * OS1_S1 + 0);
            *(b + 1410 * OS1_S1 + 1) = prefactor_x * *(b + 1410 * OS1_S1 + 0) - 
                p_over_q * *(b + 1620 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1220 * OS1_S1 + 0);
            *(b + 1410 * OS1_S1 + 2) = prefactor_y * *(b + 1410 * OS1_S1 + 0) - 
                p_over_q * *(b + 1633 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1208 * OS1_S1 + 0);
            *(b + 1410 * OS1_S1 + 3) = prefactor_z * *(b + 1410 * OS1_S1 + 0) - 
                p_over_q * *(b + 1634 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1207 * OS1_S1 + 0);
            *(b + 1411 * OS1_S1 + 1) = prefactor_x * *(b + 1411 * OS1_S1 + 0) - 
                p_over_q * *(b + 1621 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1221 * OS1_S1 + 0);
            *(b + 1411 * OS1_S1 + 2) = prefactor_y * *(b + 1411 * OS1_S1 + 0) - 
                p_over_q * *(b + 1634 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1209 * OS1_S1 + 0);
            *(b + 1411 * OS1_S1 + 3) = prefactor_z * *(b + 1411 * OS1_S1 + 0) - 
                p_over_q * *(b + 1635 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1208 * OS1_S1 + 0);
            *(b + 1412 * OS1_S1 + 1) = prefactor_x * *(b + 1412 * OS1_S1 + 0) - 
                p_over_q * *(b + 1622 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1222 * OS1_S1 + 0);
            *(b + 1412 * OS1_S1 + 2) = prefactor_y * *(b + 1412 * OS1_S1 + 0) - 
                p_over_q * *(b + 1635 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1210 * OS1_S1 + 0);
            *(b + 1412 * OS1_S1 + 3) = prefactor_z * *(b + 1412 * OS1_S1 + 0) - 
                p_over_q * *(b + 1636 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1209 * OS1_S1 + 0);
            *(b + 1413 * OS1_S1 + 1) = prefactor_x * *(b + 1413 * OS1_S1 + 0) - 
                p_over_q * *(b + 1623 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1223 * OS1_S1 + 0);
            *(b + 1413 * OS1_S1 + 2) = prefactor_y * *(b + 1413 * OS1_S1 + 0) - 
                p_over_q * *(b + 1636 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1211 * OS1_S1 + 0);
            *(b + 1413 * OS1_S1 + 3) = prefactor_z * *(b + 1413 * OS1_S1 + 0) - 
                p_over_q * *(b + 1637 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1210 * OS1_S1 + 0);
            *(b + 1414 * OS1_S1 + 1) = prefactor_x * *(b + 1414 * OS1_S1 + 0) - 
                p_over_q * *(b + 1624 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1224 * OS1_S1 + 0);
            *(b + 1414 * OS1_S1 + 2) = prefactor_y * *(b + 1414 * OS1_S1 + 0) - 
                p_over_q * *(b + 1637 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1212 * OS1_S1 + 0);
            *(b + 1414 * OS1_S1 + 3) = prefactor_z * *(b + 1414 * OS1_S1 + 0) - 
                p_over_q * *(b + 1638 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1211 * OS1_S1 + 0);
            *(b + 1415 * OS1_S1 + 1) = prefactor_x * *(b + 1415 * OS1_S1 + 0) - 
                p_over_q * *(b + 1625 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1225 * OS1_S1 + 0);
            *(b + 1415 * OS1_S1 + 2) = prefactor_y * *(b + 1415 * OS1_S1 + 0) - 
                p_over_q * *(b + 1638 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1213 * OS1_S1 + 0);
            *(b + 1415 * OS1_S1 + 3) = prefactor_z * *(b + 1415 * OS1_S1 + 0) - 
                p_over_q * *(b + 1639 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1212 * OS1_S1 + 0);
            *(b + 1416 * OS1_S1 + 1) = prefactor_x * *(b + 1416 * OS1_S1 + 0) - 
                p_over_q * *(b + 1626 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1226 * OS1_S1 + 0);
            *(b + 1416 * OS1_S1 + 2) = prefactor_y * *(b + 1416 * OS1_S1 + 0) - 
                p_over_q * *(b + 1639 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1214 * OS1_S1 + 0);
            *(b + 1416 * OS1_S1 + 3) = prefactor_z * *(b + 1416 * OS1_S1 + 0) - 
                p_over_q * *(b + 1640 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1213 * OS1_S1 + 0);
            *(b + 1417 * OS1_S1 + 1) = prefactor_x * *(b + 1417 * OS1_S1 + 0) - 
                p_over_q * *(b + 1627 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1227 * OS1_S1 + 0);
            *(b + 1417 * OS1_S1 + 2) = prefactor_y * *(b + 1417 * OS1_S1 + 0) - 
                p_over_q * *(b + 1640 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1215 * OS1_S1 + 0);
            *(b + 1417 * OS1_S1 + 3) = prefactor_z * *(b + 1417 * OS1_S1 + 0) - 
                p_over_q * *(b + 1641 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1214 * OS1_S1 + 0);
            *(b + 1418 * OS1_S1 + 1) = prefactor_x * *(b + 1418 * OS1_S1 + 0) - 
                p_over_q * *(b + 1628 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1228 * OS1_S1 + 0);
            *(b + 1418 * OS1_S1 + 2) = prefactor_y * *(b + 1418 * OS1_S1 + 0) - 
                p_over_q * *(b + 1641 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1216 * OS1_S1 + 0);
            *(b + 1418 * OS1_S1 + 3) = prefactor_z * *(b + 1418 * OS1_S1 + 0) - 
                p_over_q * *(b + 1642 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1215 * OS1_S1 + 0);
            *(b + 1419 * OS1_S1 + 1) = prefactor_x * *(b + 1419 * OS1_S1 + 0) - 
                p_over_q * *(b + 1629 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1229 * OS1_S1 + 0);
            *(b + 1419 * OS1_S1 + 2) = prefactor_y * *(b + 1419 * OS1_S1 + 0) - 
                p_over_q * *(b + 1642 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1217 * OS1_S1 + 0);
            *(b + 1419 * OS1_S1 + 3) = prefactor_z * *(b + 1419 * OS1_S1 + 0) - 
                p_over_q * *(b + 1643 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1216 * OS1_S1 + 0);
            *(b + 1420 * OS1_S1 + 1) = prefactor_x * *(b + 1420 * OS1_S1 + 0) - 
                p_over_q * *(b + 1630 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1230 * OS1_S1 + 0);
            *(b + 1420 * OS1_S1 + 2) = prefactor_y * *(b + 1420 * OS1_S1 + 0) - 
                p_over_q * *(b + 1643 * OS1_S1 + 0);
            *(b + 1420 * OS1_S1 + 3) = prefactor_z * *(b + 1420 * OS1_S1 + 0) - 
                p_over_q * *(b + 1644 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1217 * OS1_S1 + 0);
            *(b + 1421 * OS1_S1 + 1) = prefactor_x * *(b + 1421 * OS1_S1 + 0) - 
                p_over_q * *(b + 1631 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1231 * OS1_S1 + 0);
            *(b + 1421 * OS1_S1 + 2) = prefactor_y * *(b + 1421 * OS1_S1 + 0) - 
                p_over_q * *(b + 1645 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1218 * OS1_S1 + 0);
            *(b + 1421 * OS1_S1 + 3) = prefactor_z * *(b + 1421 * OS1_S1 + 0) - 
                p_over_q * *(b + 1646 * OS1_S1 + 0);
            *(b + 1422 * OS1_S1 + 1) = prefactor_x * *(b + 1422 * OS1_S1 + 0) - 
                p_over_q * *(b + 1632 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1232 * OS1_S1 + 0);
            *(b + 1422 * OS1_S1 + 2) = prefactor_y * *(b + 1422 * OS1_S1 + 0) - 
                p_over_q * *(b + 1646 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1219 * OS1_S1 + 0);
            *(b + 1422 * OS1_S1 + 3) = prefactor_z * *(b + 1422 * OS1_S1 + 0) - 
                p_over_q * *(b + 1647 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1218 * OS1_S1 + 0);
            *(b + 1423 * OS1_S1 + 1) = prefactor_x * *(b + 1423 * OS1_S1 + 0) - 
                p_over_q * *(b + 1633 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1233 * OS1_S1 + 0);
            *(b + 1423 * OS1_S1 + 2) = prefactor_y * *(b + 1423 * OS1_S1 + 0) - 
                p_over_q * *(b + 1647 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1220 * OS1_S1 + 0);
            *(b + 1423 * OS1_S1 + 3) = prefactor_z * *(b + 1423 * OS1_S1 + 0) - 
                p_over_q * *(b + 1648 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1219 * OS1_S1 + 0);
            *(b + 1424 * OS1_S1 + 1) = prefactor_x * *(b + 1424 * OS1_S1 + 0) - 
                p_over_q * *(b + 1634 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1234 * OS1_S1 + 0);
            *(b + 1424 * OS1_S1 + 2) = prefactor_y * *(b + 1424 * OS1_S1 + 0) - 
                p_over_q * *(b + 1648 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1221 * OS1_S1 + 0);
            *(b + 1424 * OS1_S1 + 3) = prefactor_z * *(b + 1424 * OS1_S1 + 0) - 
                p_over_q * *(b + 1649 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1220 * OS1_S1 + 0);
            *(b + 1425 * OS1_S1 + 1) = prefactor_x * *(b + 1425 * OS1_S1 + 0) - 
                p_over_q * *(b + 1635 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1235 * OS1_S1 + 0);
            *(b + 1425 * OS1_S1 + 2) = prefactor_y * *(b + 1425 * OS1_S1 + 0) - 
                p_over_q * *(b + 1649 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1222 * OS1_S1 + 0);
            *(b + 1425 * OS1_S1 + 3) = prefactor_z * *(b + 1425 * OS1_S1 + 0) - 
                p_over_q * *(b + 1650 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1221 * OS1_S1 + 0);
            *(b + 1426 * OS1_S1 + 1) = prefactor_x * *(b + 1426 * OS1_S1 + 0) - 
                p_over_q * *(b + 1636 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1236 * OS1_S1 + 0);
            *(b + 1426 * OS1_S1 + 2) = prefactor_y * *(b + 1426 * OS1_S1 + 0) - 
                p_over_q * *(b + 1650 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1223 * OS1_S1 + 0);
            *(b + 1426 * OS1_S1 + 3) = prefactor_z * *(b + 1426 * OS1_S1 + 0) - 
                p_over_q * *(b + 1651 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1222 * OS1_S1 + 0);
            *(b + 1427 * OS1_S1 + 1) = prefactor_x * *(b + 1427 * OS1_S1 + 0) - 
                p_over_q * *(b + 1637 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1237 * OS1_S1 + 0);
            *(b + 1427 * OS1_S1 + 2) = prefactor_y * *(b + 1427 * OS1_S1 + 0) - 
                p_over_q * *(b + 1651 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1224 * OS1_S1 + 0);
            *(b + 1427 * OS1_S1 + 3) = prefactor_z * *(b + 1427 * OS1_S1 + 0) - 
                p_over_q * *(b + 1652 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1223 * OS1_S1 + 0);
            *(b + 1428 * OS1_S1 + 1) = prefactor_x * *(b + 1428 * OS1_S1 + 0) - 
                p_over_q * *(b + 1638 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1238 * OS1_S1 + 0);
            *(b + 1428 * OS1_S1 + 2) = prefactor_y * *(b + 1428 * OS1_S1 + 0) - 
                p_over_q * *(b + 1652 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1225 * OS1_S1 + 0);
            *(b + 1428 * OS1_S1 + 3) = prefactor_z * *(b + 1428 * OS1_S1 + 0) - 
                p_over_q * *(b + 1653 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1224 * OS1_S1 + 0);
            *(b + 1429 * OS1_S1 + 1) = prefactor_x * *(b + 1429 * OS1_S1 + 0) - 
                p_over_q * *(b + 1639 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1239 * OS1_S1 + 0);
            *(b + 1429 * OS1_S1 + 2) = prefactor_y * *(b + 1429 * OS1_S1 + 0) - 
                p_over_q * *(b + 1653 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1226 * OS1_S1 + 0);
            *(b + 1429 * OS1_S1 + 3) = prefactor_z * *(b + 1429 * OS1_S1 + 0) - 
                p_over_q * *(b + 1654 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1225 * OS1_S1 + 0);
            *(b + 1430 * OS1_S1 + 1) = prefactor_x * *(b + 1430 * OS1_S1 + 0) - 
                p_over_q * *(b + 1640 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1240 * OS1_S1 + 0);
            *(b + 1430 * OS1_S1 + 2) = prefactor_y * *(b + 1430 * OS1_S1 + 0) - 
                p_over_q * *(b + 1654 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1227 * OS1_S1 + 0);
            *(b + 1430 * OS1_S1 + 3) = prefactor_z * *(b + 1430 * OS1_S1 + 0) - 
                p_over_q * *(b + 1655 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1226 * OS1_S1 + 0);
            *(b + 1431 * OS1_S1 + 1) = prefactor_x * *(b + 1431 * OS1_S1 + 0) - 
                p_over_q * *(b + 1641 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1241 * OS1_S1 + 0);
            *(b + 1431 * OS1_S1 + 2) = prefactor_y * *(b + 1431 * OS1_S1 + 0) - 
                p_over_q * *(b + 1655 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1228 * OS1_S1 + 0);
            *(b + 1431 * OS1_S1 + 3) = prefactor_z * *(b + 1431 * OS1_S1 + 0) - 
                p_over_q * *(b + 1656 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1227 * OS1_S1 + 0);
            *(b + 1432 * OS1_S1 + 1) = prefactor_x * *(b + 1432 * OS1_S1 + 0) - 
                p_over_q * *(b + 1642 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1242 * OS1_S1 + 0);
            *(b + 1432 * OS1_S1 + 2) = prefactor_y * *(b + 1432 * OS1_S1 + 0) - 
                p_over_q * *(b + 1656 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1229 * OS1_S1 + 0);
            *(b + 1432 * OS1_S1 + 3) = prefactor_z * *(b + 1432 * OS1_S1 + 0) - 
                p_over_q * *(b + 1657 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1228 * OS1_S1 + 0);
            *(b + 1433 * OS1_S1 + 1) = prefactor_x * *(b + 1433 * OS1_S1 + 0) - 
                p_over_q * *(b + 1643 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1243 * OS1_S1 + 0);
            *(b + 1433 * OS1_S1 + 2) = prefactor_y * *(b + 1433 * OS1_S1 + 0) - 
                p_over_q * *(b + 1657 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1230 * OS1_S1 + 0);
            *(b + 1433 * OS1_S1 + 3) = prefactor_z * *(b + 1433 * OS1_S1 + 0) - 
                p_over_q * *(b + 1658 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1229 * OS1_S1 + 0);
            *(b + 1434 * OS1_S1 + 1) = prefactor_x * *(b + 1434 * OS1_S1 + 0) - 
                p_over_q * *(b + 1644 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1244 * OS1_S1 + 0);
            *(b + 1434 * OS1_S1 + 2) = prefactor_y * *(b + 1434 * OS1_S1 + 0) - 
                p_over_q * *(b + 1658 * OS1_S1 + 0);
            *(b + 1434 * OS1_S1 + 3) = prefactor_z * *(b + 1434 * OS1_S1 + 0) - 
                p_over_q * *(b + 1659 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1230 * OS1_S1 + 0);
            *(b + 1435 * OS1_S1 + 1) = prefactor_x * *(b + 1435 * OS1_S1 + 0) - 
                p_over_q * *(b + 1645 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1245 * OS1_S1 + 0);
            *(b + 1435 * OS1_S1 + 2) = prefactor_y * *(b + 1435 * OS1_S1 + 0) - 
                p_over_q * *(b + 1660 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1231 * OS1_S1 + 0);
            *(b + 1435 * OS1_S1 + 3) = prefactor_z * *(b + 1435 * OS1_S1 + 0) - 
                p_over_q * *(b + 1661 * OS1_S1 + 0);
            *(b + 1436 * OS1_S1 + 1) = prefactor_x * *(b + 1436 * OS1_S1 + 0) - 
                p_over_q * *(b + 1646 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1246 * OS1_S1 + 0);
            *(b + 1436 * OS1_S1 + 2) = prefactor_y * *(b + 1436 * OS1_S1 + 0) - 
                p_over_q * *(b + 1661 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1232 * OS1_S1 + 0);
            *(b + 1436 * OS1_S1 + 3) = prefactor_z * *(b + 1436 * OS1_S1 + 0) - 
                p_over_q * *(b + 1662 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1231 * OS1_S1 + 0);
            *(b + 1437 * OS1_S1 + 1) = prefactor_x * *(b + 1437 * OS1_S1 + 0) - 
                p_over_q * *(b + 1647 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1247 * OS1_S1 + 0);
            *(b + 1437 * OS1_S1 + 2) = prefactor_y * *(b + 1437 * OS1_S1 + 0) - 
                p_over_q * *(b + 1662 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1233 * OS1_S1 + 0);
            *(b + 1437 * OS1_S1 + 3) = prefactor_z * *(b + 1437 * OS1_S1 + 0) - 
                p_over_q * *(b + 1663 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1232 * OS1_S1 + 0);
            *(b + 1438 * OS1_S1 + 1) = prefactor_x * *(b + 1438 * OS1_S1 + 0) - 
                p_over_q * *(b + 1648 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1248 * OS1_S1 + 0);
            *(b + 1438 * OS1_S1 + 2) = prefactor_y * *(b + 1438 * OS1_S1 + 0) - 
                p_over_q * *(b + 1663 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1234 * OS1_S1 + 0);
            *(b + 1438 * OS1_S1 + 3) = prefactor_z * *(b + 1438 * OS1_S1 + 0) - 
                p_over_q * *(b + 1664 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1233 * OS1_S1 + 0);
            *(b + 1439 * OS1_S1 + 1) = prefactor_x * *(b + 1439 * OS1_S1 + 0) - 
                p_over_q * *(b + 1649 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1249 * OS1_S1 + 0);
            *(b + 1439 * OS1_S1 + 2) = prefactor_y * *(b + 1439 * OS1_S1 + 0) - 
                p_over_q * *(b + 1664 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1235 * OS1_S1 + 0);
            *(b + 1439 * OS1_S1 + 3) = prefactor_z * *(b + 1439 * OS1_S1 + 0) - 
                p_over_q * *(b + 1665 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1234 * OS1_S1 + 0);
            *(b + 1440 * OS1_S1 + 1) = prefactor_x * *(b + 1440 * OS1_S1 + 0) - 
                p_over_q * *(b + 1650 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1250 * OS1_S1 + 0);
            *(b + 1440 * OS1_S1 + 2) = prefactor_y * *(b + 1440 * OS1_S1 + 0) - 
                p_over_q * *(b + 1665 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1236 * OS1_S1 + 0);
            *(b + 1440 * OS1_S1 + 3) = prefactor_z * *(b + 1440 * OS1_S1 + 0) - 
                p_over_q * *(b + 1666 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1235 * OS1_S1 + 0);
            *(b + 1441 * OS1_S1 + 1) = prefactor_x * *(b + 1441 * OS1_S1 + 0) - 
                p_over_q * *(b + 1651 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1251 * OS1_S1 + 0);
            *(b + 1441 * OS1_S1 + 2) = prefactor_y * *(b + 1441 * OS1_S1 + 0) - 
                p_over_q * *(b + 1666 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1237 * OS1_S1 + 0);
            *(b + 1441 * OS1_S1 + 3) = prefactor_z * *(b + 1441 * OS1_S1 + 0) - 
                p_over_q * *(b + 1667 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1236 * OS1_S1 + 0);
            *(b + 1442 * OS1_S1 + 1) = prefactor_x * *(b + 1442 * OS1_S1 + 0) - 
                p_over_q * *(b + 1652 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1252 * OS1_S1 + 0);
            *(b + 1442 * OS1_S1 + 2) = prefactor_y * *(b + 1442 * OS1_S1 + 0) - 
                p_over_q * *(b + 1667 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1238 * OS1_S1 + 0);
            *(b + 1442 * OS1_S1 + 3) = prefactor_z * *(b + 1442 * OS1_S1 + 0) - 
                p_over_q * *(b + 1668 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1237 * OS1_S1 + 0);
            *(b + 1443 * OS1_S1 + 1) = prefactor_x * *(b + 1443 * OS1_S1 + 0) - 
                p_over_q * *(b + 1653 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1253 * OS1_S1 + 0);
            *(b + 1443 * OS1_S1 + 2) = prefactor_y * *(b + 1443 * OS1_S1 + 0) - 
                p_over_q * *(b + 1668 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1239 * OS1_S1 + 0);
            *(b + 1443 * OS1_S1 + 3) = prefactor_z * *(b + 1443 * OS1_S1 + 0) - 
                p_over_q * *(b + 1669 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1238 * OS1_S1 + 0);
            *(b + 1444 * OS1_S1 + 1) = prefactor_x * *(b + 1444 * OS1_S1 + 0) - 
                p_over_q * *(b + 1654 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1254 * OS1_S1 + 0);
            *(b + 1444 * OS1_S1 + 2) = prefactor_y * *(b + 1444 * OS1_S1 + 0) - 
                p_over_q * *(b + 1669 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1240 * OS1_S1 + 0);
            *(b + 1444 * OS1_S1 + 3) = prefactor_z * *(b + 1444 * OS1_S1 + 0) - 
                p_over_q * *(b + 1670 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1239 * OS1_S1 + 0);
            *(b + 1445 * OS1_S1 + 1) = prefactor_x * *(b + 1445 * OS1_S1 + 0) - 
                p_over_q * *(b + 1655 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1255 * OS1_S1 + 0);
            *(b + 1445 * OS1_S1 + 2) = prefactor_y * *(b + 1445 * OS1_S1 + 0) - 
                p_over_q * *(b + 1670 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1241 * OS1_S1 + 0);
            *(b + 1445 * OS1_S1 + 3) = prefactor_z * *(b + 1445 * OS1_S1 + 0) - 
                p_over_q * *(b + 1671 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1240 * OS1_S1 + 0);
            *(b + 1446 * OS1_S1 + 1) = prefactor_x * *(b + 1446 * OS1_S1 + 0) - 
                p_over_q * *(b + 1656 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1256 * OS1_S1 + 0);
            *(b + 1446 * OS1_S1 + 2) = prefactor_y * *(b + 1446 * OS1_S1 + 0) - 
                p_over_q * *(b + 1671 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1242 * OS1_S1 + 0);
            *(b + 1446 * OS1_S1 + 3) = prefactor_z * *(b + 1446 * OS1_S1 + 0) - 
                p_over_q * *(b + 1672 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1241 * OS1_S1 + 0);
            *(b + 1447 * OS1_S1 + 1) = prefactor_x * *(b + 1447 * OS1_S1 + 0) - 
                p_over_q * *(b + 1657 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1257 * OS1_S1 + 0);
            *(b + 1447 * OS1_S1 + 2) = prefactor_y * *(b + 1447 * OS1_S1 + 0) - 
                p_over_q * *(b + 1672 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1243 * OS1_S1 + 0);
            *(b + 1447 * OS1_S1 + 3) = prefactor_z * *(b + 1447 * OS1_S1 + 0) - 
                p_over_q * *(b + 1673 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1242 * OS1_S1 + 0);
            *(b + 1448 * OS1_S1 + 1) = prefactor_x * *(b + 1448 * OS1_S1 + 0) - 
                p_over_q * *(b + 1658 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1258 * OS1_S1 + 0);
            *(b + 1448 * OS1_S1 + 2) = prefactor_y * *(b + 1448 * OS1_S1 + 0) - 
                p_over_q * *(b + 1673 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1244 * OS1_S1 + 0);
            *(b + 1448 * OS1_S1 + 3) = prefactor_z * *(b + 1448 * OS1_S1 + 0) - 
                p_over_q * *(b + 1674 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1243 * OS1_S1 + 0);
            *(b + 1449 * OS1_S1 + 1) = prefactor_x * *(b + 1449 * OS1_S1 + 0) - 
                p_over_q * *(b + 1659 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1259 * OS1_S1 + 0);
            *(b + 1449 * OS1_S1 + 2) = prefactor_y * *(b + 1449 * OS1_S1 + 0) - 
                p_over_q * *(b + 1674 * OS1_S1 + 0);
            *(b + 1449 * OS1_S1 + 3) = prefactor_z * *(b + 1449 * OS1_S1 + 0) - 
                p_over_q * *(b + 1675 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1244 * OS1_S1 + 0);
            *(b + 1450 * OS1_S1 + 1) = prefactor_x * *(b + 1450 * OS1_S1 + 0) - 
                p_over_q * *(b + 1660 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1260 * OS1_S1 + 0);
            *(b + 1450 * OS1_S1 + 2) = prefactor_y * *(b + 1450 * OS1_S1 + 0) - 
                p_over_q * *(b + 1676 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1245 * OS1_S1 + 0);
            *(b + 1450 * OS1_S1 + 3) = prefactor_z * *(b + 1450 * OS1_S1 + 0) - 
                p_over_q * *(b + 1677 * OS1_S1 + 0);
            *(b + 1451 * OS1_S1 + 1) = prefactor_x * *(b + 1451 * OS1_S1 + 0) - 
                p_over_q * *(b + 1661 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1261 * OS1_S1 + 0);
            *(b + 1451 * OS1_S1 + 2) = prefactor_y * *(b + 1451 * OS1_S1 + 0) - 
                p_over_q * *(b + 1677 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1246 * OS1_S1 + 0);
            *(b + 1451 * OS1_S1 + 3) = prefactor_z * *(b + 1451 * OS1_S1 + 0) - 
                p_over_q * *(b + 1678 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1245 * OS1_S1 + 0);
            *(b + 1452 * OS1_S1 + 1) = prefactor_x * *(b + 1452 * OS1_S1 + 0) - 
                p_over_q * *(b + 1662 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1262 * OS1_S1 + 0);
            *(b + 1452 * OS1_S1 + 2) = prefactor_y * *(b + 1452 * OS1_S1 + 0) - 
                p_over_q * *(b + 1678 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1247 * OS1_S1 + 0);
            *(b + 1452 * OS1_S1 + 3) = prefactor_z * *(b + 1452 * OS1_S1 + 0) - 
                p_over_q * *(b + 1679 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1246 * OS1_S1 + 0);
            *(b + 1453 * OS1_S1 + 1) = prefactor_x * *(b + 1453 * OS1_S1 + 0) - 
                p_over_q * *(b + 1663 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1263 * OS1_S1 + 0);
            *(b + 1453 * OS1_S1 + 2) = prefactor_y * *(b + 1453 * OS1_S1 + 0) - 
                p_over_q * *(b + 1679 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1248 * OS1_S1 + 0);
            *(b + 1453 * OS1_S1 + 3) = prefactor_z * *(b + 1453 * OS1_S1 + 0) - 
                p_over_q * *(b + 1680 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1247 * OS1_S1 + 0);
            *(b + 1454 * OS1_S1 + 1) = prefactor_x * *(b + 1454 * OS1_S1 + 0) - 
                p_over_q * *(b + 1664 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1264 * OS1_S1 + 0);
            *(b + 1454 * OS1_S1 + 2) = prefactor_y * *(b + 1454 * OS1_S1 + 0) - 
                p_over_q * *(b + 1680 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1249 * OS1_S1 + 0);
            *(b + 1454 * OS1_S1 + 3) = prefactor_z * *(b + 1454 * OS1_S1 + 0) - 
                p_over_q * *(b + 1681 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1248 * OS1_S1 + 0);
            *(b + 1455 * OS1_S1 + 1) = prefactor_x * *(b + 1455 * OS1_S1 + 0) - 
                p_over_q * *(b + 1665 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1265 * OS1_S1 + 0);
            *(b + 1455 * OS1_S1 + 2) = prefactor_y * *(b + 1455 * OS1_S1 + 0) - 
                p_over_q * *(b + 1681 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1250 * OS1_S1 + 0);
            *(b + 1455 * OS1_S1 + 3) = prefactor_z * *(b + 1455 * OS1_S1 + 0) - 
                p_over_q * *(b + 1682 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1249 * OS1_S1 + 0);
            *(b + 1456 * OS1_S1 + 1) = prefactor_x * *(b + 1456 * OS1_S1 + 0) - 
                p_over_q * *(b + 1666 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1266 * OS1_S1 + 0);
            *(b + 1456 * OS1_S1 + 2) = prefactor_y * *(b + 1456 * OS1_S1 + 0) - 
                p_over_q * *(b + 1682 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1251 * OS1_S1 + 0);
            *(b + 1456 * OS1_S1 + 3) = prefactor_z * *(b + 1456 * OS1_S1 + 0) - 
                p_over_q * *(b + 1683 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1250 * OS1_S1 + 0);
            *(b + 1457 * OS1_S1 + 1) = prefactor_x * *(b + 1457 * OS1_S1 + 0) - 
                p_over_q * *(b + 1667 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1267 * OS1_S1 + 0);
            *(b + 1457 * OS1_S1 + 2) = prefactor_y * *(b + 1457 * OS1_S1 + 0) - 
                p_over_q * *(b + 1683 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1252 * OS1_S1 + 0);
            *(b + 1457 * OS1_S1 + 3) = prefactor_z * *(b + 1457 * OS1_S1 + 0) - 
                p_over_q * *(b + 1684 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1251 * OS1_S1 + 0);
            *(b + 1458 * OS1_S1 + 1) = prefactor_x * *(b + 1458 * OS1_S1 + 0) - 
                p_over_q * *(b + 1668 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1268 * OS1_S1 + 0);
            *(b + 1458 * OS1_S1 + 2) = prefactor_y * *(b + 1458 * OS1_S1 + 0) - 
                p_over_q * *(b + 1684 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1253 * OS1_S1 + 0);
            *(b + 1458 * OS1_S1 + 3) = prefactor_z * *(b + 1458 * OS1_S1 + 0) - 
                p_over_q * *(b + 1685 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1252 * OS1_S1 + 0);
            *(b + 1459 * OS1_S1 + 1) = prefactor_x * *(b + 1459 * OS1_S1 + 0) - 
                p_over_q * *(b + 1669 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1269 * OS1_S1 + 0);
            *(b + 1459 * OS1_S1 + 2) = prefactor_y * *(b + 1459 * OS1_S1 + 0) - 
                p_over_q * *(b + 1685 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1254 * OS1_S1 + 0);
            *(b + 1459 * OS1_S1 + 3) = prefactor_z * *(b + 1459 * OS1_S1 + 0) - 
                p_over_q * *(b + 1686 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1253 * OS1_S1 + 0);
            *(b + 1460 * OS1_S1 + 1) = prefactor_x * *(b + 1460 * OS1_S1 + 0) - 
                p_over_q * *(b + 1670 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1270 * OS1_S1 + 0);
            *(b + 1460 * OS1_S1 + 2) = prefactor_y * *(b + 1460 * OS1_S1 + 0) - 
                p_over_q * *(b + 1686 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1255 * OS1_S1 + 0);
            *(b + 1460 * OS1_S1 + 3) = prefactor_z * *(b + 1460 * OS1_S1 + 0) - 
                p_over_q * *(b + 1687 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1254 * OS1_S1 + 0);
            *(b + 1461 * OS1_S1 + 1) = prefactor_x * *(b + 1461 * OS1_S1 + 0) - 
                p_over_q * *(b + 1671 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1271 * OS1_S1 + 0);
            *(b + 1461 * OS1_S1 + 2) = prefactor_y * *(b + 1461 * OS1_S1 + 0) - 
                p_over_q * *(b + 1687 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1256 * OS1_S1 + 0);
            *(b + 1461 * OS1_S1 + 3) = prefactor_z * *(b + 1461 * OS1_S1 + 0) - 
                p_over_q * *(b + 1688 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1255 * OS1_S1 + 0);
            *(b + 1462 * OS1_S1 + 1) = prefactor_x * *(b + 1462 * OS1_S1 + 0) - 
                p_over_q * *(b + 1672 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1272 * OS1_S1 + 0);
            *(b + 1462 * OS1_S1 + 2) = prefactor_y * *(b + 1462 * OS1_S1 + 0) - 
                p_over_q * *(b + 1688 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1257 * OS1_S1 + 0);
            *(b + 1462 * OS1_S1 + 3) = prefactor_z * *(b + 1462 * OS1_S1 + 0) - 
                p_over_q * *(b + 1689 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1256 * OS1_S1 + 0);
            *(b + 1463 * OS1_S1 + 1) = prefactor_x * *(b + 1463 * OS1_S1 + 0) - 
                p_over_q * *(b + 1673 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1273 * OS1_S1 + 0);
            *(b + 1463 * OS1_S1 + 2) = prefactor_y * *(b + 1463 * OS1_S1 + 0) - 
                p_over_q * *(b + 1689 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1258 * OS1_S1 + 0);
            *(b + 1463 * OS1_S1 + 3) = prefactor_z * *(b + 1463 * OS1_S1 + 0) - 
                p_over_q * *(b + 1690 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1257 * OS1_S1 + 0);
            *(b + 1464 * OS1_S1 + 1) = prefactor_x * *(b + 1464 * OS1_S1 + 0) - 
                p_over_q * *(b + 1674 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1274 * OS1_S1 + 0);
            *(b + 1464 * OS1_S1 + 2) = prefactor_y * *(b + 1464 * OS1_S1 + 0) - 
                p_over_q * *(b + 1690 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1259 * OS1_S1 + 0);
            *(b + 1464 * OS1_S1 + 3) = prefactor_z * *(b + 1464 * OS1_S1 + 0) - 
                p_over_q * *(b + 1691 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1258 * OS1_S1 + 0);
            *(b + 1465 * OS1_S1 + 1) = prefactor_x * *(b + 1465 * OS1_S1 + 0) - 
                p_over_q * *(b + 1675 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1275 * OS1_S1 + 0);
            *(b + 1465 * OS1_S1 + 2) = prefactor_y * *(b + 1465 * OS1_S1 + 0) - 
                p_over_q * *(b + 1691 * OS1_S1 + 0);
            *(b + 1465 * OS1_S1 + 3) = prefactor_z * *(b + 1465 * OS1_S1 + 0) - 
                p_over_q * *(b + 1692 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1259 * OS1_S1 + 0);
            *(b + 1466 * OS1_S1 + 1) = prefactor_x * *(b + 1466 * OS1_S1 + 0) - 
                p_over_q * *(b + 1676 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1276 * OS1_S1 + 0);
            *(b + 1466 * OS1_S1 + 2) = prefactor_y * *(b + 1466 * OS1_S1 + 0) - 
                p_over_q * *(b + 1693 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1260 * OS1_S1 + 0);
            *(b + 1466 * OS1_S1 + 3) = prefactor_z * *(b + 1466 * OS1_S1 + 0) - 
                p_over_q * *(b + 1694 * OS1_S1 + 0);
            *(b + 1467 * OS1_S1 + 1) = prefactor_x * *(b + 1467 * OS1_S1 + 0) - 
                p_over_q * *(b + 1677 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1277 * OS1_S1 + 0);
            *(b + 1467 * OS1_S1 + 2) = prefactor_y * *(b + 1467 * OS1_S1 + 0) - 
                p_over_q * *(b + 1694 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1261 * OS1_S1 + 0);
            *(b + 1467 * OS1_S1 + 3) = prefactor_z * *(b + 1467 * OS1_S1 + 0) - 
                p_over_q * *(b + 1695 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1260 * OS1_S1 + 0);
            *(b + 1468 * OS1_S1 + 1) = prefactor_x * *(b + 1468 * OS1_S1 + 0) - 
                p_over_q * *(b + 1678 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1278 * OS1_S1 + 0);
            *(b + 1468 * OS1_S1 + 2) = prefactor_y * *(b + 1468 * OS1_S1 + 0) - 
                p_over_q * *(b + 1695 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1262 * OS1_S1 + 0);
            *(b + 1468 * OS1_S1 + 3) = prefactor_z * *(b + 1468 * OS1_S1 + 0) - 
                p_over_q * *(b + 1696 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1261 * OS1_S1 + 0);
            *(b + 1469 * OS1_S1 + 1) = prefactor_x * *(b + 1469 * OS1_S1 + 0) - 
                p_over_q * *(b + 1679 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1279 * OS1_S1 + 0);
            *(b + 1469 * OS1_S1 + 2) = prefactor_y * *(b + 1469 * OS1_S1 + 0) - 
                p_over_q * *(b + 1696 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1263 * OS1_S1 + 0);
            *(b + 1469 * OS1_S1 + 3) = prefactor_z * *(b + 1469 * OS1_S1 + 0) - 
                p_over_q * *(b + 1697 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1262 * OS1_S1 + 0);
            *(b + 1470 * OS1_S1 + 1) = prefactor_x * *(b + 1470 * OS1_S1 + 0) - 
                p_over_q * *(b + 1680 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1280 * OS1_S1 + 0);
            *(b + 1470 * OS1_S1 + 2) = prefactor_y * *(b + 1470 * OS1_S1 + 0) - 
                p_over_q * *(b + 1697 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1264 * OS1_S1 + 0);
            *(b + 1470 * OS1_S1 + 3) = prefactor_z * *(b + 1470 * OS1_S1 + 0) - 
                p_over_q * *(b + 1698 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1263 * OS1_S1 + 0);
            *(b + 1471 * OS1_S1 + 1) = prefactor_x * *(b + 1471 * OS1_S1 + 0) - 
                p_over_q * *(b + 1681 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1281 * OS1_S1 + 0);
            *(b + 1471 * OS1_S1 + 2) = prefactor_y * *(b + 1471 * OS1_S1 + 0) - 
                p_over_q * *(b + 1698 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1265 * OS1_S1 + 0);
            *(b + 1471 * OS1_S1 + 3) = prefactor_z * *(b + 1471 * OS1_S1 + 0) - 
                p_over_q * *(b + 1699 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1264 * OS1_S1 + 0);
            *(b + 1472 * OS1_S1 + 1) = prefactor_x * *(b + 1472 * OS1_S1 + 0) - 
                p_over_q * *(b + 1682 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1282 * OS1_S1 + 0);
            *(b + 1472 * OS1_S1 + 2) = prefactor_y * *(b + 1472 * OS1_S1 + 0) - 
                p_over_q * *(b + 1699 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1266 * OS1_S1 + 0);
            *(b + 1472 * OS1_S1 + 3) = prefactor_z * *(b + 1472 * OS1_S1 + 0) - 
                p_over_q * *(b + 1700 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1265 * OS1_S1 + 0);
            *(b + 1473 * OS1_S1 + 1) = prefactor_x * *(b + 1473 * OS1_S1 + 0) - 
                p_over_q * *(b + 1683 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1283 * OS1_S1 + 0);
            *(b + 1473 * OS1_S1 + 2) = prefactor_y * *(b + 1473 * OS1_S1 + 0) - 
                p_over_q * *(b + 1700 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1267 * OS1_S1 + 0);
            *(b + 1473 * OS1_S1 + 3) = prefactor_z * *(b + 1473 * OS1_S1 + 0) - 
                p_over_q * *(b + 1701 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1266 * OS1_S1 + 0);
            *(b + 1474 * OS1_S1 + 1) = prefactor_x * *(b + 1474 * OS1_S1 + 0) - 
                p_over_q * *(b + 1684 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1284 * OS1_S1 + 0);
            *(b + 1474 * OS1_S1 + 2) = prefactor_y * *(b + 1474 * OS1_S1 + 0) - 
                p_over_q * *(b + 1701 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1268 * OS1_S1 + 0);
            *(b + 1474 * OS1_S1 + 3) = prefactor_z * *(b + 1474 * OS1_S1 + 0) - 
                p_over_q * *(b + 1702 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1267 * OS1_S1 + 0);
            *(b + 1475 * OS1_S1 + 1) = prefactor_x * *(b + 1475 * OS1_S1 + 0) - 
                p_over_q * *(b + 1685 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1285 * OS1_S1 + 0);
            *(b + 1475 * OS1_S1 + 2) = prefactor_y * *(b + 1475 * OS1_S1 + 0) - 
                p_over_q * *(b + 1702 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1269 * OS1_S1 + 0);
            *(b + 1475 * OS1_S1 + 3) = prefactor_z * *(b + 1475 * OS1_S1 + 0) - 
                p_over_q * *(b + 1703 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1268 * OS1_S1 + 0);
            *(b + 1476 * OS1_S1 + 1) = prefactor_x * *(b + 1476 * OS1_S1 + 0) - 
                p_over_q * *(b + 1686 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1286 * OS1_S1 + 0);
            *(b + 1476 * OS1_S1 + 2) = prefactor_y * *(b + 1476 * OS1_S1 + 0) - 
                p_over_q * *(b + 1703 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1270 * OS1_S1 + 0);
            *(b + 1476 * OS1_S1 + 3) = prefactor_z * *(b + 1476 * OS1_S1 + 0) - 
                p_over_q * *(b + 1704 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1269 * OS1_S1 + 0);
            *(b + 1477 * OS1_S1 + 1) = prefactor_x * *(b + 1477 * OS1_S1 + 0) - 
                p_over_q * *(b + 1687 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1287 * OS1_S1 + 0);
            *(b + 1477 * OS1_S1 + 2) = prefactor_y * *(b + 1477 * OS1_S1 + 0) - 
                p_over_q * *(b + 1704 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1271 * OS1_S1 + 0);
            *(b + 1477 * OS1_S1 + 3) = prefactor_z * *(b + 1477 * OS1_S1 + 0) - 
                p_over_q * *(b + 1705 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1270 * OS1_S1 + 0);
            *(b + 1478 * OS1_S1 + 1) = prefactor_x * *(b + 1478 * OS1_S1 + 0) - 
                p_over_q * *(b + 1688 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1288 * OS1_S1 + 0);
            *(b + 1478 * OS1_S1 + 2) = prefactor_y * *(b + 1478 * OS1_S1 + 0) - 
                p_over_q * *(b + 1705 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1272 * OS1_S1 + 0);
            *(b + 1478 * OS1_S1 + 3) = prefactor_z * *(b + 1478 * OS1_S1 + 0) - 
                p_over_q * *(b + 1706 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1271 * OS1_S1 + 0);
            *(b + 1479 * OS1_S1 + 1) = prefactor_x * *(b + 1479 * OS1_S1 + 0) - 
                p_over_q * *(b + 1689 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1289 * OS1_S1 + 0);
            *(b + 1479 * OS1_S1 + 2) = prefactor_y * *(b + 1479 * OS1_S1 + 0) - 
                p_over_q * *(b + 1706 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1273 * OS1_S1 + 0);
            *(b + 1479 * OS1_S1 + 3) = prefactor_z * *(b + 1479 * OS1_S1 + 0) - 
                p_over_q * *(b + 1707 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1272 * OS1_S1 + 0);
            *(b + 1480 * OS1_S1 + 1) = prefactor_x * *(b + 1480 * OS1_S1 + 0) - 
                p_over_q * *(b + 1690 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1290 * OS1_S1 + 0);
            *(b + 1480 * OS1_S1 + 2) = prefactor_y * *(b + 1480 * OS1_S1 + 0) - 
                p_over_q * *(b + 1707 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1274 * OS1_S1 + 0);
            *(b + 1480 * OS1_S1 + 3) = prefactor_z * *(b + 1480 * OS1_S1 + 0) - 
                p_over_q * *(b + 1708 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1273 * OS1_S1 + 0);
            *(b + 1481 * OS1_S1 + 1) = prefactor_x * *(b + 1481 * OS1_S1 + 0) - 
                p_over_q * *(b + 1691 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1291 * OS1_S1 + 0);
            *(b + 1481 * OS1_S1 + 2) = prefactor_y * *(b + 1481 * OS1_S1 + 0) - 
                p_over_q * *(b + 1708 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1275 * OS1_S1 + 0);
            *(b + 1481 * OS1_S1 + 3) = prefactor_z * *(b + 1481 * OS1_S1 + 0) - 
                p_over_q * *(b + 1709 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1274 * OS1_S1 + 0);
            *(b + 1482 * OS1_S1 + 1) = prefactor_x * *(b + 1482 * OS1_S1 + 0) - 
                p_over_q * *(b + 1692 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1292 * OS1_S1 + 0);
            *(b + 1482 * OS1_S1 + 2) = prefactor_y * *(b + 1482 * OS1_S1 + 0) - 
                p_over_q * *(b + 1709 * OS1_S1 + 0);
            *(b + 1482 * OS1_S1 + 3) = prefactor_z * *(b + 1482 * OS1_S1 + 0) - 
                p_over_q * *(b + 1710 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1275 * OS1_S1 + 0);
            *(b + 1483 * OS1_S1 + 1) = prefactor_x * *(b + 1483 * OS1_S1 + 0) - 
                p_over_q * *(b + 1693 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1293 * OS1_S1 + 0);
            *(b + 1483 * OS1_S1 + 2) = prefactor_y * *(b + 1483 * OS1_S1 + 0) - 
                p_over_q * *(b + 1711 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1276 * OS1_S1 + 0);
            *(b + 1483 * OS1_S1 + 3) = prefactor_z * *(b + 1483 * OS1_S1 + 0) - 
                p_over_q * *(b + 1712 * OS1_S1 + 0);
            *(b + 1484 * OS1_S1 + 1) = prefactor_x * *(b + 1484 * OS1_S1 + 0) - 
                p_over_q * *(b + 1694 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1294 * OS1_S1 + 0);
            *(b + 1484 * OS1_S1 + 2) = prefactor_y * *(b + 1484 * OS1_S1 + 0) - 
                p_over_q * *(b + 1712 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1277 * OS1_S1 + 0);
            *(b + 1484 * OS1_S1 + 3) = prefactor_z * *(b + 1484 * OS1_S1 + 0) - 
                p_over_q * *(b + 1713 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1276 * OS1_S1 + 0);
            *(b + 1485 * OS1_S1 + 1) = prefactor_x * *(b + 1485 * OS1_S1 + 0) - 
                p_over_q * *(b + 1695 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1295 * OS1_S1 + 0);
            *(b + 1485 * OS1_S1 + 2) = prefactor_y * *(b + 1485 * OS1_S1 + 0) - 
                p_over_q * *(b + 1713 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1278 * OS1_S1 + 0);
            *(b + 1485 * OS1_S1 + 3) = prefactor_z * *(b + 1485 * OS1_S1 + 0) - 
                p_over_q * *(b + 1714 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1277 * OS1_S1 + 0);
            *(b + 1486 * OS1_S1 + 1) = prefactor_x * *(b + 1486 * OS1_S1 + 0) - 
                p_over_q * *(b + 1696 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1296 * OS1_S1 + 0);
            *(b + 1486 * OS1_S1 + 2) = prefactor_y * *(b + 1486 * OS1_S1 + 0) - 
                p_over_q * *(b + 1714 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1279 * OS1_S1 + 0);
            *(b + 1486 * OS1_S1 + 3) = prefactor_z * *(b + 1486 * OS1_S1 + 0) - 
                p_over_q * *(b + 1715 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1278 * OS1_S1 + 0);
            *(b + 1487 * OS1_S1 + 1) = prefactor_x * *(b + 1487 * OS1_S1 + 0) - 
                p_over_q * *(b + 1697 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1297 * OS1_S1 + 0);
            *(b + 1487 * OS1_S1 + 2) = prefactor_y * *(b + 1487 * OS1_S1 + 0) - 
                p_over_q * *(b + 1715 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1280 * OS1_S1 + 0);
            *(b + 1487 * OS1_S1 + 3) = prefactor_z * *(b + 1487 * OS1_S1 + 0) - 
                p_over_q * *(b + 1716 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1279 * OS1_S1 + 0);
            *(b + 1488 * OS1_S1 + 1) = prefactor_x * *(b + 1488 * OS1_S1 + 0) - 
                p_over_q * *(b + 1698 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1298 * OS1_S1 + 0);
            *(b + 1488 * OS1_S1 + 2) = prefactor_y * *(b + 1488 * OS1_S1 + 0) - 
                p_over_q * *(b + 1716 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1281 * OS1_S1 + 0);
            *(b + 1488 * OS1_S1 + 3) = prefactor_z * *(b + 1488 * OS1_S1 + 0) - 
                p_over_q * *(b + 1717 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1280 * OS1_S1 + 0);
            *(b + 1489 * OS1_S1 + 1) = prefactor_x * *(b + 1489 * OS1_S1 + 0) - 
                p_over_q * *(b + 1699 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1299 * OS1_S1 + 0);
            *(b + 1489 * OS1_S1 + 2) = prefactor_y * *(b + 1489 * OS1_S1 + 0) - 
                p_over_q * *(b + 1717 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1282 * OS1_S1 + 0);
            *(b + 1489 * OS1_S1 + 3) = prefactor_z * *(b + 1489 * OS1_S1 + 0) - 
                p_over_q * *(b + 1718 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1281 * OS1_S1 + 0);
            *(b + 1490 * OS1_S1 + 1) = prefactor_x * *(b + 1490 * OS1_S1 + 0) - 
                p_over_q * *(b + 1700 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1300 * OS1_S1 + 0);
            *(b + 1490 * OS1_S1 + 2) = prefactor_y * *(b + 1490 * OS1_S1 + 0) - 
                p_over_q * *(b + 1718 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1283 * OS1_S1 + 0);
            *(b + 1490 * OS1_S1 + 3) = prefactor_z * *(b + 1490 * OS1_S1 + 0) - 
                p_over_q * *(b + 1719 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1282 * OS1_S1 + 0);
            *(b + 1491 * OS1_S1 + 1) = prefactor_x * *(b + 1491 * OS1_S1 + 0) - 
                p_over_q * *(b + 1701 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1301 * OS1_S1 + 0);
            *(b + 1491 * OS1_S1 + 2) = prefactor_y * *(b + 1491 * OS1_S1 + 0) - 
                p_over_q * *(b + 1719 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1284 * OS1_S1 + 0);
            *(b + 1491 * OS1_S1 + 3) = prefactor_z * *(b + 1491 * OS1_S1 + 0) - 
                p_over_q * *(b + 1720 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1283 * OS1_S1 + 0);
            *(b + 1492 * OS1_S1 + 1) = prefactor_x * *(b + 1492 * OS1_S1 + 0) - 
                p_over_q * *(b + 1702 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1302 * OS1_S1 + 0);
            *(b + 1492 * OS1_S1 + 2) = prefactor_y * *(b + 1492 * OS1_S1 + 0) - 
                p_over_q * *(b + 1720 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1285 * OS1_S1 + 0);
            *(b + 1492 * OS1_S1 + 3) = prefactor_z * *(b + 1492 * OS1_S1 + 0) - 
                p_over_q * *(b + 1721 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1284 * OS1_S1 + 0);
            *(b + 1493 * OS1_S1 + 1) = prefactor_x * *(b + 1493 * OS1_S1 + 0) - 
                p_over_q * *(b + 1703 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1303 * OS1_S1 + 0);
            *(b + 1493 * OS1_S1 + 2) = prefactor_y * *(b + 1493 * OS1_S1 + 0) - 
                p_over_q * *(b + 1721 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1286 * OS1_S1 + 0);
            *(b + 1493 * OS1_S1 + 3) = prefactor_z * *(b + 1493 * OS1_S1 + 0) - 
                p_over_q * *(b + 1722 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1285 * OS1_S1 + 0);
            *(b + 1494 * OS1_S1 + 1) = prefactor_x * *(b + 1494 * OS1_S1 + 0) - 
                p_over_q * *(b + 1704 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1304 * OS1_S1 + 0);
            *(b + 1494 * OS1_S1 + 2) = prefactor_y * *(b + 1494 * OS1_S1 + 0) - 
                p_over_q * *(b + 1722 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1287 * OS1_S1 + 0);
            *(b + 1494 * OS1_S1 + 3) = prefactor_z * *(b + 1494 * OS1_S1 + 0) - 
                p_over_q * *(b + 1723 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1286 * OS1_S1 + 0);
            *(b + 1495 * OS1_S1 + 1) = prefactor_x * *(b + 1495 * OS1_S1 + 0) - 
                p_over_q * *(b + 1705 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1305 * OS1_S1 + 0);
            *(b + 1495 * OS1_S1 + 2) = prefactor_y * *(b + 1495 * OS1_S1 + 0) - 
                p_over_q * *(b + 1723 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1288 * OS1_S1 + 0);
            *(b + 1495 * OS1_S1 + 3) = prefactor_z * *(b + 1495 * OS1_S1 + 0) - 
                p_over_q * *(b + 1724 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1287 * OS1_S1 + 0);
            *(b + 1496 * OS1_S1 + 1) = prefactor_x * *(b + 1496 * OS1_S1 + 0) - 
                p_over_q * *(b + 1706 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1306 * OS1_S1 + 0);
            *(b + 1496 * OS1_S1 + 2) = prefactor_y * *(b + 1496 * OS1_S1 + 0) - 
                p_over_q * *(b + 1724 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1289 * OS1_S1 + 0);
            *(b + 1496 * OS1_S1 + 3) = prefactor_z * *(b + 1496 * OS1_S1 + 0) - 
                p_over_q * *(b + 1725 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1288 * OS1_S1 + 0);
            *(b + 1497 * OS1_S1 + 1) = prefactor_x * *(b + 1497 * OS1_S1 + 0) - 
                p_over_q * *(b + 1707 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1307 * OS1_S1 + 0);
            *(b + 1497 * OS1_S1 + 2) = prefactor_y * *(b + 1497 * OS1_S1 + 0) - 
                p_over_q * *(b + 1725 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1290 * OS1_S1 + 0);
            *(b + 1497 * OS1_S1 + 3) = prefactor_z * *(b + 1497 * OS1_S1 + 0) - 
                p_over_q * *(b + 1726 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1289 * OS1_S1 + 0);
            *(b + 1498 * OS1_S1 + 1) = prefactor_x * *(b + 1498 * OS1_S1 + 0) - 
                p_over_q * *(b + 1708 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1308 * OS1_S1 + 0);
            *(b + 1498 * OS1_S1 + 2) = prefactor_y * *(b + 1498 * OS1_S1 + 0) - 
                p_over_q * *(b + 1726 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1291 * OS1_S1 + 0);
            *(b + 1498 * OS1_S1 + 3) = prefactor_z * *(b + 1498 * OS1_S1 + 0) - 
                p_over_q * *(b + 1727 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1290 * OS1_S1 + 0);
            *(b + 1499 * OS1_S1 + 1) = prefactor_x * *(b + 1499 * OS1_S1 + 0) - 
                p_over_q * *(b + 1709 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1309 * OS1_S1 + 0);
            *(b + 1499 * OS1_S1 + 2) = prefactor_y * *(b + 1499 * OS1_S1 + 0) - 
                p_over_q * *(b + 1727 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1292 * OS1_S1 + 0);
            *(b + 1499 * OS1_S1 + 3) = prefactor_z * *(b + 1499 * OS1_S1 + 0) - 
                p_over_q * *(b + 1728 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1291 * OS1_S1 + 0);
            *(b + 1500 * OS1_S1 + 1) = prefactor_x * *(b + 1500 * OS1_S1 + 0) - 
                p_over_q * *(b + 1710 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1310 * OS1_S1 + 0);
            *(b + 1500 * OS1_S1 + 2) = prefactor_y * *(b + 1500 * OS1_S1 + 0) - 
                p_over_q * *(b + 1728 * OS1_S1 + 0);
            *(b + 1500 * OS1_S1 + 3) = prefactor_z * *(b + 1500 * OS1_S1 + 0) - 
                p_over_q * *(b + 1729 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1292 * OS1_S1 + 0);
            *(b + 1501 * OS1_S1 + 1) = prefactor_x * *(b + 1501 * OS1_S1 + 0) - 
                p_over_q * *(b + 1711 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1311 * OS1_S1 + 0);
            *(b + 1501 * OS1_S1 + 2) = prefactor_y * *(b + 1501 * OS1_S1 + 0) - 
                p_over_q * *(b + 1730 * OS1_S1 + 0) +
                18 * one_over_two_q * *(b + 1293 * OS1_S1 + 0);
            *(b + 1501 * OS1_S1 + 3) = prefactor_z * *(b + 1501 * OS1_S1 + 0) - 
                p_over_q * *(b + 1731 * OS1_S1 + 0);
            *(b + 1502 * OS1_S1 + 1) = prefactor_x * *(b + 1502 * OS1_S1 + 0) - 
                p_over_q * *(b + 1712 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1312 * OS1_S1 + 0);
            *(b + 1502 * OS1_S1 + 2) = prefactor_y * *(b + 1502 * OS1_S1 + 0) - 
                p_over_q * *(b + 1731 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1294 * OS1_S1 + 0);
            *(b + 1502 * OS1_S1 + 3) = prefactor_z * *(b + 1502 * OS1_S1 + 0) - 
                p_over_q * *(b + 1732 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1293 * OS1_S1 + 0);
            *(b + 1503 * OS1_S1 + 1) = prefactor_x * *(b + 1503 * OS1_S1 + 0) - 
                p_over_q * *(b + 1713 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1313 * OS1_S1 + 0);
            *(b + 1503 * OS1_S1 + 2) = prefactor_y * *(b + 1503 * OS1_S1 + 0) - 
                p_over_q * *(b + 1732 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1295 * OS1_S1 + 0);
            *(b + 1503 * OS1_S1 + 3) = prefactor_z * *(b + 1503 * OS1_S1 + 0) - 
                p_over_q * *(b + 1733 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1294 * OS1_S1 + 0);
            *(b + 1504 * OS1_S1 + 1) = prefactor_x * *(b + 1504 * OS1_S1 + 0) - 
                p_over_q * *(b + 1714 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1314 * OS1_S1 + 0);
            *(b + 1504 * OS1_S1 + 2) = prefactor_y * *(b + 1504 * OS1_S1 + 0) - 
                p_over_q * *(b + 1733 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1296 * OS1_S1 + 0);
            *(b + 1504 * OS1_S1 + 3) = prefactor_z * *(b + 1504 * OS1_S1 + 0) - 
                p_over_q * *(b + 1734 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1295 * OS1_S1 + 0);
            *(b + 1505 * OS1_S1 + 1) = prefactor_x * *(b + 1505 * OS1_S1 + 0) - 
                p_over_q * *(b + 1715 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1315 * OS1_S1 + 0);
            *(b + 1505 * OS1_S1 + 2) = prefactor_y * *(b + 1505 * OS1_S1 + 0) - 
                p_over_q * *(b + 1734 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1297 * OS1_S1 + 0);
            *(b + 1505 * OS1_S1 + 3) = prefactor_z * *(b + 1505 * OS1_S1 + 0) - 
                p_over_q * *(b + 1735 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1296 * OS1_S1 + 0);
            *(b + 1506 * OS1_S1 + 1) = prefactor_x * *(b + 1506 * OS1_S1 + 0) - 
                p_over_q * *(b + 1716 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1316 * OS1_S1 + 0);
            *(b + 1506 * OS1_S1 + 2) = prefactor_y * *(b + 1506 * OS1_S1 + 0) - 
                p_over_q * *(b + 1735 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1298 * OS1_S1 + 0);
            *(b + 1506 * OS1_S1 + 3) = prefactor_z * *(b + 1506 * OS1_S1 + 0) - 
                p_over_q * *(b + 1736 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1297 * OS1_S1 + 0);
            *(b + 1507 * OS1_S1 + 1) = prefactor_x * *(b + 1507 * OS1_S1 + 0) - 
                p_over_q * *(b + 1717 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1317 * OS1_S1 + 0);
            *(b + 1507 * OS1_S1 + 2) = prefactor_y * *(b + 1507 * OS1_S1 + 0) - 
                p_over_q * *(b + 1736 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1299 * OS1_S1 + 0);
            *(b + 1507 * OS1_S1 + 3) = prefactor_z * *(b + 1507 * OS1_S1 + 0) - 
                p_over_q * *(b + 1737 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1298 * OS1_S1 + 0);
            *(b + 1508 * OS1_S1 + 1) = prefactor_x * *(b + 1508 * OS1_S1 + 0) - 
                p_over_q * *(b + 1718 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1318 * OS1_S1 + 0);
            *(b + 1508 * OS1_S1 + 2) = prefactor_y * *(b + 1508 * OS1_S1 + 0) - 
                p_over_q * *(b + 1737 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1300 * OS1_S1 + 0);
            *(b + 1508 * OS1_S1 + 3) = prefactor_z * *(b + 1508 * OS1_S1 + 0) - 
                p_over_q * *(b + 1738 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1299 * OS1_S1 + 0);
            *(b + 1509 * OS1_S1 + 1) = prefactor_x * *(b + 1509 * OS1_S1 + 0) - 
                p_over_q * *(b + 1719 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1319 * OS1_S1 + 0);
            *(b + 1509 * OS1_S1 + 2) = prefactor_y * *(b + 1509 * OS1_S1 + 0) - 
                p_over_q * *(b + 1738 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1301 * OS1_S1 + 0);
            *(b + 1509 * OS1_S1 + 3) = prefactor_z * *(b + 1509 * OS1_S1 + 0) - 
                p_over_q * *(b + 1739 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1300 * OS1_S1 + 0);
            *(b + 1510 * OS1_S1 + 1) = prefactor_x * *(b + 1510 * OS1_S1 + 0) - 
                p_over_q * *(b + 1720 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1320 * OS1_S1 + 0);
            *(b + 1510 * OS1_S1 + 2) = prefactor_y * *(b + 1510 * OS1_S1 + 0) - 
                p_over_q * *(b + 1739 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1302 * OS1_S1 + 0);
            *(b + 1510 * OS1_S1 + 3) = prefactor_z * *(b + 1510 * OS1_S1 + 0) - 
                p_over_q * *(b + 1740 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1301 * OS1_S1 + 0);
            *(b + 1511 * OS1_S1 + 1) = prefactor_x * *(b + 1511 * OS1_S1 + 0) - 
                p_over_q * *(b + 1721 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1321 * OS1_S1 + 0);
            *(b + 1511 * OS1_S1 + 2) = prefactor_y * *(b + 1511 * OS1_S1 + 0) - 
                p_over_q * *(b + 1740 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1303 * OS1_S1 + 0);
            *(b + 1511 * OS1_S1 + 3) = prefactor_z * *(b + 1511 * OS1_S1 + 0) - 
                p_over_q * *(b + 1741 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1302 * OS1_S1 + 0);
            *(b + 1512 * OS1_S1 + 1) = prefactor_x * *(b + 1512 * OS1_S1 + 0) - 
                p_over_q * *(b + 1722 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1322 * OS1_S1 + 0);
            *(b + 1512 * OS1_S1 + 2) = prefactor_y * *(b + 1512 * OS1_S1 + 0) - 
                p_over_q * *(b + 1741 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1304 * OS1_S1 + 0);
            *(b + 1512 * OS1_S1 + 3) = prefactor_z * *(b + 1512 * OS1_S1 + 0) - 
                p_over_q * *(b + 1742 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1303 * OS1_S1 + 0);
            *(b + 1513 * OS1_S1 + 1) = prefactor_x * *(b + 1513 * OS1_S1 + 0) - 
                p_over_q * *(b + 1723 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1323 * OS1_S1 + 0);
            *(b + 1513 * OS1_S1 + 2) = prefactor_y * *(b + 1513 * OS1_S1 + 0) - 
                p_over_q * *(b + 1742 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1305 * OS1_S1 + 0);
            *(b + 1513 * OS1_S1 + 3) = prefactor_z * *(b + 1513 * OS1_S1 + 0) - 
                p_over_q * *(b + 1743 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1304 * OS1_S1 + 0);
            *(b + 1514 * OS1_S1 + 1) = prefactor_x * *(b + 1514 * OS1_S1 + 0) - 
                p_over_q * *(b + 1724 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1324 * OS1_S1 + 0);
            *(b + 1514 * OS1_S1 + 2) = prefactor_y * *(b + 1514 * OS1_S1 + 0) - 
                p_over_q * *(b + 1743 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1306 * OS1_S1 + 0);
            *(b + 1514 * OS1_S1 + 3) = prefactor_z * *(b + 1514 * OS1_S1 + 0) - 
                p_over_q * *(b + 1744 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1305 * OS1_S1 + 0);
            *(b + 1515 * OS1_S1 + 1) = prefactor_x * *(b + 1515 * OS1_S1 + 0) - 
                p_over_q * *(b + 1725 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1325 * OS1_S1 + 0);
            *(b + 1515 * OS1_S1 + 2) = prefactor_y * *(b + 1515 * OS1_S1 + 0) - 
                p_over_q * *(b + 1744 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1307 * OS1_S1 + 0);
            *(b + 1515 * OS1_S1 + 3) = prefactor_z * *(b + 1515 * OS1_S1 + 0) - 
                p_over_q * *(b + 1745 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1306 * OS1_S1 + 0);
            *(b + 1516 * OS1_S1 + 1) = prefactor_x * *(b + 1516 * OS1_S1 + 0) - 
                p_over_q * *(b + 1726 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1326 * OS1_S1 + 0);
            *(b + 1516 * OS1_S1 + 2) = prefactor_y * *(b + 1516 * OS1_S1 + 0) - 
                p_over_q * *(b + 1745 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1308 * OS1_S1 + 0);
            *(b + 1516 * OS1_S1 + 3) = prefactor_z * *(b + 1516 * OS1_S1 + 0) - 
                p_over_q * *(b + 1746 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1307 * OS1_S1 + 0);
            *(b + 1517 * OS1_S1 + 1) = prefactor_x * *(b + 1517 * OS1_S1 + 0) - 
                p_over_q * *(b + 1727 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1327 * OS1_S1 + 0);
            *(b + 1517 * OS1_S1 + 2) = prefactor_y * *(b + 1517 * OS1_S1 + 0) - 
                p_over_q * *(b + 1746 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1309 * OS1_S1 + 0);
            *(b + 1517 * OS1_S1 + 3) = prefactor_z * *(b + 1517 * OS1_S1 + 0) - 
                p_over_q * *(b + 1747 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1308 * OS1_S1 + 0);
            *(b + 1518 * OS1_S1 + 1) = prefactor_x * *(b + 1518 * OS1_S1 + 0) - 
                p_over_q * *(b + 1728 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1328 * OS1_S1 + 0);
            *(b + 1518 * OS1_S1 + 2) = prefactor_y * *(b + 1518 * OS1_S1 + 0) - 
                p_over_q * *(b + 1747 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1310 * OS1_S1 + 0);
            *(b + 1518 * OS1_S1 + 3) = prefactor_z * *(b + 1518 * OS1_S1 + 0) - 
                p_over_q * *(b + 1748 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1309 * OS1_S1 + 0);
            *(b + 1519 * OS1_S1 + 1) = prefactor_x * *(b + 1519 * OS1_S1 + 0) - 
                p_over_q * *(b + 1729 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1329 * OS1_S1 + 0);
            *(b + 1519 * OS1_S1 + 2) = prefactor_y * *(b + 1519 * OS1_S1 + 0) - 
                p_over_q * *(b + 1748 * OS1_S1 + 0);
            *(b + 1519 * OS1_S1 + 3) = prefactor_z * *(b + 1519 * OS1_S1 + 0) - 
                p_over_q * *(b + 1749 * OS1_S1 + 0) +
                18 * one_over_two_q * *(b + 1310 * OS1_S1 + 0);
            *(b + 1520 * OS1_S1 + 1) = prefactor_x * *(b + 1520 * OS1_S1 + 0) - 
                p_over_q * *(b + 1730 * OS1_S1 + 0);
            *(b + 1520 * OS1_S1 + 2) = prefactor_y * *(b + 1520 * OS1_S1 + 0) - 
                p_over_q * *(b + 1750 * OS1_S1 + 0) +
                19 * one_over_two_q * *(b + 1311 * OS1_S1 + 0);
            *(b + 1520 * OS1_S1 + 3) = prefactor_z * *(b + 1520 * OS1_S1 + 0) - 
                p_over_q * *(b + 1751 * OS1_S1 + 0);
            *(b + 1521 * OS1_S1 + 1) = prefactor_x * *(b + 1521 * OS1_S1 + 0) - 
                p_over_q * *(b + 1731 * OS1_S1 + 0);
            *(b + 1521 * OS1_S1 + 2) = prefactor_y * *(b + 1521 * OS1_S1 + 0) - 
                p_over_q * *(b + 1751 * OS1_S1 + 0) +
                18 * one_over_two_q * *(b + 1312 * OS1_S1 + 0);
            *(b + 1521 * OS1_S1 + 3) = prefactor_z * *(b + 1521 * OS1_S1 + 0) - 
                p_over_q * *(b + 1752 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1311 * OS1_S1 + 0);
            *(b + 1522 * OS1_S1 + 1) = prefactor_x * *(b + 1522 * OS1_S1 + 0) - 
                p_over_q * *(b + 1732 * OS1_S1 + 0);
            *(b + 1522 * OS1_S1 + 2) = prefactor_y * *(b + 1522 * OS1_S1 + 0) - 
                p_over_q * *(b + 1752 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1313 * OS1_S1 + 0);
            *(b + 1522 * OS1_S1 + 3) = prefactor_z * *(b + 1522 * OS1_S1 + 0) - 
                p_over_q * *(b + 1753 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1312 * OS1_S1 + 0);
            *(b + 1523 * OS1_S1 + 1) = prefactor_x * *(b + 1523 * OS1_S1 + 0) - 
                p_over_q * *(b + 1733 * OS1_S1 + 0);
            *(b + 1523 * OS1_S1 + 2) = prefactor_y * *(b + 1523 * OS1_S1 + 0) - 
                p_over_q * *(b + 1753 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1314 * OS1_S1 + 0);
            *(b + 1523 * OS1_S1 + 3) = prefactor_z * *(b + 1523 * OS1_S1 + 0) - 
                p_over_q * *(b + 1754 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1313 * OS1_S1 + 0);
            *(b + 1524 * OS1_S1 + 1) = prefactor_x * *(b + 1524 * OS1_S1 + 0) - 
                p_over_q * *(b + 1734 * OS1_S1 + 0);
            *(b + 1524 * OS1_S1 + 2) = prefactor_y * *(b + 1524 * OS1_S1 + 0) - 
                p_over_q * *(b + 1754 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1315 * OS1_S1 + 0);
            *(b + 1524 * OS1_S1 + 3) = prefactor_z * *(b + 1524 * OS1_S1 + 0) - 
                p_over_q * *(b + 1755 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1314 * OS1_S1 + 0);
            *(b + 1525 * OS1_S1 + 1) = prefactor_x * *(b + 1525 * OS1_S1 + 0) - 
                p_over_q * *(b + 1735 * OS1_S1 + 0);
            *(b + 1525 * OS1_S1 + 2) = prefactor_y * *(b + 1525 * OS1_S1 + 0) - 
                p_over_q * *(b + 1755 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1316 * OS1_S1 + 0);
            *(b + 1525 * OS1_S1 + 3) = prefactor_z * *(b + 1525 * OS1_S1 + 0) - 
                p_over_q * *(b + 1756 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1315 * OS1_S1 + 0);
            *(b + 1526 * OS1_S1 + 1) = prefactor_x * *(b + 1526 * OS1_S1 + 0) - 
                p_over_q * *(b + 1736 * OS1_S1 + 0);
            *(b + 1526 * OS1_S1 + 2) = prefactor_y * *(b + 1526 * OS1_S1 + 0) - 
                p_over_q * *(b + 1756 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1317 * OS1_S1 + 0);
            *(b + 1526 * OS1_S1 + 3) = prefactor_z * *(b + 1526 * OS1_S1 + 0) - 
                p_over_q * *(b + 1757 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1316 * OS1_S1 + 0);
            *(b + 1527 * OS1_S1 + 1) = prefactor_x * *(b + 1527 * OS1_S1 + 0) - 
                p_over_q * *(b + 1737 * OS1_S1 + 0);
            *(b + 1527 * OS1_S1 + 2) = prefactor_y * *(b + 1527 * OS1_S1 + 0) - 
                p_over_q * *(b + 1757 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1318 * OS1_S1 + 0);
            *(b + 1527 * OS1_S1 + 3) = prefactor_z * *(b + 1527 * OS1_S1 + 0) - 
                p_over_q * *(b + 1758 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1317 * OS1_S1 + 0);
            *(b + 1528 * OS1_S1 + 1) = prefactor_x * *(b + 1528 * OS1_S1 + 0) - 
                p_over_q * *(b + 1738 * OS1_S1 + 0);
            *(b + 1528 * OS1_S1 + 2) = prefactor_y * *(b + 1528 * OS1_S1 + 0) - 
                p_over_q * *(b + 1758 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1319 * OS1_S1 + 0);
            *(b + 1528 * OS1_S1 + 3) = prefactor_z * *(b + 1528 * OS1_S1 + 0) - 
                p_over_q * *(b + 1759 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1318 * OS1_S1 + 0);
            *(b + 1529 * OS1_S1 + 1) = prefactor_x * *(b + 1529 * OS1_S1 + 0) - 
                p_over_q * *(b + 1739 * OS1_S1 + 0);
            *(b + 1529 * OS1_S1 + 2) = prefactor_y * *(b + 1529 * OS1_S1 + 0) - 
                p_over_q * *(b + 1759 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1320 * OS1_S1 + 0);
            *(b + 1529 * OS1_S1 + 3) = prefactor_z * *(b + 1529 * OS1_S1 + 0) - 
                p_over_q * *(b + 1760 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1319 * OS1_S1 + 0);
            *(b + 1530 * OS1_S1 + 1) = prefactor_x * *(b + 1530 * OS1_S1 + 0) - 
                p_over_q * *(b + 1740 * OS1_S1 + 0);
            *(b + 1530 * OS1_S1 + 2) = prefactor_y * *(b + 1530 * OS1_S1 + 0) - 
                p_over_q * *(b + 1760 * OS1_S1 + 0) +
                9 * one_over_two_q * *(b + 1321 * OS1_S1 + 0);
            *(b + 1530 * OS1_S1 + 3) = prefactor_z * *(b + 1530 * OS1_S1 + 0) - 
                p_over_q * *(b + 1761 * OS1_S1 + 0) +
                10 * one_over_two_q * *(b + 1320 * OS1_S1 + 0);
            *(b + 1531 * OS1_S1 + 1) = prefactor_x * *(b + 1531 * OS1_S1 + 0) - 
                p_over_q * *(b + 1741 * OS1_S1 + 0);
            *(b + 1531 * OS1_S1 + 2) = prefactor_y * *(b + 1531 * OS1_S1 + 0) - 
                p_over_q * *(b + 1761 * OS1_S1 + 0) +
                8 * one_over_two_q * *(b + 1322 * OS1_S1 + 0);
            *(b + 1531 * OS1_S1 + 3) = prefactor_z * *(b + 1531 * OS1_S1 + 0) - 
                p_over_q * *(b + 1762 * OS1_S1 + 0) +
                11 * one_over_two_q * *(b + 1321 * OS1_S1 + 0);
            *(b + 1532 * OS1_S1 + 1) = prefactor_x * *(b + 1532 * OS1_S1 + 0) - 
                p_over_q * *(b + 1742 * OS1_S1 + 0);
            *(b + 1532 * OS1_S1 + 2) = prefactor_y * *(b + 1532 * OS1_S1 + 0) - 
                p_over_q * *(b + 1762 * OS1_S1 + 0) +
                7 * one_over_two_q * *(b + 1323 * OS1_S1 + 0);
            *(b + 1532 * OS1_S1 + 3) = prefactor_z * *(b + 1532 * OS1_S1 + 0) - 
                p_over_q * *(b + 1763 * OS1_S1 + 0) +
                12 * one_over_two_q * *(b + 1322 * OS1_S1 + 0);
            *(b + 1533 * OS1_S1 + 1) = prefactor_x * *(b + 1533 * OS1_S1 + 0) - 
                p_over_q * *(b + 1743 * OS1_S1 + 0);
            *(b + 1533 * OS1_S1 + 2) = prefactor_y * *(b + 1533 * OS1_S1 + 0) - 
                p_over_q * *(b + 1763 * OS1_S1 + 0) +
                6 * one_over_two_q * *(b + 1324 * OS1_S1 + 0);
            *(b + 1533 * OS1_S1 + 3) = prefactor_z * *(b + 1533 * OS1_S1 + 0) - 
                p_over_q * *(b + 1764 * OS1_S1 + 0) +
                13 * one_over_two_q * *(b + 1323 * OS1_S1 + 0);
            *(b + 1534 * OS1_S1 + 1) = prefactor_x * *(b + 1534 * OS1_S1 + 0) - 
                p_over_q * *(b + 1744 * OS1_S1 + 0);
            *(b + 1534 * OS1_S1 + 2) = prefactor_y * *(b + 1534 * OS1_S1 + 0) - 
                p_over_q * *(b + 1764 * OS1_S1 + 0) +
                5 * one_over_two_q * *(b + 1325 * OS1_S1 + 0);
            *(b + 1534 * OS1_S1 + 3) = prefactor_z * *(b + 1534 * OS1_S1 + 0) - 
                p_over_q * *(b + 1765 * OS1_S1 + 0) +
                14 * one_over_two_q * *(b + 1324 * OS1_S1 + 0);
            *(b + 1535 * OS1_S1 + 1) = prefactor_x * *(b + 1535 * OS1_S1 + 0) - 
                p_over_q * *(b + 1745 * OS1_S1 + 0);
            *(b + 1535 * OS1_S1 + 2) = prefactor_y * *(b + 1535 * OS1_S1 + 0) - 
                p_over_q * *(b + 1765 * OS1_S1 + 0) +
                4 * one_over_two_q * *(b + 1326 * OS1_S1 + 0);
            *(b + 1535 * OS1_S1 + 3) = prefactor_z * *(b + 1535 * OS1_S1 + 0) - 
                p_over_q * *(b + 1766 * OS1_S1 + 0) +
                15 * one_over_two_q * *(b + 1325 * OS1_S1 + 0);
            *(b + 1536 * OS1_S1 + 1) = prefactor_x * *(b + 1536 * OS1_S1 + 0) - 
                p_over_q * *(b + 1746 * OS1_S1 + 0);
            *(b + 1536 * OS1_S1 + 2) = prefactor_y * *(b + 1536 * OS1_S1 + 0) - 
                p_over_q * *(b + 1766 * OS1_S1 + 0) +
                3 * one_over_two_q * *(b + 1327 * OS1_S1 + 0);
            *(b + 1536 * OS1_S1 + 3) = prefactor_z * *(b + 1536 * OS1_S1 + 0) - 
                p_over_q * *(b + 1767 * OS1_S1 + 0) +
                16 * one_over_two_q * *(b + 1326 * OS1_S1 + 0);
            *(b + 1537 * OS1_S1 + 1) = prefactor_x * *(b + 1537 * OS1_S1 + 0) - 
                p_over_q * *(b + 1747 * OS1_S1 + 0);
            *(b + 1537 * OS1_S1 + 2) = prefactor_y * *(b + 1537 * OS1_S1 + 0) - 
                p_over_q * *(b + 1767 * OS1_S1 + 0) +
                2 * one_over_two_q * *(b + 1328 * OS1_S1 + 0);
            *(b + 1537 * OS1_S1 + 3) = prefactor_z * *(b + 1537 * OS1_S1 + 0) - 
                p_over_q * *(b + 1768 * OS1_S1 + 0) +
                17 * one_over_two_q * *(b + 1327 * OS1_S1 + 0);
            *(b + 1538 * OS1_S1 + 1) = prefactor_x * *(b + 1538 * OS1_S1 + 0) - 
                p_over_q * *(b + 1748 * OS1_S1 + 0);
            *(b + 1538 * OS1_S1 + 2) = prefactor_y * *(b + 1538 * OS1_S1 + 0) - 
                p_over_q * *(b + 1768 * OS1_S1 + 0) +
                one_over_two_q * *(b + 1329 * OS1_S1 + 0);
            *(b + 1538 * OS1_S1 + 3) = prefactor_z * *(b + 1538 * OS1_S1 + 0) - 
                p_over_q * *(b + 1769 * OS1_S1 + 0) +
                18 * one_over_two_q * *(b + 1328 * OS1_S1 + 0);
            *(b + 1539 * OS1_S1 + 1) = prefactor_x * *(b + 1539 * OS1_S1 + 0) - 
                p_over_q * *(b + 1749 * OS1_S1 + 0);
            *(b + 1539 * OS1_S1 + 2) = prefactor_y * *(b + 1539 * OS1_S1 + 0) - 
                p_over_q * *(b + 1769 * OS1_S1 + 0);
            *(b + 1539 * OS1_S1 + 3) = prefactor_z * *(b + 1539 * OS1_S1 + 0) - 
                p_over_q * *(b + 1770 * OS1_S1 + 0) +
                19 * one_over_two_q * *(b + 1329 * OS1_S1 + 0);
            return;
        }
    }
}
