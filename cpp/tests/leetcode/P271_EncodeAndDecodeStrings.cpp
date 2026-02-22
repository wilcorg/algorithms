#include <leetcode/P271_EncodeAndDecodeStrings.hpp>

using TaskTestCase = TestCase<std::vector<std::string>, std::string>;

class EncodeAndDecodeStrings : public testing::TestWithParam<TaskTestCase>
{
};

INSTANTIATE_TEST_SUITE_P(
    TestsParametrized,
    EncodeAndDecodeStrings,
    testing::Values(
        TaskTestCase{{"lorem", "ipsum", "sir", "amet"}, "5#lorem5#ipsum3#sir4#amet"},
        TaskTestCase{{"extremelylongstring", "finally", "done"}, "19#extremelylongstring7#finally4#done"}
    )
);

TEST_P(EncodeAndDecodeStrings, Parametrized)
{
    auto [input, expected] = GetParam();

    EXPECT_EQ(Solution::encode(input), expected);
    EXPECT_EQ(Solution::decode(Solution::encode(input)), input);
}
