add_executable(leetcode-tasks-tests)

target_sources(leetcode-tasks-tests
    PUBLIC
    ${INCLUDE_DIRS}/TestCase.hpp
    ${INCLUDE_DIRS}/leetcode/P1_TwoSum.hpp
    ${INCLUDE_DIRS}/leetcode/P11_ContainerWithMostWater.hpp
    ${INCLUDE_DIRS}/leetcode/P2_AddTwoNumbers.hpp
    ${INCLUDE_DIRS}/leetcode/P3_LongestSubstringWithoutRepeatingCharacters.hpp
    ${INCLUDE_DIRS}/leetcode/P15_3Sum.hpp
    ${INCLUDE_DIRS}/leetcode/P49_GroupAnagrams.hpp
    ${INCLUDE_DIRS}/leetcode/P125_ValidPalindrome.hpp
    ${INCLUDE_DIRS}/leetcode/P128_LongestConsecutiveSequence.hpp
    ${INCLUDE_DIRS}/leetcode/P217_ContainsDuplicate.hpp
    ${INCLUDE_DIRS}/leetcode/P238_ProductOfArrayExceptSelf.hpp
    ${INCLUDE_DIRS}/leetcode/P242_ValidAnagram.hpp
    ${INCLUDE_DIRS}/leetcode/P271_EncodeAndDecodeStrings.hpp
    ${INCLUDE_DIRS}/leetcode/P347_TopKFrequentElements.hpp

    PRIVATE
    P1_TwoSum.cpp
    P11_ContainerWithMostWater.cpp
    P2_AddTwoNumbers.cpp
    P3_LongestSubstringWithoutRepeatingCharacters.cpp
    P15_3Sum.cpp
    P49_GroupAnagrams.cpp
    P125_ValidPalindrome.cpp
    P128_LongestConsecutiveSequence.cpp
    P217_ContainsDuplicate.cpp
    P238_ProductOfArrayExceptSelf.cpp
    P242_ValidAnagram.cpp
    P271_EncodeAndDecodeStrings.cpp
    P347_TopKFrequentElements.cpp
)

target_include_directories(leetcode-tasks-tests
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/tests
)

target_precompile_headers(leetcode-tasks-tests
    PUBLIC
    <bits/stdc++.h>
    <gtest/gtest.h>
    <gmock/gmock.h>
    ${INCLUDE_DIRS}/TestCase.hpp
)

target_link_libraries(leetcode-tasks-tests
    PRIVATE
    GTest::gtest
    GTest::gtest_main
    GTest::gmock
)

include(GoogleTest)
gtest_discover_tests(leetcode-tasks-tests)
