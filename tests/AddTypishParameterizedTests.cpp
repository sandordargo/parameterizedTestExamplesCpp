#include <gtest/gtest.h>
#include <variant>

#include <Add.h>

class AddTypishParamTests :public ::testing::TestWithParam<std::variant<int, double>> {

};


TEST_P(AddTypishParamTests, doesAddNumbers) {
        std::visit([this](auto&& arg) {
        ASSERT_EQ(10, add(arg, arg));
    }, GetParam());
}

INSTANTIATE_TEST_SUITE_P(
        AddTests,
        AddTypishParamTests,
        ::testing::Values(
                5, 5.0
        ));