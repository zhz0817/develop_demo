
if __name__ == '__main__':
    nums = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
    max_value = -1
    for n in nums:
        max_value = max(max_value,n)
    temp = [-1]*(1+max_value)
    for n in nums:
        temp[n] = n
    for n in temp:
        if n != -1:
            print(n)

