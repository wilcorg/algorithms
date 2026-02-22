#include <leetcode/P238_ProductOfArrayExceptSelf.hpp>

using TaskTestCase = TestCase<std::vector<int32_t>, std::vector<int32_t>>;

class ProductOfArrayExceptSelf : public testing::TestWithParam<TaskTestCase>
{
};

INSTANTIATE_TEST_SUITE_P(
    TestsParametrized,
    ProductOfArrayExceptSelf,
    testing::Values(
        TaskTestCase{{1, 2, 3, 4}, {24, 12, 8, 6}},
        TaskTestCase{{-1, 1, 0, -3, 3}, {0, 0, 9, 0, 0}}
    )
);

TEST_P(ProductOfArrayExceptSelf, Parametrized)
{
    auto [input, expected] = GetParam();

    EXPECT_EQ(Solution::productExceptSelf(input), expected);
}
