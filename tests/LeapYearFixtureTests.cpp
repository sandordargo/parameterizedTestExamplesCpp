#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <LeapYear.h>

#include <iostream>

class LeapYearFixtureTests : public ::testing::Test {
protected:
    LeapYear leapYear;
};

TEST_F(LeapYearFixtureTests, 1IsOdd_IsNotLeapYear) {
    ASSERT_FALSE(leapYear.isLeap(1));
}

TEST_F(LeapYearFixtureTests, 711IsOdd_IsNotLeapYear) {
    ASSERT_FALSE(leapYear.isLeap(711));
}

TEST_F(LeapYearFixtureTests, 1989IsOdd_IsNotLeapYear) {
    ASSERT_FALSE(leapYear.isLeap(1989));
}

TEST_F(LeapYearFixtureTests, 2013IsOdd_IsNotLeapYear) {
    ASSERT_FALSE(leapYear.isLeap(2013));
}