class Solution:
    def findMin(self, nums: list[int]) -> int:
        left: int = 0
        right: int = len(nums) - 1

        if nums[left] < nums[right]:
            return nums[left]

        while left < right:
            mid = (left + right) // 2

            if

        return -1