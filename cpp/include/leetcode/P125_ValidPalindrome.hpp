#pragma once

class Solution
{
public:
    static bool isPalindrome(std::string s)
    {
        int32_t left = 0;
        int32_t right = s.length() - 1;

        while (left <= right) {
            if (!std::isalnum(s[left])) {
                left += 1;
                continue;
            }

            if (!std::isalnum(s[right])) {
                right -= 1;
                continue;
            }

            if (std::tolower(s[left]) != std::tolower(s[right])) {
                return false;
            }

            left += 1;
            right -= 1;
        }

        return true;
    }
};
