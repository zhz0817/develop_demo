#include "bits/stdc++.h"
using namespace std;
//https://leetcode.cn/problems/car-pooling/description/
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int length = isConnected.size();
        queue<int> queue;
        int isVisited[length];
        memset(isVisited,0,sizeof(isVisited));//memset举例
        int res=0;
        for(int i=0;i<length;i++){
            if(isVisited[i]==0){
                res++;
                queue.push(i);
                isVisited[i]=1;
                while(!queue.empty()){
                    int pos = queue.front();
                    queue.pop();
                    for(int j=0;j<length;j++){
                        if(isConnected[pos][j]==1&&isVisited[j]==0){
                            isVisited[j]=1;
                            queue.push(j);
                        }
                    }
                }
            }
        }
        return res;
    }
};
int main(){
    return 0;
}