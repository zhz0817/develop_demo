from typing import List


def merge_sort(nums, l, r):
    if l == r:
        return
    mid = (l + r) // 2
    merge_sort(nums, l, mid)
    merge_sort(nums, mid + 1, r)
    tmp = []
    i, j = l, mid + 1
    while i <= mid or j <= r:
        if i > mid or (j <= r and nums[j] < nums[i]):
            tmp.append(nums[j])
            j += 1
        else:
            tmp.append(nums[i])
            i += 1
    nums[l: r + 1] = tmp


def sortArray(nums: List[int]) -> List[int]:
    merge_sort(nums, 0, len(nums) - 1)
    return nums


if __name__ == '__main__':
    nums = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
    sortArray(nums)
    for n in nums:
        print(n)
