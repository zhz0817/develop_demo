#include "bits/stdc++.h"
using namespace std;

//https://leetcode.cn/problems/sort-an-array/solutions/178305/pai-xu-shu-zu-by-leetcode-solution/
vector<int> tmp;
void mergeSort(vector<int>& nums, int l, int r) {
    if (l >= r)
        return;
    int mid = (l + r) >> 1; //右移位和/2
    mergeSort(nums, l, mid);
    mergeSort(nums, mid + 1, r);
    int i = l, j = mid + 1;
    int cnt = 0;
    while (i <= mid && j <= r) {
        if (nums[i] <= nums[j]) {
            tmp[cnt++] = nums[i++];
        }
        else {
            tmp[cnt++] = nums[j++];
        }
    }
    while (i <= mid) {
        tmp[cnt++] = nums[i++];
    }
    while (j <= r) {
        tmp[cnt++] = nums[j++];
    }
    for (int i = 0; i < r - l + 1; ++i) {
        nums[i + l] = tmp[i];
    }
}

int main(){
    std::vector<int> nums{10,9,8,7,6,5,4,3,2,1};//简单介绍一下vector
    tmp.resize((int)nums.size(), 0);
    mergeSort(nums,0,(int)nums.size()-1);//讲一下什么是引用，为什么size前面要转int
    for(int& n:nums){
        cout<<n<<endl;
    }
    return 0;
}