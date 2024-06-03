#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'canReach' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER x1
#  2. INTEGER y1
#  3. INTEGER x2
#  4. INTEGER y2
#
def BFS(x1, y1, x2, y2):
    queue = [(x1, y1)]
    visited = set()
    while queue:
        x, y = queue.pop(0)
        if x == x2 and y == y2:
            return "Yes"
        if (x, y) in visited:
            continue
        visited.add((x, y))
        if x + y <= x2:
            queue.append((x + y, y))
        if x + y <= y2:
            queue.append((x, x + y))
    return "No"
def canReach(x1, y1, x2, y2):
    return BFS(x1, y1, x2, y2)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    x1 = int(input().strip())

    y1 = int(input().strip())

    x2 = int(input().strip())

    y2 = int(input().strip())

    result = canReach(x1, y1, x2, y2)

    fptr.write(result + '\n')

    fptr.close()
