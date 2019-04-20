#include <gtest/gtest.h>

#include <LeapYearCalendar.h>

class LeapYearFixtureTests : public ::testing::Test {
protected:
    LeapYearCalendar leapYearCalendar;
};

TEST_F(LeapYearFixtureTests, 1IsOdd_IsNotLeapYear) {
    ASSERT_FALSE(leapYearCalendar.isLeap(1));
}

TEST_F(LeapYearFixtureTests, 711IsOdd_IsNotLeapYear) {
    ASSERT_FALSE(leapYearCalendar.isLeap(711));
}

TEST_F(LeapYearFixtureTests, 1989IsOdd_IsNotLeapYear) {
    ASSERT_FALSE(leapYearCalendar.isLeap(1989));
}

TEST_F(LeapYearFixtureTests, 2013IsOdd_IsNotLeapYear) {
    ASSERT_FALSE(leapYearCalendar.isLeap(2013));
}