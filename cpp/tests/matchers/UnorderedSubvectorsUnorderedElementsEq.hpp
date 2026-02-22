#pragma once

template<typename T>
std::vector<std::vector<T>> sortSubvectorAndElements(std::vector<std::vector<T>> vec)
{
    for (auto& subvector : vec) {
        std::sort(subvector.begin(), subvector.end());
    }
    std::sort(vec.begin(), vec.end(), [](const std::vector<T>& a, const std::vector<T>& b) {
        return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
    });
    return vec;
}

MATCHER_P(UnorderedSubvectorsUnorderedElementsEq, expected, "")
{
    return sortSubvectorAndElements(arg) == sortSubvectorAndElements(expected);
}
