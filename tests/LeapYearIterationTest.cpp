#include <gtest/gtest.h>

#include <LeapYear.h>

TEST(LeapYearIterationTest, OddYearsAreNotLeapYears) {
    LeapYear leapYear;
    std::vector oddYears = {1, 711, 1989, 2013};
    for (auto oddYear:  oddYears) {
        ASSERT_FALSE(leapYear.isLeap(oddYear));
    }
}
