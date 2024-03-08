#include "bits/stdc++.h"
using namespace std;
//https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/description/
class Solution {
public:
    int floor(vector<int>& nums,int left,int right,int target){
            int mid;
            while (left<=right){
                mid = left+(right-left)/2;
                if(nums[mid]==target){
                    right = mid-1;
                }else{
                    left = mid+1;
                }
            }
            return left;
        }

    int ceil(vector<int>& nums,int left,int right,int target){
            int mid;
            while (left<=right){
                mid = left+(right-left)/2;
                if(nums[mid]==target){
                    left = mid+1;
                }else{
                    right = mid-1;
                }
            }
            return left-1;
        }

    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        bool flag = false;
        int index = 0;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target){
                index = mid;
                flag = true;
                break;
            }else if(nums[mid]>target){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        if(!flag){
            return {-1,-1};
        }
        vector<int> ans(2);
        ans[0] = floor(nums,0,index,target);
        ans[1] = ceil(nums,index,nums.size()-1,target);
        return ans;
    }
};
int main(){
    Solution s;
    return 0;
}