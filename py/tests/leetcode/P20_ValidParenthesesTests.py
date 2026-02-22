import pytest
from leetcode.P20_ValidParentheses import Solution


@pytest.mark.parametrize("s, expected_result", [
    ("[]", True),
    ("([{}])", True),
    ("[(])", False),
])
def test(s, expected_result):
    solution: Solution = Solution()
    assert solution.isValid(s) == expected_result

if __name__ == '__main__':
    pytest.main()