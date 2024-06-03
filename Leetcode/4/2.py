class Solution:
    def BFS(self, x1, y1, x2, y2):
        queue = [(x1, y1)]
        visited = set()
        while queue:
            x, y = queue.pop(0)
            if x == x2 and y == y2:
                return "YES"
            if (x, y) in visited:
                continue
            visited.add((x, y))
            if x + y <= x2:
                queue.append((x + y, y))
            if x + y <= y2:
                queue.append((x, x + y))
        return "NO"
    # def canReach(self, x1, y1, x2, y2):
    #     return self.BFS(x1, y1, x2, y2)
    def GCD(self, a, b):
        if b == 0:
            return a
        return self.GCD(b, a % b)
    def canReach(self, x1, y1, x2, y2):
        if x2 < x1 or y2 < y1:
            return "NO"
        if x2 % self.GCD(x1, y1) == 0 and y2 % self.GCD(x1, y1) == 0:
            return "YES"
        return "NO"
    
s = Solution()
print(s.canReach(1, 4, 5, 9)) # True