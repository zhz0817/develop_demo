from typing import List


class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        # length = len(isConnected)
        # ans = 0
        # queue = []
        # isVisited = [False] * length
        # for i in range(length):
        #     if not isVisited[i]:
        #         ans+=1
        #         queue.append(i)
        #         isVisited[i] = True
        #         while len(queue) != 0:
        #             pos = queue.pop(0)
        #             for j in range(length):
        #                 if isConnected[pos][j] == 1 and isVisited[j] is False:
        #                     queue.append(j)
        #                     isVisited[j] = True
        # return ans
        length = len(isConnected)    #map优化
        ans = 0
        queue = []
        dict1 = {}
        for i in range(length):
            set1 = set()
            dict1[i] = set1
        for i in range(length):
            for j in range(len(isConnected[i])):
                if isConnected[i][j] == 1:
                    dict1[i].add(j)
        isVisited = [False] * length
        for i in range(length):
            if not isVisited[i]:
                ans+=1
                queue.append(i)
                isVisited[i] = True
                while len(queue) != 0:
                    pos = queue.pop(0)
                    for j in range(length):
                        if j in dict1[pos] and isVisited[j] is False:
                            queue.append(j)
                            isVisited[j] = True
        return ans


if __name__ == '__main__':
    s = Solution()
