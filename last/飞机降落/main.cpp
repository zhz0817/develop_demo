// 有 N 架飞机准备降落到某个只有一条跑道的机场。

// 其中第 i架飞机在 Ti 时刻到达机场上空，到达时它的剩余油料还可以继续盘旋 Di个单位时间，即它最早可以于 Ti 时刻开始降落，最晚可以于 Ti+Di 时刻开始降落。

// 降落过程需要 Li 个单位时间。

// 一架飞机降落完毕时，另一架飞机可以立即在同一时刻开始降落，但是不能在前一架飞机完成降落前开始降落。

// 请你判断 N 架飞机是否可以全部安全降落。

        

// 输入包含多组数据。

// 第一行包含一个整数 T，代表测试数据的组数。

// 对于每组数据，第一行包含一个整数 N。

// 以下 N行，每行包含三个整数：Ti，Di 和 Li。

// 输出格式

// 对于每组数据，输出 YES 或者 NO，代表是否可以全部安全降落。

// 数据范围

// 对于 30%30% 的数据，N≤2。
// 对于 100%100% 的数据，1≤T≤10，1≤N≤10，0≤Ti,Di,Li≤10^5。

#include "bits/stdc++.h"
using namespace std;

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