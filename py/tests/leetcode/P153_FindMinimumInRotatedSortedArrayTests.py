import pytest
from leetcode.P153_FindMinimumInRotatedSortedArray import Solution


@pytest.mark.parametrize("s, expected_result", [
    ([3, 4, 5, 1, 2], 1),
    ([4, 5, 6, 7, 0, 1, 2], 0),
    ([11, 13, 15, 17], 11),
])
def test(s, expected_result):
    solution: Solution = Solution()
    assert solution.findMin(s) == expected_result


if __name__ == '__main__':
    pytest.main()
