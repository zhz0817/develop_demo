#include "bits/stdc++.h"
using namespace std;
//https://leetcode.cn/problems/number-of-islands/
class Solution {
public:

    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        int m = grid.size();
        if(m==0){
            return 0;
        }
        int direction[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        queue<std::pair<int,int>> queue1;
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    queue1.push({i,j});
                    grid[i][j] = '0';
                    while(!queue1.empty()){
                        auto p = queue1.front();
                        queue1.pop();
                        for(int l=0;l<4;l++){
                            int next_x = p.first+direction[l][0];
                            int next_y = p.second+direction[l][1];
                            bool flag = next_x >= 0 && next_x < grid.size() && next_y >= 0 &&
                                        next_y < grid[0].size();
                            if(flag&&grid[next_x][next_y]=='1'){
                                queue1.push({next_x,next_y});
                                grid[next_x][next_y] = '0';
                            }
                        }
                    }
                    ans++;
                }
            }
        }
        return ans;
    }


};
int main(){
    vector<vector<char>> grid{{'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0'}};
    Solution *s = new Solution();
    s->numIslands(grid);
    return 0;
}