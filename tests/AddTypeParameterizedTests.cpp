#include <Add.h>
#include <gtest/gtest.h>

template<typename T>
class AddTypedParamTestsFixture : public ::testing::Test {

};

TYPED_TEST_SUITE_P(AddTypedParamTestsFixture);

TYPED_TEST_P(AddTypedParamTestsFixture, doesAdd) {
  auto result = add<TypeParam>(5, 6);
  ASSERT_EQ(11, result);
}

REGISTER_TYPED_TEST_SUITE_P(AddTypedParamTestsFixture, doesAdd);

using Types = testing::Types<int, long long, std::size_t>;
INSTANTIATE_TYPED_TEST_SUITE_P(TestPrefix, AddTypedParamTestsFixture, Types);