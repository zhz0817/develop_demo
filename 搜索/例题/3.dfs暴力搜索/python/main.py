import sys

sys.setrecursionlimit(100000)  # 例如这里设置为十万

flag = False


def dfs(list1, is_visited, n, count, time):
    global flag
    if flag is True:
        return
    if count == n:
        flag = True
        return
    for i in range(n):
        if is_visited[i] is False and time <= list1[i][0] + list1[i][1]:
            is_visited[i] = True
            temp = max(time, list1[i][0])
            dfs(list1, is_visited, n, count + 1, temp + list1[i][2])
            is_visited[i] = False


if __name__ == '__main__':
    t = int(input())
    while t > 0:
        t -= 1
        flag = False
        list1 = []
        n = int(input())
        for i in range(n):
            temp = []
            s = input()
            s = s.split(" ")
            for j in range(3):
                temp.append(int(s[j]))
            list1.append(temp)
        is_visited = [False] * n
        dfs(list1, is_visited, n, 0, 0)
        if flag is True:
            print("YES")
        else:
            print("NO")
