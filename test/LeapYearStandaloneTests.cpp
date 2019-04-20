#include <gtest/gtest.h>

#include <LeapYearCalendar.h>

TEST(LeapYearTests, 1IsOdd_IsNotLeapYear) {
LeapYearCalendar leapYearCalendar;
ASSERT_FALSE(leapYearCalendar.isLeap(1));
}

TEST(LeapYearTests, 711IsOdd_IsNotLeapYear) {
LeapYearCalendar leapYearCalendar;
ASSERT_FALSE(leapYearCalendar.isLeap(711));
}

TEST(LeapYearTests, 1989IsOdd_IsNotLeapYear) {
LeapYearCalendar leapYearCalendar;
ASSERT_FALSE(leapYearCalendar.isLeap(1989));
}

TEST(LeapYearTests, 2013IsOdd_IsNotLeapYear) {
LeapYearCalendar leapYearCalendar;
ASSERT_FALSE(leapYearCalendar.isLeap(2013));
}