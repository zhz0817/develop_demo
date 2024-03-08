from functools import cmp_to_key
from typing import List


# import sys
#
# sys.setrecursionlimit(100000)  # 例如这里设置为十万


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans = 0
        for i in range(1, len(prices)):
            val = prices[i] - prices[i - 1]
            if val > 0:
                ans += val
        return ans


if __name__ == '__main__':
    s = Solution()
