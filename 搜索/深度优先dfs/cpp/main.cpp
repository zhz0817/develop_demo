#include <bits/stdc++.h>
using namespace std;
// https://leetcode.cn/problems/minimum-depth-of-binary-tree/description/
// g++ -o 二进制文件名 源文件名 -std=c++11 举例 g++ -o main main.cpp -std=c++11
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  int ans = INT32_MAX;
  void dfs(TreeNode *root, int depth) {
    if (root->left == nullptr && root->right == nullptr) {
      ans = std::min(ans, depth);
      return;
    }
    if (depth >= ans) {
      return;
    }
    if (root->left != nullptr) {
      dfs(root->left, depth + 1);
    }
    if (root->right != nullptr) {
      dfs(root->right, depth + 1);
    }
  }
  int minDepth(TreeNode *root) {
    if (root == nullptr) {
      return 0;
    }
    dfs(root, 1);
    return ans;
  }
};

int main() { return 0; }