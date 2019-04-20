#include <tuple>

#include <gtest/gtest.h>

#include <LeapYearCalendar.h>


class LeapYearMultipleParametersTests :public ::testing::TestWithParam<std::tuple<int, bool>> {
protected:
    LeapYearCalendar leapYearCalendar;
};

TEST_P(LeapYearMultipleParametersTests, ChecksIfLeapYear) {
    bool expected = std::get<1>(GetParam());
    int year = std::get<0>(GetParam());
    ASSERT_EQ(expected, leapYearCalendar.isLeap(year));
}

INSTANTIATE_TEST_CASE_P(
        LeapYearTests,
        LeapYearMultipleParametersTests,
        ::testing::Values(
                std::make_tuple(7, false),
                std::make_tuple(2001, false),
                std::make_tuple(1996, true),
                std::make_tuple(1700, false),
                std::make_tuple(1600, true)));