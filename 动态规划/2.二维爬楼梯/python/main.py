from functools import cmp_to_key
from typing import List


# import sys
#
# sys.setrecursionlimit(100000)  # 例如这里设置为十万


class Solution:

    def addStrings(self, num1: str, num2: str) -> str:
        i = len(num1) - 1
        j = len(num2) - 1
        ans = []
        add = 0
        while i >= 0 or j >= 0 or add != 0:
            x = 0
            y = 0
            if i >= 0:
                x = int(num1[i])
            if j >= 0:
                y = int(num2[j])
            result = x + y + add
            ans.append(str(result % 10))
            add = result // 10
            i -= 1
            j -= 1
        ans.reverse()
        return "".join(ans)


if __name__ == '__main__':
    s = Solution()
    s.addStrings("11","123")