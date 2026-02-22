#include <leetcode/P347_TopKFrequentElements.hpp>

struct Input {
    std::vector<int32_t> nums;
    int32_t k;
};
using TaskTestCase = TestCase<Input, std::vector<int32_t>>;

class TopKFrequentElements : public testing::TestWithParam<TaskTestCase>
{
};

INSTANTIATE_TEST_SUITE_P(
    TopKFrequentElementsParametrized,
    TopKFrequentElements,
    testing::Values(
        TaskTestCase{{{3, 3, 3, 2, 2, 1}, 2}, {3, 2}},
        TaskTestCase{{{7}, 1}, {7}}
    )
);

TEST_P(TopKFrequentElements, Parametrized)
{
    auto [input, expected] = GetParam();

    EXPECT_EQ(Solution::topKFrequent(input.nums, input.k), expected);
}
