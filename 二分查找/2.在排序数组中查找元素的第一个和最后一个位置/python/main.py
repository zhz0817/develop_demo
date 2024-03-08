from functools import cmp_to_key
from typing import List


# import sys
#
# sys.setrecursionlimit(100000)  # 例如这里设置为十万

def floor(nums: List[int], left: int, right: int, target: int) -> int:
    while left <= right:
        mid = (left + right) // 2
        if nums[mid] == target:
            right = mid - 1
        else:
            left = mid + 1
    return left


def ceil(nums: List[int], left: int, right: int, target: int) -> int:
    while left <= right:
        mid = (left + right) // 2
        if nums[mid] == target:
            left = mid + 1
        else:
            right = mid - 1
    return left - 1


class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        left = 0
        right = len(nums) - 1
        flag = False
        index = 0
        while left <= right:
            mid = (left + right) // 2
            if nums[mid] == target:
                index = mid
                flag = True
                break
            elif nums[mid] > target:
                right = mid - 1
            else:
                left = mid + 1
        if not flag:
            return [-1, -1]
        return [floor(nums, 0, index, target), ceil(nums, index, len(nums) - 1, target)]


if __name__ == '__main__':
    s = Solution()
