#pragma once

class Solution
{
public:
    static std::string encode(const std::vector<std::string>& strs)
    {
        std::stringstream ss;
        for (const auto& str : strs) {
            ss << std::to_string(str.length()) << "#" << str;
        }

        return ss.str();
    }

    static std::vector<std::string> decode(const std::string& strs)
    {
        std::vector<std::string> result;
        uint32_t i = 0;
        uint32_t offset = 0;

        while (i < strs.size()) {
             if (isdigit(strs[i])) {
                offset = offset * 10 + strs[i] - '0';
                i += 1;
                continue;
            }

            result.push_back(strs.substr(i + 1, offset));
            i += offset + 1;
            offset = 0;
        }

        return result;
    }
};
