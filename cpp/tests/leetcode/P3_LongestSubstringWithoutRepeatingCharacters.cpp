#include <leetcode/P3_LongestSubstringWithoutRepeatingCharacters.hpp>

using TaskTestCase = TestCase<std::string, uint32_t>;

class LongestSubstringWithoutRepeatingCharacters : public testing::TestWithParam<TaskTestCase>
{
};

INSTANTIATE_TEST_SUITE_P(
    LongestSubstringWithoutRepeatingCharactersParametrized,
    LongestSubstringWithoutRepeatingCharacters,
    testing::Values(
        TaskTestCase{"abcabcbb", 3},
        TaskTestCase{"bbbbb", 1},
        TaskTestCase{"pwwkew", 3},
        TaskTestCase{"", 0},
        TaskTestCase{" ", 1}
    )
);

TEST_P(LongestSubstringWithoutRepeatingCharacters, Parametrized)
{
    const auto [input, expected] = GetParam();

    EXPECT_EQ(Solution::lengthOfLongestSubstring(input), expected);
}
