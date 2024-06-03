#!/bin/python3
class Solution:
    def sortIntersect(self, volcanic, nonVolcanic):
        volcanic.sort(reverse = True)
        nonVolcanic.sort(reverse = True)
        result = []
        i = 0
        j = 0
        while i < len(volcanic) and j < len(nonVolcanic):
            if volcanic[i] == nonVolcanic[j]:
                result.append(volcanic[i])
                i += 1
                j += 1
            elif volcanic[i] > nonVolcanic[j]:
                i += 1
            else:
                j += 1
        return result

s = Solution()
volcanic = [7000, 13400, 7000, 14000]
nonVolcanic = [7000, 13400, 150000, 7000]

print(s.sortIntersect(volcanic, nonVolcanic)) # [13400, 7000]
