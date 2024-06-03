from typing import List

class Solution:
    def findMin(self, nums: List[int]) -> int:
        left, right = 0, len(nums) - 1
        ans = nums[0]
        while left < right:
            mid = left + (right - left) // 2
            ans = min(ans, nums[mid])
            if nums[mid] < nums[right]:
                right = mid - 1
            else:
                left = mid + 1
        ans = min(ans, nums[left])
        return ans

s = Solution()
print(s.findMin([2,1])) # 1
