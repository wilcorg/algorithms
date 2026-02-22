#pragma once

class Solution
{
public:
    static std::vector<std::vector<int32_t>> threeSum(std::vector<int32_t>& nums)
    {
        std::vector<std::vector<int32_t>> triplets;
        std::ranges::sort(nums);

        for (uint32_t i1 = 0; i1 < nums.size(); ++i1)
        {
            uint32_t low = i1 + 1;
            uint32_t high = nums.size() - 1;

            if (i1 != 0 && nums[i1] == nums[i1 - 1]) {
                continue;
            }

            while (low < high)
            {
                if (nums[i1] + nums[low] + nums[high] == 0)
                {
                    triplets.push_back({nums[i1], nums[low], nums[high]});
                    const auto lastLow = nums[low];
                    const auto lastHigh = nums[high];

                    while (low < high && nums[low] == lastLow)
                    {
                        low += 1;
                    }

                    while (low < high && nums[high] == lastHigh)
                    {
                        high -= 1;
                    }
                }
                else if (nums[i1] + nums[low] + nums[high] > 0)
                {
                    high -= 1;
                }
                else
                {
                    low += 1;
                }
            }
        }

        return triplets;
    }
};
