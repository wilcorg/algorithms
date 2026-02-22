#pragma once

class Solution
{
public:
    static int32_t longestConsecutive(std::vector<int32_t> nums)
    {
        std::unordered_set<int32_t> uniqueNums;
        uniqueNums.insert(nums.begin(), nums.end());
        uint32_t maxSequence = 0;

        for (const auto num : uniqueNums) {
            if (uniqueNums.contains(num - 1)) {
                continue;
            }

            uint32_t sequence = 1;
            auto forwardNum = num;

            while (uniqueNums.contains(forwardNum + 1)) {
                sequence += 1;
                forwardNum += 1;
            }

            maxSequence = std::max(maxSequence, sequence);
        }

        return maxSequence;
    }
};
