from functools import cmp_to_key
from typing import List


# import sys
#
# sys.setrecursionlimit(100000)  # 例如这里设置为十万


class Solution:

    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        max_value = 1000
        diff = [0] * (max_value + 1)
        for trip in trips:
            diff[trip[1]] += trip[0]
            diff[trip[2]] -= trip[0]
        sum = 0
        for n in diff:
            sum += n
            if sum > capacity:
                return False
        return True


if __name__ == '__main__':
    s = Solution()
