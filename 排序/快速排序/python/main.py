from random import random
from typing import List


def quick_sort(nums: List[int], left: int, right: int):
    if left >= right:
        return
    index = partition(nums, left, right)
    quick_sort(nums, left, index - 1)
    quick_sort(nums, index + 1, right)


def partition(nums: List[int], left: int, right: int) -> int:
    p = nums[left]
    l = left
    r = right
    while l != r:
        while l < r and nums[r] > p:
            r -= 1
        while l < r and nums[l] <= p:
            l += 1
        if l < r:
            tmp = nums[l]
            nums[l] = nums[r]
            nums[r] = tmp
    nums[left] = nums[l]
    nums[l] = p
    return l


if __name__ == '__main__':
    nums = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
    quick_sort(nums,0,len(nums)-1)
    for n in nums:
        print(n)
