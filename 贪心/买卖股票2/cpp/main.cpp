#include "bits/stdc++.h"
using namespace std;
//https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-ii/description/
//从连续等价于每天的角度给出证明
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        for(int i=1;i<prices.size();i++){
            int val = prices[i]-prices[i-1];
            if(val>0){
                ans+=val;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    return 0;
}