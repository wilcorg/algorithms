#include <leetcode/P242_ValidAnagram.hpp>

using TaskTestCase = TestCase<std::pair<std::string, std::string>, bool>;

class ValidAnagram : public testing::TestWithParam<TaskTestCase>
{
};

INSTANTIATE_TEST_SUITE_P(
    TestsParametrized,
    ValidAnagram,
    testing::Values(
        TaskTestCase{{"anagram", "nagaram"}, true},
        TaskTestCase{{"rat", "car"}, false}
    )
);

TEST_P(ValidAnagram, Parametrized)
{
    auto [input, expected] = GetParam();

    EXPECT_EQ(Solution::isAnagram(input.first, input.second), expected);
}
