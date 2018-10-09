/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_13(double ae,
                         double be,
                         double cc,
                         double xAB,
                         double yAB,
                         double zAB,
                         double* const gx,
                         double* const gy,
                         double* const gz,
                         std::size_t matrix_size,
                         std::size_t Ai,
                         std::size_t Bi)
{
    const double C4367 = ae + be;
    const double C4369 = Pi / C4367;
    const double C4370 = std::sqrt(C4369);
    const double C4375 = be * xAB;
    const double C4374 = ae * xAB;
    const double C4373 = 2. * C4367;
    const double C4376 = C4370 * C4375;
    const double C4383 = std::pow(C4367, 2);
    const double C4382 = C4374 * C4376;
    const double C4381 = C4370 / C4373;
    const double C4384 = C4382 / C4383;
    const double C4385 = C4381 - C4384;
    const double C4388 = ae * yAB;
    const double C4392 = ae * zAB;
    const double C4398 = be * yAB;
    const double C4399 = C4370 * C4398;
    const double C4400 = C4388 * C4399;
    const double C4401 = C4400 / C4383;
    const double C4402 = C4381 - C4401;
    const double C4406 = be * zAB;
    const double C4407 = C4370 * C4406;
    const double C4408 = C4392 * C4407;
    const double C4409 = C4408 / C4383;
    const double C4410 = C4381 - C4409;
    const double C4428 = C4407 / C4367;
    const double C4427 = C4410 * C4392;
    const double C4426 = C4399 / C4367;
    const double C4425 = C4402 * C4388;
    const double C4424 = C4370 * C4392;
    const double C4423 = std::pow(C4392, 2);
    const double C4422 = 2. * C4383;
    const double C4421 = C4370 * C4388;
    const double C4420 = std::pow(C4388, 2);
    const double C4419 = std::pow(C4374, 2);
    const double C4418 = C4376 / C4367;
    const double C4417 = C4370 * C4374;
    const double C4416 = std::pow(C4367, 2);
    const double C4415 = ae * xAB;
    const double C4414 = be * xAB;
    const double C4436 = C4427 / C4367;
    const double C4435 = C4425 / C4367;
    const double C4434 = C4424 / C4367;
    const double C4433 = C4370 * C4423;
    const double C4432 = C4421 / C4367;
    const double C4431 = C4370 * C4420;
    const double C4430 = C4370 * C4419;
    const double C4429 = C4417 / C4367;
    const double C4442 = C4434 - C4428;
    const double C4441 = C4432 - C4426;
    const double C4440 = C4433 / C4383;
    const double C4439 = C4431 / C4383;
    const double C4438 = C4430 / C4383;
    const double C4437 = C4429 - C4418;
    const double C4448 = C4442 / C4373;
    const double C4447 = C4441 / C4373;
    const double C4446 = C4440 + C4381;
    const double C4445 = C4439 + C4381;
    const double C4444 = C4438 + C4381;
    const double C4443 = C4437 / C4373;
    const double C4450 = C4436 + C4448;
    const double C4449 = C4435 + C4447;
    const double C3669 = std::sqrt(Pi / (ae + be));
    const double C3670 = -(std::sqrt(Pi / C4367) * C4414) / C4367;
    const double C3671 = C4370 / (2. * C4367) - (C4415 * C4370 * C4414) / C4416;
    const double C3672 = (C4370 * C4415) / C4367;
    const double C3673 =
        ((C4370 / C4373 - (C4374 * C4376) / C4416) * C4374) / C4367 + C4443;
    const double C3676 = -(C4370 * be * yAB) / C4367;
    const double C3677 = (((C4385 * C4374) / C4367 + C4443) * C4374) / C4367 +
                         (C4444 + 2 * C4385) / C4373;
    const double C3678 = -(C4370 * be * zAB) / C4367;
    const double C3888 = (C4445 * C4388) / C4367 + (2. * C4421) / C4422;
    const double C3986 = (C4446 * C4392) / C4367 + (2. * C4424) / C4422;
    const double C4098 = (C4444 * C4374) / C4367 + (2. * C4417) / C4422;
    const double C4131 = (C4449 * C4388) / C4367 + (C4445 + 2 * C4402) / C4373;
    const double C4256 = (C4450 * C4392) / C4367 + (C4446 + 2 * C4410) / C4373;
    const double C3692 = ae * C3678;
    const double C3691 = ae * C3676;
    const double C3690 = be * zAB;
    const double C3689 = be * yAB;
    const double C3688 = std::pow(ae, 2);
    const double C3687 = ae * C3673;
    const double C3686 = ae * C3672;
    const double C3685 = ae * C3671;
    const double C3684 = ae * C3669;
    const double C3683 = ae * xAB;
    const double C3682 = be * xAB;
    const double C3681 = ae * C3670;
    const double C3680 = ae + be;
    const double C3679 = be * C3669;
    const double C3710 = 2 * C3692;
    const double C3709 = 2 * C3691;
    const double C3708 = std::pow(C3683, 2);
    const double C3707 = C3682 / C3680;
    const double C3706 = std::pow(C3680, 2);
    const double C3705 = C3690 / C3680;
    const double C3704 = Pi / C3680;
    const double C3703 = C3689 / C3680;
    const double C3702 = 2 * C3687;
    const double C3701 = 2 * C3686;
    const double C3700 = 2 * C3681;
    const double C3699 = 2 * C3685;
    const double C3698 = 2. * C3684;
    const double C3697 = C3681 * C3683;
    const double C3696 = 4. * C3681;
    const double C3695 = C3681 * C3682;
    const double C3694 = 2. * C3680;
    const double C3693 = 2 * C3679;
    const double C3723 = std::pow(C3707, 2);
    const double C3722 = std::pow(C3705, 2);
    const double C3721 = ae * C3700;
    const double C3720 = be * C3700;
    const double C3719 = std::sqrt(C3704);
    const double C3718 = 1 / C3694;
    const double C3717 = std::pow(C3703, 2);
    const double C3716 = C3700 + C3701;
    const double C3715 = C3698 / C3694;
    const double C3714 = 2 * C3697;
    const double C3713 = C3696 / C3694;
    const double C3712 = 2 * C3695;
    const double C3711 = -C3693;
    const double C3736 = C3719 * C3708;
    const double C3735 = C3719 * C3683;
    const double C3734 = C3719 / C3694;
    const double C3733 = C3723 + C3718;
    const double C3732 = C3719 * C3682;
    const double C3731 = C3722 + C3718;
    const double C3730 = 4. * C3721;
    const double C3729 = 4 * C3720;
    const double C3728 = C3717 + C3718;
    const double C3727 = C3716 / C3694;
    const double C3726 = C3714 / C3680;
    const double C3725 = C3712 / C3680;
    const double C3724 = C3711 / C3694;
    const double C3749 = C3736 / C3706;
    const double C3748 = C3732 / C3680;
    const double C3747 = C3735 / C3680;
    const double C3746 = be * C3735;
    const double C3745 = C3683 * C3732;
    const double C3744 = C3688 * C3733;
    const double C3743 = ae * C3732;
    const double C3742 = C3688 * C3731;
    const double C3741 = C3730 / C3694;
    const double C3740 = -C3729;
    const double C3739 = C3688 * C3728;
    const double C3738 = C3726 + C3715;
    const double C3737 = C3724 - C3725;
    const double C3762 = C3749 + C3734;
    const double C3761 = C3747 - C3748;
    const double C3760 = 2 * C3746;
    const double C3759 = C3745 / C3706;
    const double C3758 = 2 * C3744;
    const double C3757 = -2 * C3743;
    const double C3756 = 2 * C3742;
    const double C3755 = C3740 / C3694;
    const double C3754 = ae * C3737;
    const double C3753 = 2 * C3739;
    const double C3752 = C3738 * C3683;
    const double C3751 = C3738 + C3737;
    const double C3750 = C3737 * C3683;
    const double C3777 = be * C3762;
    const double C3776 = C3761 / C3694;
    const double C3775 = ae * C3760;
    const double C3774 = C3734 - C3759;
    const double C3773 = ae - C3758;
    const double C3772 = be * C3757;
    const double C3771 = ae - C3756;
    const double C3770 = C3754 * C3683;
    const double C3769 = 4 * C3754;
    const double C3768 = C3754 * C3682;
    const double C3767 = 2 * C3754;
    const double C3766 = ae - C3753;
    const double C3765 = C3752 / C3680;
    const double C3764 = C3751 + C3699;
    const double C3763 = C3750 / C3680;
    const double C3794 = 2 * C3774;
    const double C3793 = 2 * C3777;
    const double C3792 = C3774 * C3683;
    const double C3791 = C3775 / C3706;
    const double C3790 = be * C3774;
    const double C3789 = C3773 * C3719;
    const double C3788 = C3772 / C3706;
    const double C3787 = C3771 * C3719;
    const double C3786 = 2 * C3770;
    const double C3785 = C3767 + C3769;
    const double C3784 = ae * C3767;
    const double C3783 = 2 * C3768;
    const double C3782 = be * C3767;
    const double C3781 = C3766 * C3719;
    const double C3780 = C3765 + C3727;
    const double C3779 = C3764 / C3694;
    const double C3778 = C3763 + C3713;
    const double C3808 = C3762 + C3794;
    const double C3807 = C3793 - C3719;
    const double C3806 = C3792 / C3680;
    const double C3805 = C3789 * C3683;
    const double C3804 = C3790 * ae;
    const double C3803 = C3789 / C3694;
    const double C3802 = C3789 * C3682;
    const double C3801 = C3786 / C3680;
    const double C3800 = C3785 / C3694;
    const double C3799 = 6. * C3784;
    const double C3798 = C3783 / C3680;
    const double C3797 = 6 * C3782;
    const double C3796 = 2 * C3778;
    const double C3795 = C3778 * C3683;
    const double C3820 = C3808 / C3694;
    const double C3819 = C3807 * ae;
    const double C3818 = C3806 + C3776;
    const double C3817 = C3805 / C3680;
    const double C3816 = 2 * C3804;
    const double C3815 = C3802 / C3680;
    const double C3814 = C3801 + C3741;
    const double C3813 = C3799 / C3694;
    const double C3812 = C3755 - C3798;
    const double C3811 = -C3797;
    const double C3810 = C3780 + C3796;
    const double C3809 = C3795 / C3680;
    const double C3831 = C3818 * C3683;
    const double C3830 = C3819 / C3680;
    const double C3829 = be * C3818;
    const double C3828 = C3817 + C3791;
    const double C3827 = C3816 / C3680;
    const double C3826 = C3788 - C3815;
    const double C3825 = C3812 * C3683;
    const double C3824 = ae * C3812;
    const double C3823 = C3811 / C3694;
    const double C3822 = C3810 + C3702;
    const double C3821 = C3809 + C3779;
    const double C3843 = C3831 / C3680;
    const double C3842 = C3828 * C3683;
    const double C3841 = 2 * C3829;
    const double C3840 = C3828 + C3826;
    const double C3839 = C3826 * C3683;
    const double C3838 = C3825 / C3680;
    const double C3837 = C3824 * C3683;
    const double C3836 = 6 * C3824;
    const double C3835 = 2 * C3824;
    const double C3834 = C3824 * C3682;
    const double C3833 = C3822 / C3694;
    const double C3832 = C3821 * C3683;
    const double C3853 = C3843 + C3820;
    const double C3852 = C3842 / C3680;
    const double C3851 = C3841 + C3748;
    const double C3850 = C3840 / C3694;
    const double C3849 = C3839 / C3680;
    const double C3848 = C3838 + C3800;
    const double C3847 = 2 * C3837;
    const double C3846 = C3835 + C3836;
    const double C3845 = 2 * C3834;
    const double C3844 = C3832 / C3680;
    const double C3861 = be * C3853;
    const double C3860 = C3852 + C3803;
    const double C3859 = C3851 * ae;
    const double C3858 = C3849 + C3803;
    const double C3857 = C3847 / C3680;
    const double C3856 = C3846 / C3694;
    const double C3855 = C3845 / C3680;
    const double C3854 = C3844 + C3833;
    const double C3867 = 2 * C3861;
    const double C3866 = C3860 + C3830;
    const double C3865 = C3859 / C3680;
    const double C3864 = C3858 + C3827;
    const double C3863 = C3857 + C3813;
    const double C3862 = C3823 - C3855;
    const double C3871 = C3867 - C3794;
    const double C3870 = 2 * C3864;
    const double C3869 = C3864 * C3683;
    const double C3868 = C3862 * C3683;
    const double C3875 = C3871 * ae;
    const double C3874 = C3866 + C3870;
    const double C3873 = C3869 / C3680;
    const double C3872 = C3868 / C3680;
    const double C3879 = C3875 / C3680;
    const double C3878 = C3874 / C3694;
    const double C3877 = C3873 + C3850;
    const double C3876 = C3872 + C3856;
    const double C3880 = C3877 + C3865;
    const double C3881 = C3880 * C3683;
    const double C3882 = C3881 / C3680;
    const double C3883 = C3882 + C3878;
    const double C3884 = C3883 + C3879;
    const double C3900 = ae * C3709;
    const double C3899 = C3691 * C3689;
    const double C3898 = be * C4370;
    const double C3897 = be * C3709;
    const double C3896 = ae * C4445;
    const double C3895 = ae * C4432;
    const double C3894 = ae * C4370;
    const double C3893 = 2. * C3706;
    const double C3892 = C3781 / C3694;
    const double C3891 = ae * yAB;
    const double C3911 = 4. * C3900;
    const double C3910 = 2 * C3899;
    const double C3909 = 2 * C3898;
    const double C3908 = 4 * C3897;
    const double C3907 = 2 * C3896;
    const double C3906 = 2 * C3895;
    const double C3905 = 2. * C3894;
    const double C3904 = C3691 * C3891;
    const double C3903 = std::pow(C3891, 2);
    const double C3902 = C3719 * C3891;
    const double C3901 = C3781 * C3891;
    const double C3922 = C3911 / C3694;
    const double C3921 = C3910 / C3680;
    const double C3920 = -C3909;
    const double C3919 = -C3908;
    const double C3918 = C3709 + C3906;
    const double C3917 = C3905 / C3694;
    const double C3916 = 2 * C3904;
    const double C3915 = 2. * C3902;
    const double C3914 = C3719 * C3903;
    const double C3913 = be * C3902;
    const double C3912 = C3901 / C3680;
    const double C3930 = C3920 / C3694;
    const double C3929 = C3919 / C3694;
    const double C3928 = C3918 / C3694;
    const double C3927 = C3916 / C3680;
    const double C3926 = C3915 / C3680;
    const double C3925 = C3915 / C3893;
    const double C3924 = C3914 / C3706;
    const double C3923 = 2 * C3913;
    const double C3934 = C3930 - C3921;
    const double C3933 = C3927 + C3917;
    const double C3932 = C3924 + C3734;
    const double C3931 = ae * C3923;
    const double C3940 = ae * C3934;
    const double C3939 = 2 * C3933;
    const double C3938 = C3933 * C3891;
    const double C3937 = C3932 * C3891;
    const double C3936 = be * C3932;
    const double C3935 = C3931 / C3706;
    const double C3948 = C3940 * C3891;
    const double C3947 = 2 * C3940;
    const double C3946 = C3940 * C3689;
    const double C3945 = C3939 + C3907;
    const double C3944 = C3938 / C3680;
    const double C3943 = C3937 / C3680;
    const double C3942 = 2 * C3936;
    const double C3941 = C3912 + C3935;
    const double C3956 = 2 * C3948;
    const double C3955 = ae * C3947;
    const double C3954 = 2 * C3946;
    const double C3953 = C3945 / C3694;
    const double C3952 = C3944 + C3928;
    const double C3951 = C3943 + C3925;
    const double C3950 = C3942 - C3719;
    const double C3949 = C3941 * C3891;
    const double C3963 = C3956 / C3680;
    const double C3962 = 6. * C3955;
    const double C3961 = C3954 / C3680;
    const double C3960 = C3952 * C3891;
    const double C3959 = be * C3951;
    const double C3958 = C3950 * ae;
    const double C3957 = C3949 / C3680;
    const double C3970 = C3963 + C3922;
    const double C3969 = C3962 / C3694;
    const double C3968 = C3929 - C3961;
    const double C3967 = C3960 / C3680;
    const double C3966 = 2 * C3959;
    const double C3965 = C3958 / C3680;
    const double C3964 = C3957 + C3892;
    const double C3974 = ae * C3968;
    const double C3973 = C3967 + C3953;
    const double C3972 = C3966 - C3926;
    const double C3971 = C3964 + C3965;
    const double C3977 = C3974 * C3891;
    const double C3976 = C3972 * ae;
    const double C3975 = C3971 * C3891;
    const double C3979 = 2 * C3977;
    const double C3978 = C3975 + C3941;
    const double C3981 = C3979 / C3680;
    const double C3980 = C3978 + C3976;
    const double C3982 = C3981 + C3969;
    const double C3997 = ae * C3710;
    const double C3996 = C3692 * C3690;
    const double C3995 = be * C4370;
    const double C3994 = be * C3710;
    const double C3993 = ae * C4446;
    const double C3992 = ae * C4434;
    const double C3991 = ae * C4370;
    const double C3990 = C3787 / C3694;
    const double C3989 = ae * zAB;
    const double C4008 = 4. * C3997;
    const double C4007 = 2 * C3996;
    const double C4006 = 2 * C3995;
    const double C4005 = 4 * C3994;
    const double C4004 = 2 * C3993;
    const double C4003 = 2 * C3992;
    const double C4002 = 2. * C3991;
    const double C4001 = C3692 * C3989;
    const double C4000 = std::pow(C3989, 2);
    const double C3999 = C3719 * C3989;
    const double C3998 = C3787 * C3989;
    const double C4019 = C4008 / C3694;
    const double C4018 = C4007 / C3680;
    const double C4017 = -C4006;
    const double C4016 = -C4005;
    const double C4015 = C3710 + C4003;
    const double C4014 = C4002 / C3694;
    const double C4013 = 2 * C4001;
    const double C4012 = 2. * C3999;
    const double C4011 = C3719 * C4000;
    const double C4010 = be * C3999;
    const double C4009 = C3998 / C3680;
    const double C4027 = C4017 / C3694;
    const double C4026 = C4016 / C3694;
    const double C4025 = C4015 / C3694;
    const double C4024 = C4013 / C3680;
    const double C4023 = C4012 / C3680;
    const double C4022 = C4012 / C3893;
    const double C4021 = C4011 / C3706;
    const double C4020 = 2 * C4010;
    const double C4031 = C4027 - C4018;
    const double C4030 = C4024 + C4014;
    const double C4029 = C4021 + C3734;
    const double C4028 = ae * C4020;
    const double C4037 = ae * C4031;
    const double C4036 = 2 * C4030;
    const double C4035 = C4030 * C3989;
    const double C4034 = C4029 * C3989;
    const double C4033 = be * C4029;
    const double C4032 = C4028 / C3706;
    const double C4045 = C4037 * C3989;
    const double C4044 = 2 * C4037;
    const double C4043 = C4037 * C3690;
    const double C4042 = C4036 + C4004;
    const double C4041 = C4035 / C3680;
    const double C4040 = C4034 / C3680;
    const double C4039 = 2 * C4033;
    const double C4038 = C4009 + C4032;
    const double C4053 = 2 * C4045;
    const double C4052 = ae * C4044;
    const double C4051 = 2 * C4043;
    const double C4050 = C4042 / C3694;
    const double C4049 = C4041 + C4025;
    const double C4048 = C4040 + C4022;
    const double C4047 = C4039 - C3719;
    const double C4046 = C4038 * C3989;
    const double C4060 = C4053 / C3680;
    const double C4059 = 6. * C4052;
    const double C4058 = C4051 / C3680;
    const double C4057 = C4049 * C3989;
    const double C4056 = be * C4048;
    const double C4055 = C4047 * ae;
    const double C4054 = C4046 / C3680;
    const double C4067 = C4060 + C4019;
    const double C4066 = C4059 / C3694;
    const double C4065 = C4026 - C4058;
    const double C4064 = C4057 / C3680;
    const double C4063 = 2 * C4056;
    const double C4062 = C4055 / C3680;
    const double C4061 = C4054 + C3990;
    const double C4071 = ae * C4065;
    const double C4070 = C4064 + C4050;
    const double C4069 = C4063 - C4023;
    const double C4068 = C4061 + C4062;
    const double C4074 = C4071 * C3989;
    const double C4073 = C4069 * ae;
    const double C4072 = C4068 * C3989;
    const double C4076 = 2 * C4074;
    const double C4075 = C4072 + C4038;
    const double C4078 = C4076 / C3680;
    const double C4077 = C4075 + C4073;
    const double C4079 = C4078 + C4066;
    const double C4106 = 2. * C3735;
    const double C4105 = C3762 * C3683;
    const double C4104 = C3866 * C3683;
    const double C4103 = C3781 * C3689;
    const double C4102 = C3719 * C3689;
    const double C4101 = ae * C4444;
    const double C4100 = 2 * C3738;
    const double C4099 = C3780 * C3683;
    const double C4114 = C4106 / C3680;
    const double C4113 = C4106 / C3893;
    const double C4112 = C4105 / C3680;
    const double C4111 = C4104 + C3828;
    const double C4110 = C4103 / C3680;
    const double C4109 = ae * C4102;
    const double C4108 = 2 * C4101;
    const double C4107 = C4099 / C3680;
    const double C4117 = C4112 + C4113;
    const double C4116 = -2 * C4109;
    const double C4115 = C4100 + C4108;
    const double C4120 = be * C4117;
    const double C4119 = be * C4116;
    const double C4118 = C4115 / C3694;
    const double C4123 = 2 * C4120;
    const double C4122 = C4119 / C3706;
    const double C4121 = C4107 + C4118;
    const double C4125 = C4123 - C4114;
    const double C4124 = C4122 - C4110;
    const double C4126 = C4125 * ae;
    const double C4127 = C4111 + C4126;
    const double C4149 = 4 * C3940;
    const double C4148 = C3968 * C3891;
    const double C4147 = 6 * C3974;
    const double C4146 = 2 * C3974;
    const double C4145 = C3974 * C3689;
    const double C4144 = be * C3947;
    const double C4143 = ae * C4449;
    const double C4142 = ae * C4402;
    const double C4141 = C3933 + C3934;
    const double C4140 = 4. * C3691;
    const double C4139 = C3934 * C3891;
    const double C4138 = C4102 / C3680;
    const double C4137 = C3902 / C3680;
    const double C4136 = C3941 + C4124;
    const double C4135 = C3891 * C4102;
    const double C4134 = C4124 * C3891;
    const double C4162 = C3947 + C4149;
    const double C4161 = C4148 / C3680;
    const double C4160 = C4146 + C4147;
    const double C4159 = 2 * C4145;
    const double C4158 = 6 * C4144;
    const double C4157 = 2 * C4143;
    const double C4156 = 2 * C4142;
    const double C4155 = C4140 / C3694;
    const double C4154 = C4139 / C3680;
    const double C4153 = C4137 - C4138;
    const double C4152 = C4136 / C3694;
    const double C4151 = C4135 / C3706;
    const double C4150 = C4134 / C3680;
    const double C4171 = C4162 / C3694;
    const double C4170 = C4160 / C3694;
    const double C4169 = C4159 / C3680;
    const double C4168 = -C4158;
    const double C4167 = C4141 + C4156;
    const double C4166 = C4154 + C4155;
    const double C4165 = C4153 / C3694;
    const double C4164 = C3734 - C4151;
    const double C4163 = C4150 + C3892;
    const double C4179 = C4161 + C4171;
    const double C4178 = C4168 / C3694;
    const double C4177 = 2 * C4166;
    const double C4176 = C4167 / C3694;
    const double C4175 = C4166 * C3891;
    const double C4174 = 2 * C4164;
    const double C4173 = C4164 * C3891;
    const double C4172 = be * C4164;
    const double C4185 = C4178 - C4169;
    const double C4184 = C3952 + C4177;
    const double C4183 = C4175 / C3680;
    const double C4182 = C3932 + C4174;
    const double C4181 = C4173 / C3680;
    const double C4180 = C4172 * ae;
    const double C4191 = C4185 * C3891;
    const double C4190 = C4184 + C4157;
    const double C4189 = C4183 + C4176;
    const double C4188 = C4182 / C3694;
    const double C4187 = C4181 + C4165;
    const double C4186 = 2 * C4180;
    const double C4197 = C4191 / C3680;
    const double C4196 = C4190 / C3694;
    const double C4195 = C4189 * C3891;
    const double C4194 = C4187 * C3891;
    const double C4193 = be * C4187;
    const double C4192 = C4186 / C3680;
    const double C4202 = C4197 + C4170;
    const double C4201 = C4195 / C3680;
    const double C4200 = C4194 / C3680;
    const double C4199 = 2 * C4193;
    const double C4198 = C4163 + C4192;
    const double C4207 = C4201 + C4196;
    const double C4206 = C4200 + C4188;
    const double C4205 = 2 * C4198;
    const double C4204 = C4199 + C4138;
    const double C4203 = C4198 * C3891;
    const double C4211 = be * C4206;
    const double C4210 = C3971 + C4205;
    const double C4209 = C4204 * ae;
    const double C4208 = C4203 / C3680;
    const double C4215 = 2 * C4211;
    const double C4214 = C4210 / C3694;
    const double C4213 = C4209 / C3680;
    const double C4212 = C4208 + C4152;
    const double C4217 = C4215 - C4174;
    const double C4216 = C4212 + C4213;
    const double C4219 = C4217 * ae;
    const double C4218 = C4216 * C3891;
    const double C4221 = C4219 / C3680;
    const double C4220 = C4218 / C3680;
    const double C4222 = C4220 + C4214;
    const double C4223 = C4222 + C4221;
    const double C4244 = C3787 * C3690;
    const double C4243 = C3719 * C3690;
    const double C4246 = C4244 / C3680;
    const double C4245 = ae * C4243;
    const double C4247 = -2 * C4245;
    const double C4248 = be * C4247;
    const double C4249 = C4248 / C3706;
    const double C4250 = C4249 - C4246;
    const double C4274 = 4 * C4037;
    const double C4273 = C4065 * C3989;
    const double C4272 = 6 * C4071;
    const double C4271 = 2 * C4071;
    const double C4270 = C4071 * C3690;
    const double C4269 = be * C4044;
    const double C4268 = ae * C4450;
    const double C4267 = ae * C4410;
    const double C4266 = C4030 + C4031;
    const double C4265 = 4. * C3692;
    const double C4264 = C4031 * C3989;
    const double C4263 = C4243 / C3680;
    const double C4262 = C3999 / C3680;
    const double C4261 = C4038 + C4250;
    const double C4260 = C3989 * C4243;
    const double C4259 = C4250 * C3989;
    const double C4287 = C4044 + C4274;
    const double C4286 = C4273 / C3680;
    const double C4285 = C4271 + C4272;
    const double C4284 = 2 * C4270;
    const double C4283 = 6 * C4269;
    const double C4282 = 2 * C4268;
    const double C4281 = 2 * C4267;
    const double C4280 = C4265 / C3694;
    const double C4279 = C4264 / C3680;
    const double C4278 = C4262 - C4263;
    const double C4277 = C4261 / C3694;
    const double C4276 = C4260 / C3706;
    const double C4275 = C4259 / C3680;
    const double C4296 = C4287 / C3694;
    const double C4295 = C4285 / C3694;
    const double C4294 = C4284 / C3680;
    const double C4293 = -C4283;
    const double C4292 = C4266 + C4281;
    const double C4291 = C4279 + C4280;
    const double C4290 = C4278 / C3694;
    const double C4289 = C3734 - C4276;
    const double C4288 = C4275 + C3990;
    const double C4304 = C4286 + C4296;
    const double C4303 = C4293 / C3694;
    const double C4302 = 2 * C4291;
    const double C4301 = C4292 / C3694;
    const double C4300 = C4291 * C3989;
    const double C4299 = 2 * C4289;
    const double C4298 = C4289 * C3989;
    const double C4297 = be * C4289;
    const double C4310 = C4303 - C4294;
    const double C4309 = C4049 + C4302;
    const double C4308 = C4300 / C3680;
    const double C4307 = C4029 + C4299;
    const double C4306 = C4298 / C3680;
    const double C4305 = C4297 * ae;
    const double C4316 = C4310 * C3989;
    const double C4315 = C4309 + C4282;
    const double C4314 = C4308 + C4301;
    const double C4313 = C4307 / C3694;
    const double C4312 = C4306 + C4290;
    const double C4311 = 2 * C4305;
    const double C4322 = C4316 / C3680;
    const double C4321 = C4315 / C3694;
    const double C4320 = C4314 * C3989;
    const double C4319 = C4312 * C3989;
    const double C4318 = be * C4312;
    const double C4317 = C4311 / C3680;
    const double C4327 = C4322 + C4295;
    const double C4326 = C4320 / C3680;
    const double C4325 = C4319 / C3680;
    const double C4324 = 2 * C4318;
    const double C4323 = C4288 + C4317;
    const double C4332 = C4326 + C4321;
    const double C4331 = C4325 + C4313;
    const double C4330 = 2 * C4323;
    const double C4329 = C4324 + C4263;
    const double C4328 = C4323 * C3989;
    const double C4336 = be * C4331;
    const double C4335 = C4068 + C4330;
    const double C4334 = C4329 * ae;
    const double C4333 = C4328 / C3680;
    const double C4340 = 2 * C4336;
    const double C4339 = C4335 / C3694;
    const double C4338 = C4334 / C3680;
    const double C4337 = C4333 + C4277;
    const double C4342 = C4340 - C4299;
    const double C4341 = C4337 + C4338;
    const double C4344 = C4342 * ae;
    const double C4343 = C4341 * C3989;
    const double C4346 = C4344 / C3680;
    const double C4345 = C4343 / C3680;
    const double C4347 = C4345 + C4339;
    const double C4348 = C4347 + C4346;
    const double C4485 = ae * C4304;
    const double C4484 = C4079 + C4310;
    const double C4483 = C4327 * C3989;
    const double C4482 = C4294 - C4303;
    const double C4481 = ae * C4179;
    const double C4480 = C3982 + C4185;
    const double C4479 = C4202 * C3891;
    const double C4478 = -2 * C3824;
    const double C4477 = C4169 - C4178;
    const double C4476 = ae * C3738;
    const double C4475 = C3814 * C3683;
    const double C4474 = 2 * C3863;
    const double C4473 = -2 * C4071;
    const double C4472 = ae * C4030;
    const double C4471 = C4067 * C3989;
    const double C4470 = 2 * C4079;
    const double C4469 = ae * C4067;
    const double C4468 = C4079 * C3989;
    const double C4467 = ae * C3933;
    const double C4466 = C3970 * C3891;
    const double C4465 = 2 * C3982;
    const double C4464 = ae * C3970;
    const double C4463 = C3982 * C3891;
    const double C4462 = C3855 - C3823;
    const double C4461 = C3930 - C4018;
    const double C4460 = -2 * C3974;
    const double C4459 = ae * C3814;
    const double C4458 = C3863 * C3683;
    const double C4457 = ae * C3848;
    const double C4456 = C3863 + C3862;
    const double C4455 = C3876 * C3683;
    const double C4504 = 6 * C4485;
    const double C4503 = C4483 / C3680;
    const double C4502 = 6 * C4481;
    const double C4501 = C4479 / C3680;
    const double C4500 = 4 * C4476;
    const double C4499 = C4475 / C3680;
    const double C4498 = 4 * C4472;
    const double C4497 = C4471 / C3680;
    const double C4496 = 6 * C4469;
    const double C4495 = C4468 / C3680;
    const double C4494 = 4 * C4467;
    const double C4493 = C4466 / C3680;
    const double C4492 = 6 * C4464;
    const double C4491 = C4463 / C3680;
    const double C4490 = ae * C4461;
    const double C4489 = 6 * C4459;
    const double C4488 = C4458 / C3680;
    const double C4487 = 6 * C4457;
    const double C4486 = C4455 / C3680;
    const double C4514 = C4484 + C4504;
    const double C4513 = C4480 + C4502;
    const double C4512 = C3767 + C4500;
    const double C4511 = C4044 + C4498;
    const double C4510 = C4271 + C4496;
    const double C4509 = C3947 + C4494;
    const double C4508 = C4146 + C4492;
    const double C4507 = C4490 * C3690;
    const double C4506 = C3835 + C4489;
    const double C4505 = C4456 + C4487;
    const double C4524 = C4514 / C3694;
    const double C4523 = C4513 / C3694;
    const double C4522 = C4512 / C3694;
    const double C4521 = C4511 / C3694;
    const double C4520 = C4510 / C3694;
    const double C4519 = C4509 / C3694;
    const double C4518 = C4508 / C3694;
    const double C4517 = 2 * C4507;
    const double C4516 = C4506 / C3694;
    const double C4515 = C4505 / C3694;
    const double C4534 = C4503 + C4524;
    const double C4533 = C4501 + C4523;
    const double C4532 = C4499 + C4522;
    const double C4531 = C4497 + C4521;
    const double C4530 = C4495 + C4520;
    const double C4529 = C4493 + C4519;
    const double C4528 = C4491 + C4518;
    const double C4527 = C4517 / C3680;
    const double C4526 = C4488 + C4516;
    const double C4525 = C4486 + C4515;
    const double C4541 = ae * C4532;
    const double C4540 = C4526 * C3683;
    const double C4539 = ae * C4531;
    const double C4538 = C4530 * C3989;
    const double C4537 = ae * C4529;
    const double C4536 = C4528 * C3891;
    const double C4535 = C4026 - C4527;
    const double C4548 = 6 * C4541;
    const double C4547 = C4540 / C3680;
    const double C4546 = 6 * C4539;
    const double C4545 = C4538 / C3680;
    const double C4544 = 6 * C4537;
    const double C4543 = C4536 / C3680;
    const double C4542 = ae * C4535;
    const double C4552 = C4474 + C4548;
    const double C4551 = C4470 + C4546;
    const double C4550 = C4465 + C4544;
    const double C4549 = -2 * C4542;
    const double C4555 = C4552 / C3694;
    const double C4554 = C4551 / C3694;
    const double C4553 = C4550 / C3694;
    const double C4558 = C4547 + C4555;
    const double C4557 = C4545 + C4554;
    const double C4556 = C4543 + C4553;
    const double gx100300 = C3854 * C3781 * C4370 -
                            (((C4525 * C3683) / C3680 +
                              (C4526 + 2 * C3876 +
                               6 * ae *
                                   ((C3848 * C3683) / C3680 +
                                    (C3814 + C3812 + 4 * ae * C3778) / C3694)) /
                                  C3694) *
                             std::pow(C4370, 2)) /
                                2.0 +
                            C3854 * C4370 * C3787;
    const double gx100030 = (C4370 * C3888 * C4462) / 2.0 +
                            (C4370 * C3737 * C3980) / C3680 +
                            C3737 * C3888 * C3787;
    const double gx100003 = (C3986 * C4370 * C4462) / 2.0 +
                            C3737 * C3781 * C3986 +
                            (C3737 * C4370 * C4077) / C3680;
    const double gx100210 = C3821 * C3941 * C4370 -
                            (C4370 * C4432 * C4525) / 2.0 +
                            C3821 * C4432 * C3787;
    const double gx100201 = C3821 * C3781 * C4434 -
                            (C4434 * C4370 * C4525) / 2.0 +
                            C3821 * C4370 * C4038;
    const double gx100021 = (C4434 * C4445 * C4462) / 2.0 +
                            C3737 * C3971 * C4434 + C3737 * C4445 * C4038;
    const double gx100120 = C3778 * C3971 * C4370 -
                            (C4370 * C4445 * C3876) / 2.0 +
                            C3778 * C4445 * C3787;
    const double gx100102 = C3778 * C3781 * C4446 -
                            (C4446 * C4370 * C3876) / 2.0 +
                            C3778 * C4370 * C4068;
    const double gx100012 = (C4446 * C4432 * C4462) / 2.0 +
                            C3737 * C3941 * C4446 + C3737 * C4432 * C4068;
    const double gx100111 = C3778 * C3941 * C4434 -
                            (C4434 * C4432 * C3876) / 2.0 +
                            C3778 * C4432 * C4038;
    const double gx010300 = C4121 * C4124 * C4370 -
                            (C4370 * C3676 * C4558) / 2.0 +
                            C4121 * C3676 * C3787;
    const double gx010030 = (C4370 * C4131 * C4478) / 2.0 +
                            2 * C3681 * C4223 * C4370 +
                            2 * C3681 * C4131 * C3787;
    const double gx010003 = (C3986 * C3676 * C4478) / 2.0 +
                            2 * C3681 * C4124 * C3986 +
                            (2 * C3681 * C3676 * C4077) / C3680;
    const double gx010210 = C3780 * C4198 * C4370 -
                            (C4370 * C4402 * C4526) / 2.0 +
                            C3780 * C4402 * C3787;
    const double gx010201 = C3780 * C4124 * C4434 -
                            (C4434 * C3676 * C4526) / 2.0 +
                            C3780 * C3676 * C4038;
    const double gx010021 = (C4434 * C4449 * C4478) / 2.0 +
                            2 * C3681 * C4216 * C4434 +
                            2 * C3681 * C4449 * C4038;
    const double gx010120 = C3738 * C4216 * C4370 -
                            (C4370 * C4449 * C3863) / 2.0 +
                            C3738 * C4449 * C3787;
    const double gx010102 = C3738 * C4124 * C4446 -
                            (C4446 * C3676 * C3863) / 2.0 +
                            C3738 * C3676 * C4068;
    const double gx010012 = (C4446 * C4402 * C4478) / 2.0 +
                            2 * C3681 * C4198 * C4446 +
                            2 * C3681 * C4402 * C4068;
    const double gx010111 = C3738 * C4198 * C4434 -
                            (C4434 * C4402 * C3863) / 2.0 +
                            C3738 * C4402 * C4038;
    const double gx001300 = C4121 * C3781 * C3678 -
                            (C3678 * C4370 * C4558) / 2.0 +
                            C4121 * C4370 * C4250;
    const double gx001030 = (C3678 * C3888 * C4478) / 2.0 +
                            (C3678 * 2 * C3681 * C3980) / C3680 +
                            2 * C3681 * C3888 * C4250;
    const double gx001003 = (C4256 * C4370 * C4478) / 2.0 +
                            2 * C3681 * C3781 * C4256 +
                            2 * C3681 * C4370 * C4348;
    const double gx001210 = C3780 * C3941 * C3678 -
                            (C3678 * C4432 * C4526) / 2.0 +
                            C3780 * C4432 * C4250;
    const double gx001201 = C3780 * C3781 * C4410 -
                            (C4410 * C4370 * C4526) / 2.0 +
                            C3780 * C4370 * C4323;
    const double gx001021 = (C4410 * C4445 * C4478) / 2.0 +
                            2 * C3681 * C3971 * C4410 +
                            2 * C3681 * C4445 * C4323;
    const double gx001120 = C3738 * C3971 * C3678 -
                            (C3678 * C4445 * C3863) / 2.0 +
                            C3738 * C4445 * C4250;
    const double gx001102 = C3738 * C3781 * C4450 -
                            (C4450 * C4370 * C3863) / 2.0 +
                            C3738 * C4370 * C4341;
    const double gx001012 = (C4450 * C4432 * C4478) / 2.0 +
                            2 * C3681 * C3941 * C4450 +
                            2 * C3681 * C4432 * C4341;
    const double gx001111 = C3738 * C3941 * C4410 -
                            (C4410 * C4432 * C3863) / 2.0 +
                            C3738 * C4432 * C4323;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx100210 - std::sqrt(5.0 / 8.0) * gx100030);
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gx100111;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gx100012 + std::sqrt(3.0 / 8.0) * gx100210 +
               std::sqrt(3.0 / 8.0) * gx100030);
    gx[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (gx100003 - 1.5 * gx100201 - 1.5 * gx100021);
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gx100102 - (std::sqrt(3.0 / 8.0) * gx100120 +
                                           std::sqrt(3.0 / 8.0) * gx100300));
    gx[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gx100201 - std::sqrt(7.5) * gx100021);
    gx[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx100300 + std::sqrt(45.0 / 8.0) * gx100120);
    gx[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx010210 - std::sqrt(5.0 / 8.0) * gx010030);
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gx010111;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gx010012 + std::sqrt(3.0 / 8.0) * gx010210 +
               std::sqrt(3.0 / 8.0) * gx010030);
    gx[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (gx010003 - 1.5 * gx010201 - 1.5 * gx010021);
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gx010102 - (std::sqrt(3.0 / 8.0) * gx010120 +
                                           std::sqrt(3.0 / 8.0) * gx010300));
    gx[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gx010201 - std::sqrt(7.5) * gx010021);
    gx[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx010300 + std::sqrt(45.0 / 8.0) * gx010120);
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx001210 - std::sqrt(5.0 / 8.0) * gx001030);
    gx[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gx001111;
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gx001012 + std::sqrt(3.0 / 8.0) * gx001210 +
               std::sqrt(3.0 / 8.0) * gx001030);
    gx[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (gx001003 - 1.5 * gx001201 - 1.5 * gx001021);
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gx001102 - (std::sqrt(3.0 / 8.0) * gx001120 +
                                           std::sqrt(3.0 / 8.0) * gx001300));
    gx[(Ai + 2) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gx001201 - std::sqrt(7.5) * gx001021);
    gx[(Ai + 2) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx001300 + std::sqrt(45.0 / 8.0) * gx001120);
    const double gy100300 = C3884 * C3709 * C4370 +
                            (C4370 * C3677 * C4460) / 2.0 +
                            C3677 * C3709 * C3787;
    const double gy100030 = C3826 * C3973 * C4370 -
                            (C4370 * C3670 * C4556) / 2.0 +
                            C3670 * C3973 * C3787;
    const double gy100003 = C3826 * C3709 * C3986 +
                            (C3986 * C3670 * C4460) / 2.0 +
                            (C3670 * C3709 * C4077) / C3680;
    const double gy100210 = C3880 * C3933 * C4370 -
                            (C4370 * C3673 * C3982) / 2.0 +
                            C3673 * C3933 * C3787;
    const double gy100201 = C3880 * C3709 * C4434 +
                            (C4434 * C3673 * C4460) / 2.0 +
                            C3673 * C3709 * C4038;
    const double gy100021 = C3826 * C3952 * C4434 -
                            (C4434 * C3670 * C4528) / 2.0 +
                            C3670 * C3952 * C4038;
    const double gy100120 = C3864 * C3952 * C4370 -
                            (C4370 * C3671 * C4528) / 2.0 +
                            C3671 * C3952 * C3787;
    const double gy100102 = C3864 * C3709 * C4446 +
                            (C4446 * C3671 * C4460) / 2.0 +
                            C3671 * C3709 * C4068;
    const double gy100012 = C3826 * C3933 * C4446 -
                            (C4446 * C3670 * C3982) / 2.0 +
                            C3670 * C3933 * C4068;
    const double gy100111 = C3864 * C3933 * C4434 -
                            (C4434 * C3671 * C3982) / 2.0 +
                            C3671 * C3933 * C4038;
    const double gy010300 = (C4370 * C3934 * C4127) / C3680 +
                            (C4370 * C4098 * C4477) / 2.0 +
                            C4098 * C3934 * C3787;
    const double gy010030 = C3789 * C4207 * C4370 -
                            (C4370 * C3669 *
                             ((C4533 * C3891) / C3680 +
                              (C4528 + 2 * C4202 +
                               6 * ae *
                                   ((C4179 * C3891) / C3680 +
                                    (C3970 + C3968 + 4 * ae * C4166) / C3694)) /
                                  C3694)) /
                                2.0 +
                            C3669 * C4207 * C3787;
    const double gy010003 = C3789 * C3934 * C3986 +
                            (C3986 * C3669 * C4477) / 2.0 +
                            (C3669 * C3934 * C4077) / C3680;
    const double gy010210 = C3866 * C4166 * C4370 -
                            (C4370 * C4444 * C4202) / 2.0 +
                            C4444 * C4166 * C3787;
    const double gy010201 = C3866 * C3934 * C4434 +
                            (C4434 * C4444 * C4477) / 2.0 +
                            C4444 * C3934 * C4038;
    const double gy010021 = C3789 * C4189 * C4434 -
                            (C4434 * C3669 * C4533) / 2.0 +
                            C3669 * C4189 * C4038;
    const double gy010120 = C3828 * C4189 * C4370 -
                            (C4370 * C3672 * C4533) / 2.0 +
                            C3672 * C4189 * C3787;
    const double gy010102 = C3828 * C3934 * C4446 +
                            (C4446 * C3672 * C4477) / 2.0 +
                            C3672 * C3934 * C4068;
    const double gy010012 = C3789 * C4166 * C4446 -
                            (C4446 * C3669 * C4202) / 2.0 +
                            C3669 * C4166 * C4068;
    const double gy010111 = C3828 * C4166 * C4434 -
                            (C4434 * C3672 * C4202) / 2.0 +
                            C3672 * C4166 * C4038;
    const double gy001300 = (C3678 * 2 * C3691 * C4127) / C3680 +
                            (C3678 * C4098 * C4460) / 2.0 +
                            C4098 * C3709 * C4250;
    const double gy001030 = C3789 * C3973 * C3678 -
                            (C3678 * C3669 * C4556) / 2.0 +
                            C3669 * C3973 * C4250;
    const double gy001003 = C3789 * C3709 * C4256 +
                            (C4256 * C3669 * C4460) / 2.0 +
                            C3669 * C3709 * C4348;
    const double gy001210 = C3866 * C3933 * C3678 -
                            (C3678 * C4444 * C3982) / 2.0 +
                            C4444 * C3933 * C4250;
    const double gy001201 = C3866 * C3709 * C4410 +
                            (C4410 * C4444 * C4460) / 2.0 +
                            C4444 * C3709 * C4323;
    const double gy001021 = C3789 * C3952 * C4410 -
                            (C4410 * C3669 * C4528) / 2.0 +
                            C3669 * C3952 * C4323;
    const double gy001120 = C3828 * C3952 * C3678 -
                            (C3678 * C3672 * C4528) / 2.0 +
                            C3672 * C3952 * C4250;
    const double gy001102 = C3828 * C3709 * C4450 +
                            (C4450 * C3672 * C4460) / 2.0 +
                            C3672 * C3709 * C4341;
    const double gy001012 = C3789 * C3933 * C4450 -
                            (C4450 * C3669 * C3982) / 2.0 +
                            C3669 * C3933 * C4341;
    const double gy001111 = C3828 * C3933 * C4410 -
                            (C4410 * C3672 * C3982) / 2.0 +
                            C3672 * C3933 * C4323;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy100210 - std::sqrt(5.0 / 8.0) * gy100030);
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gy100111;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gy100012 + std::sqrt(3.0 / 8.0) * gy100210 +
               std::sqrt(3.0 / 8.0) * gy100030);
    gy[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (gy100003 - 1.5 * gy100201 - 1.5 * gy100021);
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gy100102 - (std::sqrt(3.0 / 8.0) * gy100120 +
                                           std::sqrt(3.0 / 8.0) * gy100300));
    gy[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gy100201 - std::sqrt(7.5) * gy100021);
    gy[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy100300 + std::sqrt(45.0 / 8.0) * gy100120);
    gy[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy010210 - std::sqrt(5.0 / 8.0) * gy010030);
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gy010111;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gy010012 + std::sqrt(3.0 / 8.0) * gy010210 +
               std::sqrt(3.0 / 8.0) * gy010030);
    gy[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (gy010003 - 1.5 * gy010201 - 1.5 * gy010021);
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gy010102 - (std::sqrt(3.0 / 8.0) * gy010120 +
                                           std::sqrt(3.0 / 8.0) * gy010300));
    gy[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gy010201 - std::sqrt(7.5) * gy010021);
    gy[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy010300 + std::sqrt(45.0 / 8.0) * gy010120);
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy001210 - std::sqrt(5.0 / 8.0) * gy001030);
    gy[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gy001111;
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gy001012 + std::sqrt(3.0 / 8.0) * gy001210 +
               std::sqrt(3.0 / 8.0) * gy001030);
    gy[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (gy001003 - 1.5 * gy001201 - 1.5 * gy001021);
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gy001102 - (std::sqrt(3.0 / 8.0) * gy001120 +
                                           std::sqrt(3.0 / 8.0) * gy001300));
    gy[(Ai + 2) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gy001201 - std::sqrt(7.5) * gy001021);
    gy[(Ai + 2) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy001300 + std::sqrt(45.0 / 8.0) * gy001120);
    const double gz100300 = C3884 * C4370 * C3710 + C3677 * C3781 * C3710 +
                            (C3677 * C4370 * C4549) / 2.0;
    const double gz100030 = C3826 * C3888 * C3710 +
                            (2 * C3692 * C3670 * C3980) / C3680 +
                            (C3670 * C3888 * C4549) / 2.0;
    const double gz100003 = C3826 * C4370 * C4070 + C3670 * C3781 * C4070 -
                            (C3670 * C4370 * C4557) / 2.0;
    const double gz100210 = C3880 * C4432 * C3710 + C3673 * C3941 * C3710 +
                            (C3673 * C4432 * C4473) / 2.0;
    const double gz100201 = C3880 * C4370 * C4030 + C3673 * C3781 * C4030 -
                            (C3673 * C4370 * C4079) / 2.0;
    const double gz100021 = C3826 * C4445 * C4030 + C3670 * C3971 * C4030 -
                            (C3670 * C4445 * C4079) / 2.0;
    const double gz100120 = C3864 * C4445 * C3710 + C3671 * C3971 * C3710 +
                            (C3671 * C4445 * C4473) / 2.0;
    const double gz100102 = C3864 * C4370 * C4049 + C3671 * C3781 * C4049 -
                            (C3671 * C4370 * C4530) / 2.0;
    const double gz100012 = C3826 * C4432 * C4049 + C3670 * C3941 * C4049 -
                            (C3670 * C4432 * C4530) / 2.0;
    const double gz100111 = C3864 * C4432 * C4030 + C3671 * C3941 * C4030 -
                            (C3671 * C4432 * C4079) / 2.0;
    const double gz010300 = (2 * C3692 * C3676 * C4127) / C3680 +
                            C4098 * C4124 * C3710 +
                            (C4098 * C3676 * C4473) / 2.0;
    const double gz010030 = C3789 * C4131 * C3710 + C3669 * C4223 * C3710 +
                            (C3669 * C4131 * C4473) / 2.0;
    const double gz010003 = C3789 * C3676 * C4070 + C3669 * C4124 * C4070 -
                            (C3669 * C3676 * C4557) / 2.0;
    const double gz010210 = C3866 * C4402 * C3710 + C4444 * C4198 * C3710 +
                            (C4444 * C4402 * C4473) / 2.0;
    const double gz010201 = C3866 * C3676 * C4030 + C4444 * C4124 * C4030 -
                            (C4444 * C3676 * C4079) / 2.0;
    const double gz010021 = C3789 * C4449 * C4030 + C3669 * C4216 * C4030 -
                            (C3669 * C4449 * C4079) / 2.0;
    const double gz010120 = C3828 * C4449 * C3710 + C3672 * C4216 * C3710 +
                            (C3672 * C4449 * C4473) / 2.0;
    const double gz010102 = C3828 * C3676 * C4049 + C3672 * C4124 * C4049 -
                            (C3672 * C3676 * C4530) / 2.0;
    const double gz010012 = C3789 * C4402 * C4049 + C3669 * C4198 * C4049 -
                            (C3669 * C4402 * C4530) / 2.0;
    const double gz010111 = C3828 * C4402 * C4030 + C3672 * C4198 * C4030 -
                            (C3672 * C4402 * C4079) / 2.0;
    const double gz001300 = (C4031 * C4370 * C4127) / C3680 +
                            C4098 * C3781 * C4031 +
                            (C4098 * C4370 * C4482) / 2.0;
    const double gz001030 = C3789 * C3888 * C4031 +
                            (C4031 * C3669 * C3980) / C3680 +
                            (C3669 * C3888 * C4482) / 2.0;
    const double gz001003 = C3789 * C4370 * C4332 + C3669 * C3781 * C4332 -
                            (C3669 * C4370 *
                             ((C4534 * C3989) / C3680 +
                              (C4530 + 2 * C4327 +
                               6 * ae *
                                   ((C4304 * C3989) / C3680 +
                                    (C4067 + C4065 + 4 * ae * C4291) / C3694)) /
                                  C3694)) /
                                2.0;
    const double gz001210 = C3866 * C4432 * C4031 + C4444 * C3941 * C4031 +
                            (C4444 * C4432 * C4482) / 2.0;
    const double gz001201 = C3866 * C4370 * C4291 + C4444 * C3781 * C4291 -
                            (C4444 * C4370 * C4327) / 2.0;
    const double gz001021 = C3789 * C4445 * C4291 + C3669 * C3971 * C4291 -
                            (C3669 * C4445 * C4327) / 2.0;
    const double gz001120 = C3828 * C4445 * C4031 + C3672 * C3971 * C4031 +
                            (C3672 * C4445 * C4482) / 2.0;
    const double gz001102 = C3828 * C4370 * C4314 + C3672 * C3781 * C4314 -
                            (C3672 * C4370 * C4534) / 2.0;
    const double gz001012 = C3789 * C4432 * C4314 + C3669 * C3941 * C4314 -
                            (C3669 * C4432 * C4534) / 2.0;
    const double gz001111 = C3828 * C4432 * C4291 + C3672 * C3941 * C4291 -
                            (C3672 * C4432 * C4327) / 2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz100210 - std::sqrt(5.0 / 8.0) * gz100030);
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gz100111;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gz100012 + std::sqrt(3.0 / 8.0) * gz100210 +
               std::sqrt(3.0 / 8.0) * gz100030);
    gz[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (gz100003 - 1.5 * gz100201 - 1.5 * gz100021);
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gz100102 - (std::sqrt(3.0 / 8.0) * gz100120 +
                                           std::sqrt(3.0 / 8.0) * gz100300));
    gz[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gz100201 - std::sqrt(7.5) * gz100021);
    gz[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz100300 + std::sqrt(45.0 / 8.0) * gz100120);
    gz[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz010210 - std::sqrt(5.0 / 8.0) * gz010030);
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gz010111;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gz010012 + std::sqrt(3.0 / 8.0) * gz010210 +
               std::sqrt(3.0 / 8.0) * gz010030);
    gz[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (gz010003 - 1.5 * gz010201 - 1.5 * gz010021);
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gz010102 - (std::sqrt(3.0 / 8.0) * gz010120 +
                                           std::sqrt(3.0 / 8.0) * gz010300));
    gz[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gz010201 - std::sqrt(7.5) * gz010021);
    gz[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz010300 + std::sqrt(45.0 / 8.0) * gz010120);
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz001210 - std::sqrt(5.0 / 8.0) * gz001030);
    gz[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gz001111;
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gz001012 + std::sqrt(3.0 / 8.0) * gz001210 +
               std::sqrt(3.0 / 8.0) * gz001030);
    gz[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (gz001003 - 1.5 * gz001201 - 1.5 * gz001021);
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gz001102 - (std::sqrt(3.0 / 8.0) * gz001120 +
                                           std::sqrt(3.0 / 8.0) * gz001300));
    gz[(Ai + 2) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gz001201 - std::sqrt(7.5) * gz001021);
    gz[(Ai + 2) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz001300 + std::sqrt(45.0 / 8.0) * gz001120);
}

// Automatically generated, do not edit
