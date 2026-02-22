#pragma once

class Solution
{
public:
    static std::vector<int32_t> productExceptSelf(const std::vector<int32_t>& input)
    {
        std::vector<int32_t> result(input.size(), 1);
        // postfix product
        for (int32_t i = input.size() - 2; i >= 0; --i) {
            result[i] = input[i + 1] * result[i + 1];
        }

        uint32_t prefixProduct = 1;
        for (int32_t i = 0; i < input.size(); ++i) {
            result[i] *= prefixProduct;
            prefixProduct *= input[i];
        }

        return result;
    }
};
