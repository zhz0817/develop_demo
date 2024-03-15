from typing import List


class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 2:
            return n
        map1 = {}
        
        def dfs(n):
            if n<=1:
                return 1
            if n in map1:
                return map1[n]
            ans = dfs(n-1)+dfs(n-2)
            map1[n] = ans 
            return ans 

        return dfs(n)


if __name__ == '__main__':
    s = Solution()
