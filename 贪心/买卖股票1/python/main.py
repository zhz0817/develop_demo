from functools import cmp_to_key
from typing import List


# import sys
#
# sys.setrecursionlimit(100000)  # 例如这里设置为十万


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price = 0x3f3f3f3f
        max_profit = 0
        for price in prices:
            min_price = min(min_price, price)
            max_profit = max(max_profit, price - min_price)
        return max_profit


if __name__ == '__main__':
    s = Solution()
