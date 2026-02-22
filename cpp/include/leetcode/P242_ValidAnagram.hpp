#pragma once

class Solution
{
public:
    static bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char, uint32_t> letterCount;

        for (const auto letter : s) {
            letterCount[letter] += 1;
        }

        for (const auto letter : t) {
            if (letterCount[letter] == 0) {
                return false;
            }
            letterCount[letter] -= 1;
        }

        for (const auto count : letterCount | std::views::values) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};
