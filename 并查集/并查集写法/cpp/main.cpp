#include "bits/stdc++.h"
using namespace std;
//https://leetcode.cn/problems/car-pooling/description/
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int max = 1000;
        int diff[max+1];
        for(vector<int> trip:trips){
            diff[trip[1]] += trip[0];
            diff[trip[2]] -= trip[0];
        }

        int sum = 0;
        for(int i=0;i<=max;i++){
            sum+=diff[i];
            if(sum>capacity){
                return false;
            }
        }
        return true;
    }
};
int main(){
    return 0;
}