#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define forn(i,a,b) for(int i=a;i<=b;i++)

class Solution {
public:
    int ans = 0;

    void dfs(int index,int n){
        if(index>=n){
            if(index==n){
                ans++;
            }
            return;
        }
        for(int i=1;i<=2;i++){
            dfs(index+i,n);
        }
    }

    int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        dfs(0,n);
        return this->ans;
    }
};
int main(){
//    ll n;
//    cin>>n;
    return 0;
}

