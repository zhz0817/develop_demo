import os.path
import sys

sys.setrecursionlimit(100000)  # 例如这里设置为十万


def dfs_file(path: str):
    if os.path.isfile(path):
        print(path)
        return
    for file_path in os.listdir(path):
        dfs_file(path + "\\" + file_path)


def bfs_file(path: str):
    queue1 = [path]
    while len(queue1) > 0:
        length = len(queue1)
        for i in range(length):
            node = queue1.pop(0)
            if os.path.isfile(node):
                print(node)
            else:
                for file_path in os.listdir(node):
                    queue1.append(node + "\\" + file_path)


if __name__ == '__main__':
    # s = Solution()
    dfs_file("E:\\cloud_demo")
    bfs_file("E:\\cloud_demo")
