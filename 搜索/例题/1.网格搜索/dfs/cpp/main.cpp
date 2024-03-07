#include "bits/stdc++.h"
using namespace std;
// https://leetcode.cn/problems/number-of-islands/
class Solution {
public:
  int direction[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

  void dfs(vector<vector<char>> &grid, int x, int y) {
    grid[x][y] = '0';
    for (int i = 0; i < 4; i++) {
      int next_x = x + direction[i][0];
      int next_y = y + direction[i][1];
      bool flag = next_x >= 0 && next_x < grid.size() && next_y >= 0 &&
                  next_y < grid[0].size();
      if (flag) {
        if (grid[next_x][next_y] == '1') {
          dfs(grid, next_x, next_y);
        }
      }
    }
  }

  int numIslands(vector<vector<char>> &grid) {
    int ans = 0;
    int m = grid.size();
    if (m == 0) {
      return 0;
    }
    int n = grid[0].size();
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[i][j] == '1') {
          dfs(grid, i, j);
          ans++;
        }
      }
    }
    return ans;
  }
};
int main() {
  vector<vector<char>> grid{{'1'}, {'1'}};
  Solution *s = new Solution();
  s->numIslands(grid);
  return 0;
}