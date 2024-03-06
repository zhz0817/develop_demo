from typing import List
#https://www.jianshu.com/p/5bf511e5a648

def radix_sort(nums: List[int]):
    base = 1
    maxv = max(nums)
    while base <= maxv:
        bucket = []
        for idx in range(10):
            bucket.append([])
        for num in nums:
            idx = num // base % 10
            bucket[idx].append(num)
        l = 0
        for idx in range(10):
            for v in bucket[idx]:
                nums[l] = v
                l += 1
        base *= 10


if __name__ == '__main__':
    nums = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
    radix_sort(nums)
    for n in nums:
        print(n)
