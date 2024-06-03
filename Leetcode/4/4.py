from typing import List

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        A, B = nums1, nums2
        if len(A) > len(B):
            A, B = B, A
        lim = len(A) + len(B)
        half = lim //2

        l, r = 0, len(A) -1
        while True:
            mid = (l + r) // 2
            j = half - mid - 2
            Aleft = A[mid] if mid >= 0 else float('-inf')
            Aright = A[mid + 1] if (mid + 1) < len(A) else float('inf')
            Bleft = B[j] if j >= 0 else float('-inf')
            Bright = B[j + 1] if (j + 1) < len(B) else float('inf')
            if Aleft <= Bright and Bleft<= Aright:
                if lim % 2:
                    return min(Aright, Bright)
                return (max(Aleft, Bleft) + min(Aright, Bright)) / 2
            elif Aleft > Bright:
                r = mid - 1
            else:
                l = mid + 1

s = Solution()
print(s.findMedianSortedArrays([1,3], [2,4])) # 2.0