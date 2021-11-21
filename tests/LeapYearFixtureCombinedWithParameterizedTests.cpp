#include <tuple>

#include <gtest/gtest.h>

#include <LeapYear.h>


class LeapYearTestFixtureToBeParameterized : public ::testing::Test
{
protected:
    LeapYear leapYear;
};

TEST_F(LeapYearTestFixtureToBeParameterized, 1996_IsDivisibleBy4_ShouldBeALeapYear) {
    ASSERT_TRUE(leapYear.isLeap(1996));
}

TEST_F(LeapYearTestFixtureToBeParameterized, 1700_IsDivisibleBy100AndNotBy400_ShouldNotBeALeapYear) {
    ASSERT_FALSE(leapYear.isLeap(1700));
}

TEST_F(LeapYearTestFixtureToBeParameterized, 1600_IsDivisibleBy400_ShouldBeALeapYear) {
    ASSERT_TRUE(leapYear.isLeap(1600));
}


class LeapYearParametrizedTestFixtureBasedOnFixture :
        public LeapYearTestFixtureToBeParameterized,
        public ::testing::WithParamInterface<std::tuple<int, bool>> {
};


TEST_P(LeapYearParametrizedTestFixtureBasedOnFixture, ChecksIfLeapYear) {
    bool expected = std::get<1>(GetParam());
    int year = std::get<0>(GetParam());
    ASSERT_EQ(expected, leapYear.isLeap(year));
}

INSTANTIATE_TEST_SUITE_P(
        LeapYearTests,
        LeapYearParametrizedTestFixtureBasedOnFixture,
        ::testing::Values(
                std::tuple<int, bool>(7, false),
                std::tuple<int, bool>(2001, false),
                std::tuple<int, bool>(1996, true),
                std::tuple<int, bool>(1700, false),
                std::tuple<int, bool>(1600, true)));