#pragma once

class Solution
{
public:
    static bool containsDuplicate(std::vector<int32_t> nums)
    {
        std::unordered_set<int32_t> set;

        for (const auto num : nums) {
            if (set.contains(num)) {
                return true;
            }
            set.insert(num);
        }
        return false;
    }
};