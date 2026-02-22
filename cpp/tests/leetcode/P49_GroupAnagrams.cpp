#include <leetcode/P49_GroupAnagrams.hpp>

using TaskTestCase = TestCase<std::vector<std::string>, std::vector<std::vector<std::string>>>;

class GroupAnagrams : public testing::TestWithParam<TaskTestCase>
{
};

INSTANTIATE_TEST_SUITE_P(
    TestsParametrized,
    GroupAnagrams,
    testing::Values(
        TaskTestCase{{"act","pots","tops","cat","stop","hat"},
            {{"pots", "tops", "stop"}, {"hat"}, {"act", "cat"}}},
            TaskTestCase{{"x"}, {{"x"}}},
            TaskTestCase{{""}, {{""}}}
        )
);

TEST_P(GroupAnagrams, Parametrized)
{
    auto [input, expected] = GetParam();

    EXPECT_EQ(Solution::groupAnagrams(input), expected);
}
