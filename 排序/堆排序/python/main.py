from queue import PriorityQueue

if __name__ == '__main__':
    nums = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
    q = PriorityQueue()
    for n in nums:
        q.put((n, n * -1))  # 说一下优先级
    while not q.empty():
        print(q.get()[0])
