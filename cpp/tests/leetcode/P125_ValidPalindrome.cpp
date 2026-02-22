#include <leetcode/P125_ValidPalindrome.hpp>

using TaskTestCase = TestCase<std::string, bool>;

class ValidPalindrome : public testing::TestWithParam<TaskTestCase>
{
};

INSTANTIATE_TEST_SUITE_P(
    ValidPalindromeParametrized,
    ValidPalindrome,
    testing::Values(
        TaskTestCase{"A man, a plan, a canal: Panama", true},
        TaskTestCase{"race a car", false},
        TaskTestCase{"a.", true},
        TaskTestCase{"0P", false},
        TaskTestCase{" ", true})
);

TEST_P(ValidPalindrome, Parametrized)
{
    auto [input, expected] = GetParam();

    EXPECT_EQ(Solution::isPalindrome(input), expected);
}
