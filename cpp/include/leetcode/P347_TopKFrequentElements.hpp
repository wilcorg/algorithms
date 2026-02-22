#pragma once

class Solution
{
public:
    static std::vector<int32_t> topKFrequent(const std::vector<int32_t>& nums, int32_t k)
    {
        std::unordered_map<int32_t, uint32_t> numFrequency;
        std::priority_queue<std::pair<int32_t, int32_t>> frequencyOfNums;
        std::vector<int32_t> answer;

        for (const auto& num : nums) {
            numFrequency[num] += 1;
        }

        for (const auto& [num, frequency] : numFrequency) {
            frequencyOfNums.emplace(frequency, num);
        }

        while (!frequencyOfNums.empty()) {
            answer.push_back(frequencyOfNums.top().second);
            frequencyOfNums.pop();

            if (answer.size() == k) {
                return answer;
            }
        }

        return answer;
    }
};
