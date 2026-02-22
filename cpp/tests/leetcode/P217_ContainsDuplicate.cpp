#include <leetcode/P217_ContainsDuplicate.hpp>

using TaskTestCase = TestCase<std::vector<int32_t>, bool>;

class ContainsDuplicate : public testing::TestWithParam<TaskTestCase>
{
};

INSTANTIATE_TEST_SUITE_P(
    ContainsDuplicateParametrized,
    ContainsDuplicate,
    testing::Values(
        TaskTestCase{{1, 2, 3, 1}, true},
        TaskTestCase{{1, 2, 3, 4}, false},
        TaskTestCase{{1, 1, 1, 3, 3, 4, 3, 2, 4, 2}, true}
    )
);

TEST_P(ContainsDuplicate, Parametrized)
{
    auto [input, expected] = GetParam();

    EXPECT_EQ(Solution::containsDuplicate(input), expected);
}

