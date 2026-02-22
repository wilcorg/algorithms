#pragma once

class Solution
{
public:
    static std::vector<int32_t> twoSum(const std::vector<int32_t>& nums, int32_t target)
    {
        std::unordered_map<int32_t, uint32_t> map;

        for (uint32_t i = 0; i < nums.size(); ++i) {
            if (int32_t complement = target - nums[i]; map.contains(complement)) {
                return {static_cast<int32_t>(map[complement]), static_cast<int32_t>(i)};
            }
            map[nums[i]] = i;
        }

        return {-1, -1};
    }
};
