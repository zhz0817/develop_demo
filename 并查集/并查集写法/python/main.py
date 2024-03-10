class UnionFind:

    def __init__(self, n):
        self.parent = []
        for i in range(n):
            self.parent.append(i)

    def union(self, x, y):
        self.parent[self.find(x)] = self.find(y)

    def find(self, index):
        if self.parent[index] != index:
            self.parent[index] = self.find(self.parent[index])
        return self.parent[index]


class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        length = len(isConnected)
        uf = UnionFind(length)
        ans = 0
        for i in range(length):
            for j in range(i + 1, length):
                if isConnected[i][j] == 1:
                    uf.union(i, j)
        for i in range(length):
            if uf.parent[i] == i:
                ans += 1
        return ans