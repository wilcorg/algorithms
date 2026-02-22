#pragma once

class Solution {
public:
    static int32_t lengthOfLongestSubstring(std::string s)
    {
        std::unordered_set<char> substringChars;
        uint32_t maxSubstringLength = 0;
        uint32_t begin = 0;
        uint32_t end = 0;

        for (end = 0; end < s.size(); ++end) {
            while (substringChars.contains(s[end])) {
                substringChars.erase(s[begin]);
                begin += 1;
            }
            substringChars.insert(s[end]);
            maxSubstringLength = std::max(maxSubstringLength, end - begin + 1);
        }

        return maxSubstringLength;
    }
};