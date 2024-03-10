#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void dfs(vector<vector<int>>& isConnected,vector<int>& isVisited,int pos,int length){
        isVisited[pos] = 1;
        for(int i=0;i<length;i++){
            if(isConnected[pos][i]==1&&isVisited[i]==0){
                dfs(isConnected,isVisited,i,length);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int length = isConnected.size();
        vector<int> isVisited(length);//讲一下为什么不用vector<bool>
        int ans = 0;
        for(int i=0;i<length;i++){
            if(isVisited[i]==0){
                ans++;
                dfs(isConnected,isVisited,i,length);
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}