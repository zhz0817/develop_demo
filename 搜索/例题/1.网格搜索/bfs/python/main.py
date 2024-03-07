from functools import cmp_to_key
from typing import List
import sys

sys.setrecursionlimit(100000)  # 例如这里设置为十万


class Solution:

    def numIslands(self, grid: List[List[str]]) -> int:
        ans = 0
        m = len(grid)
        if m == 0:
            return 0
        n = len(grid[0])
        dir = [[1, 0], [0, 1], [-1, 0], [0, -1]]
        queue = []
        for i in range(m):
            for j in range(n):
                if grid[i][j] == '1':
                    grid[i][j] = '0'
                    queue.append([i, j])
                    while len(queue) != 0:
                        x, y = queue.pop(0)
                        for dx, dy in dir:
                            next_x = x + dx
                            next_y = y + dy
                            if 0 <= next_x < m and 0 <= next_y < n and grid[next_x][next_y] == '1':
                                queue.append([next_x, next_y])
                                grid[next_x][next_y] = '0'
                    ans += 1
        return ans


if __name__ == '__main__':
    s = Solution()
    s.numIslands([["1","1","1","1","0"],["1","1","0","1","0"],["1","1","0","0","0"],["0","0","0","0","0"]])