#include "bits/stdc++.h"
using namespace std;
//https://leetcode.cn/problems/search-insert-position/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int mid;
        while(left<=right){
            mid = left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return left;
        // return right+1;
    }
};
int main(){
    Solution s;
    vector<int> vector1{1,3,5,6};
    s.searchInsert(vector1,5);
    return 0;
}