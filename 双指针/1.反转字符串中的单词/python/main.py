from functools import cmp_to_key
from typing import List


# import sys
#
# sys.setrecursionlimit(100000)  # 例如这里设置为十万


class Solution:
    def reverseWords(self, s: str) -> str:
        ans = ""
        left = len(s) - 1
        right = len(s) - 1
        while left >= 0:
            ch = s[left]
            if ch == " ":
                if left != right:
                    ans += s[left + 1:right + 1]
                    ans += " "
                    right = left
                right -= 1
            left -= 1
        if right >= 0:
            ans += s[left + 1:right + 1]
        else:
            ans = ans[0:len(ans)-1]
        return ans


if __name__ == '__main__':
    s = Solution()
    s.reverseWords("  hello world  ")
