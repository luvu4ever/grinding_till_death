from typing import List

class Solution:
    def searchRow(self, matrix: List[List[int]], target: int) -> int:
        left, right = 0, len(matrix) - 1
        while left <= right:
            mid = left + (right - left) // 2
            if matrix[mid][0] <= target <= matrix[mid][-1]:
                return mid
            elif matrix[mid][0] < target:
                left = mid + 1
            else:
                right = mid - 1
        return -1

    def searchColumn(self, row: List[int], target: int) -> bool:
        left, right = 0, len(row) - 1
        while left <= right:
            mid = left + (right - left) // 2
            if row[mid] == target:
                return True
            elif row[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return False

    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row = self.searchRow(matrix, target)
        if row == -1:
            return False
        return self.searchColumn(matrix[row], target)
        

s = Solution()
print(s.searchMatrix([[1,3,5,7],[10,11,16,20],[23,30,34,60]], 3)) # True