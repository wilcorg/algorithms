#include <leetcode/P128_LongestConsecutiveSequence.hpp>

using TaskTestCase = TestCase<std::vector<int32_t>, int32_t>;

class LongestConsecutiveSequence : public testing::TestWithParam<TaskTestCase>
{
};

INSTANTIATE_TEST_SUITE_P(
    LongestConsecutiveSequenceParametrized,
    LongestConsecutiveSequence,
    testing::Values(
        TaskTestCase{{2, 20, 4, 10, 3, 4, 5}, 4},
        TaskTestCase{{0, 3, 2, 5, 4, 6, 1, 1}, 7})
);

TEST_P(LongestConsecutiveSequence, Parametrized)
{
    auto [input, expected] = GetParam();

    EXPECT_EQ(Solution::longestConsecutive(input), expected);
}
