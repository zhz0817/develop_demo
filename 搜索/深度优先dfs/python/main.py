from typing import List, Optional
# python main.py  如果是linux要区分python3和python2

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:

    def minDepth(self, root: Optional[TreeNode]) -> int:
        # Optional代表可能是TreeNode，也可能是None
        if root is None:
            return 0
        ans = 2 ** 31 - 1

        def dfs(node, depth):  # 闭包
            nonlocal ans
            if node.left is None and node.right is None:
                ans = min(ans, depth)
                return
            if depth >= ans:
                return
            if node.left is not None:
                dfs(node.left, depth + 1)
            if node.right is not None:
                dfs(node.right, depth + 1)

        dfs(root, 1)
        return ans


if __name__ == '__main__':
    s = Solution()
