from collections import deque

class Solution:
    def isValid(self, s: str) -> bool:
        stack: deque[str] = deque()
        char_dict: dict[str, str] = {
            '(': ')',
            '[': ']',
            '{': '}'
        }

        for char in s:
            if char in '([{':
                stack.append(char)
            else:
                if len(stack) == 0:
                    return False

                if char != char_dict[stack.pop()]:
                    return False

        if len(stack) == 0:
            return True

        return False