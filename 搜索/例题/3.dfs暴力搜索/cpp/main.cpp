#include "bits/stdc++.h"
using namespace std;
// P1048
bool flag;
void dfs(vector<vector<int>>& arr,vector<int>& is_visited,int& n,int count,int time){
    if(flag){
        return;
    }
    if(count==n){
        flag = true;
        return;
    }
    for(int i=0;i<n;i++){
        if(is_visited[i]==0&&time<=arr[i][0]+arr[i][1]){
            is_visited[i]=1;
            int temp = std::max(time,arr[i][0]);
            dfs(arr,is_visited,n,count+1,temp+arr[i][2]);
            is_visited[i]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t-->0){
        flag = false;
        int n;
        cin>>n;
        int ti,di,li;
        vector<vector<int>> arr;
        for(int i=0;i<n;i++){
            vector<int> temp(3);
            cin>>ti>>di>>li;
            temp[0] = ti;
            temp[1] = di;
            temp[2] = li;
            arr.emplace_back(temp);
        }
        vector<int> is_visited(n,0);
        dfs(arr,is_visited,n,0,0);
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
// 2
// 3
// 0 100 10
// 10 10 10
// 0 2 20
// 3
// 0 10 20
// 10 10 20
// 20 10 20