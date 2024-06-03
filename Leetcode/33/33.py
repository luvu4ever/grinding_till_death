from typing import List

class Solution:
    def search_min(self, num: List[int]):
        ans = num[0]
        pos = 0
        left, right = 0, len(num) - 1
        while left < right:
            mid = left + (right - left) // 2
            if num[mid] < ans:
                ans = num[mid]
                pos = mid
            if num[mid] < num[right]:
                right = mid
            else:
                left = mid + 1
        if num[left] < ans:
            ans = num[left]
            pos = left
        return ans, pos

    def binary_search(self, num: List[int], target: int, start:int, end: int):
        left, right = start, end
        last_position = -1
        while left <= right: 
            mid = left + (right - left) // 2
            if num[mid] == target:
                last_position = mid
                left = mid + 1 
            elif num[mid] < target:
                left = mid + 1
            else:
                right = mid - 1  
        return last_position 

    def search(self, nums: List[int], target: int) -> int:
        minn, min_pos = self.search_min(nums)
        left, right = 0, len(nums) - 1
        if(target == minn):
            return min_pos
        if target > minn and target <= nums[right]:
            return self.binary_search(nums, target, min_pos, right)
        return self.binary_search(nums, target, left, min_pos)
    
s = Solution()
print(s.search([3, 1], 3))