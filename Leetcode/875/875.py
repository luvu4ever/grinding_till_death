from typing import List

class Solution:
    def check(self, piles, h, k) -> bool:
        time = 0
        for pile in piles:
            time += (pile + k - 1) // k
        return time <= h

    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        left, right = 1, max(piles)
        while left < right:
            mid = left + (right - left) // 2
            if self.check(piles, h, mid):
                right = mid
            else:
                left = mid + 1
        return left
        
s = Solution()
print(s.minEatingSpeed([3,6,7,11], 8)) # 4