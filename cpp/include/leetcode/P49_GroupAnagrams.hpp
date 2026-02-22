#pragma once

class Solution
{
public:
    static std::vector<std::vector<std::string>> groupAnagrams(const std::vector<std::string>& input)
    {
        std::unordered_map<std::string, std::vector<std::string>> resultMap;
        std::vector<std::vector<std::string>> resultVector;

        for (const auto& word : input) {
            auto sortedWord = word;
            std::ranges::sort(sortedWord);

            resultMap[sortedWord].emplace_back(word);
        }

        for (auto anagrams : resultMap | std::views::values) {
            resultVector.push_back(std::move(anagrams));
        }

        return resultVector;
    }
};
