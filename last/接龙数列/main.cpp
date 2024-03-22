#include "bits/stdc++.h"
using namespace std;
// https://www.luogu.com.cn/problem/P9242
void get_start(vector<int>& start,vector<int>& vector1){
    for(int i=0;i<vector1.size();i++){
        int temp = vector1[i];
        while (temp>=10){
            temp/=10;
        }
        start[i] = temp;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> vector1(n);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vector1[i] = temp;
    }
    vector<int> start(n);
    vector<int> end(n);
    get_start(start,vector1);
    for(int i=0;i<n;i++){
        end[i] = vector1[i]%10;
    }
    int dp[10];
    memset(dp,0,sizeof (dp));
    for(int i=1;i<=n;i++){
        int tail = end[i-1];
        int head = start[i-1];
        dp[tail] = std::max(dp[tail],1+dp[head]);
    }
    int max1 = 0;
    for(int m : dp){
        max1 = std::max(max1,m);
    }
    cout<<n-max1<<endl;
}