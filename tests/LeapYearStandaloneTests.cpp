#include <gtest/gtest.h>

#include <LeapYear.h>

TEST(LeapYearTests, 1IsOdd_IsNotLeapYear) {
    LeapYear leapYear;
    ASSERT_FALSE(leapYear.isLeap(1));
}

TEST(LeapYearTests, 711IsOdd_IsNotLeapYear) {
    LeapYear leapYear;
    ASSERT_FALSE(leapYear.isLeap(711));
}

TEST(LeapYearTests, 1989IsOdd_IsNotLeapYear) {
    LeapYear leapYear;
    ASSERT_FALSE(leapYear.isLeap(1989));
}

TEST(LeapYearTests, 2013IsOdd_IsNotLeapYear) {
    LeapYear leapYear;
    ASSERT_FALSE(leapYear.isLeap(2013));
}