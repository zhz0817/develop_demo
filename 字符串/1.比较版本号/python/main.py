from functools import cmp_to_key
from typing import List


# import sys
#
# sys.setrecursionlimit(100000)  # 例如这里设置为十万


class Solution:

    def compareVersion(self, version1: str, version2: str) -> int:
        ss1 = version1.split('.')
        ss2 = version2.split('.')
        while len(ss1) > 0 and int(ss1[-1]) == 0:
            ss1.pop(-1)
        while len(ss2) > 0 and int(ss2[-1]) == 0:
            ss2.pop(-1)
        i = 0
        j = 0
        while i < len(ss1) or j < len(ss2):
            if i >= len(ss1):
                return -1
            if j >= len(ss2):
                return 1
            if int(ss1[i]) > int(ss2[j]):
                return 1
            elif int(ss1[i]) < int(ss2[j]):
                return -1
            i += 1
            j += 1
        return 0


if __name__ == '__main__':
    s = Solution()
    s.compareVersion("1.0","1.0.0")
