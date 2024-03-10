from typing import List


class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        length = len(isConnected)
        isVisied = [False] * length
        ans = 0

        def dfs(isConnected, isVisied, pos):
            isVisied[pos] = True
            for i in range(length):
                if isConnected[pos][i] == 1 and not isVisied[i]:
                    dfs(isConnected, isVisied, i)

        for i in range(length):
            if not isVisied[i]:
                ans += 1
                dfs(isConnected, isVisied, i)
        return ans


if __name__ == '__main__':
    s = Solution()
