#include "bits/stdc++.h"
using namespace std;
// https://leetcode.cn/problems/permutations/description/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int length = nums.size();
        int n = 1;
        for(int i=2;i<=length;i++){
            n*=i;
        }
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans(n);
        for(int i=0;i<n;i++){
            vector<int> temp = nums;//深拷贝
            ans[i] = temp;
            next_permutation(nums.begin(), nums.end());
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> vector1 {1,2,3};
    s.permute(vector1);
}