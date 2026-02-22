#pragma once

class Solution
{
public:
    static int32_t maxArea(std::vector<int32_t>& height) {
        uint32_t left = 0;
        uint32_t right = height.size() - 1;
        uint32_t maxArea = 0;

        while (left < right) {
            maxArea = std::max(maxArea, std::min(height[left], height[right]) * (right - left));

            if (height[left] < height[right]) {
                left += 1;
            } else {
                right -= 1;
            }
        }

        return maxArea;
    }
};
