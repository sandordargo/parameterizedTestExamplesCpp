#include <gtest/gtest.h>

#include <LeapYearCalendar.h>

TEST(LeapYearIterationTest, OddYearsAreNotLeapYears) {
    LeapYearCalendar leapYearCalendar;
    auto oddYears = std::vector<int>{1, 3, 711, 2013};
    for (auto oddYear :  oddYears) {
        ASSERT_FALSE(leapYearCalendar.isLeap(oddYear));
    }
}
