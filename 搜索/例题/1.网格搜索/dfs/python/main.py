import sys
sys.setrecursionlimit(100000) #例如这里设置为十万 

class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        ans = 0
        m = len(grid)
        if m == 0:
            return 0
        n = len(grid[0])
        dir = [[1, 0], [0, 1], [-1, 0], [0, -1]]

        def dfs(grid, x, y):
            grid[x][y] = '0'
            for i in range(4):
                next_x = x + dir[i][0]
                next_y = y + dir[i][1]
                if 0 <= next_x < m and 0 <= next_y < n and grid[next_x][next_y] == '1':
                    dfs(grid, next_x, next_y)

        for i in range(m):
            for j in range(n):
                if grid[i][j] == '1':
                    ans += 1
                    dfs(grid, i, j)
        return ans