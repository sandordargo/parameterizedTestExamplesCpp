#include <gtest/gtest.h>

#include <LeapYear.h>

class LeapYearParamTests :public ::testing::TestWithParam<int> {
protected:
    LeapYear leapYear;
};

TEST_P(LeapYearParamTests, OddYearsAreNotLeapYears) {
    int year = GetParam();
    ASSERT_FALSE(leapYear.isLeap(year));
}

INSTANTIATE_TEST_SUITE_P(
        LeapYearTests,
        LeapYearParamTests,
        ::testing::Values(
                1, 711, 1989, 2013
        ));