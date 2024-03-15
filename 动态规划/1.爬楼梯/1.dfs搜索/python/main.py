from typing import List


class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 2:
            return n
        ans = 0

        def dfs(index):
            nonlocal ans
            nonlocal n
            if index >= n:
                if index == n:
                    ans += 1
                return
            for i in range(1, 3):
                dfs(index + i)

        dfs(0)
        return ans


if __name__ == '__main__':
    s = Solution()
