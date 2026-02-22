#include <leetcode/P15_3Sum.hpp>
#include <matchers/UnorderedSubvectorsUnorderedElementsEq.hpp>

using TaskTestCase = TestCase<std::vector<int32_t>, std::vector<std::vector<int32_t>>>;

class ThreeSum : public testing::TestWithParam<TaskTestCase>
{
};

// clang-format off
INSTANTIATE_TEST_SUITE_P(
    ThreeSumTestsParametrized,
    ThreeSum,
    testing::Values(
        TaskTestCase{{-4, -1, -1, 0, 1, 2}, {{-1, -1, 2}, {-1, 0, 1}}},
        TaskTestCase{{0, 1, 1}, {}},
        TaskTestCase{{0, 0, 0}, {{0, 0, 0}}},
        TaskTestCase{{-4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4, 4, 6, 6},
            {{-4, -2, 6}, {-4, 0, 4}, {-4, 1, 3}, {-4, 2, 2}, {-2, -2, 4}, {-2, 0, 2}}}
    )
);
// clang-format on

TEST_P(ThreeSum, Parametrized)
{
    auto [input, expected] = GetParam();
    const auto result = Solution::threeSum(input);

    EXPECT_THAT(result, UnorderedSubvectorsUnorderedElementsEq(expected));
}
