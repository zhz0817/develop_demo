from typing import List, Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:

    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        ans = []
        if root is None:
            return ans
        queue = [root]
        while len(queue) != 0:
            length = len(queue)
            temp = []
            for i in range(length):
                node = queue.pop(0)
                temp.append(node.val)
                if node.left is not None:
                    queue.append(node.left)
                if node.right is not None:
                    queue.append(node.right)
            ans.append(temp)
        return ans


if __name__ == '__main__':
    s = Solution()
