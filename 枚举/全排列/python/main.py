import itertools
from typing import List


class Solution:

    def permute(self, nums: List[int]) -> List[List[int]]:
        ans = []
        # nums.sort()
        for info in itertools.permutations(nums, len(nums)):
            ans.append(info)
        return ans


if __name__ == '__main__':
    pass
