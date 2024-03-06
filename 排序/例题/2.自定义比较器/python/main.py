from functools import cmp_to_key
from typing import List


class Pair:
    def __init__(self, height: int, name: str):
        self.height = height
        self.name = name


class Solution:

    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        n = len(names)
        ans = []
        list1 = []
        for i in range(n):
            list1.append(Pair(heights[i], names[i]))

        def cmp(a, b):
            return b.height - a.height

        list2 = sorted(list1, key=cmp_to_key(cmp))
        for i in range(n):
            ans.append(list2[i].name)
        return ans


if __name__ == '__main__':
    s = Solution()
    s.sortPeople(["Mary", "John", "Emma"], [180, 165, 170])
