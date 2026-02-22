#include <leetcode/P1_TwoSum.hpp>

struct Input {
    std::vector<int32_t> nums;
    int32_t target;
};
using TaskTestCase = TestCase<Input, std::vector<int32_t>>;

class TwoSum : public testing::TestWithParam<TaskTestCase>
{
};

// clang-format off
INSTANTIATE_TEST_SUITE_P(
    TwoSumTestsParametrized,
    TwoSum,
    testing::Values(
        TaskTestCase{{{2, 7, 11, 15}, 9}, {0, 1}},
        TaskTestCase{{{3, 2, 4}, 6}, {1, 2}},
        TaskTestCase{{{3, 3}, 6}, {0, 1}},
        TaskTestCase{{{3, 2, 3}, 6}, {0, 2}}
    )
);
// clang-format on

TEST_P(TwoSum, Parametrized)
{
    const auto [input, expected] = GetParam();
    const auto result = Solution::twoSum(input.nums, input.target);

    EXPECT_THAT(result, testing::ElementsAreArray(expected));
}
