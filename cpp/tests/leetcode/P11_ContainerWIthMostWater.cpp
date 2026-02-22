#include <leetcode/P11_ContainerWIthMostWater.hpp>

using TaskTestCase = TestCase<std::vector<int32_t>, int32_t>;

class ContainerWithMostWater : public testing::TestWithParam<TaskTestCase>
{
};

INSTANTIATE_TEST_SUITE_P(
    ContainerWithMostWaterParametrized,
    ContainerWithMostWater,
    testing::Values(
        TaskTestCase{{1,8,6,2,5,4,8,3,7}, 49},
        TaskTestCase{{1,7,2,5,4,7,3,6}, 36},
        TaskTestCase{{1, 1}, 1}
    )
);

TEST_P(ContainerWithMostWater, Parametrized)
{
    auto [input, expected] = GetParam();

    EXPECT_EQ(Solution::maxArea(input), expected);
}
