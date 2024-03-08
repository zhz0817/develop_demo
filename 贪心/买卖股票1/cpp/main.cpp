#include "bits/stdc++.h"
using namespace std;
//https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/description/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT32_MAX;
        int max_profit = 0;
        for(int& price:prices){
            min_price = std::min(min_price,price);
            max_profit = std::max(max_profit,price-min_price);
        }
        return max_profit;
    }
};
int main(){
    Solution s;//讲一下暴力解法，也就是解空间这个概念
    return 0;
}