#include "bits/stdc++.h"
using namespace std;
// https://www.zhihu.com/question/483978234/answer/3251244691?utm_id=0
void quick_sort(vector<int>& nums,int left,int right);
int partition(vector<int>& nums,int left,int right); //讲一下为什么要先声明
void quick_sort(vector<int>& nums,int left,int right){
    if(left>=right){
        return;
    }
    int index = partition(nums,left,right);
    quick_sort(nums,left,index-1);
    quick_sort(nums,index+1,right);
}

int partition(vector<int>& nums,int left,int right){
    int p=nums[left];//基准元素(可取随机位置)
    int l=left;//左指针
    int r=right;//右指针

    while(l<r){
        //控制右指针向左移动，找到小于基准元素的那个数
        while((l<r)&&(nums[r]>p)){
            r--;
        }
        if(l<r){
            nums[l++] = nums[r];
        } 
        //控制左指针向右移动，找到大于基准元素的那个数
        while((l<r)&&(nums[l]<=p)){
            l++;
        }
        if(l<r){
            nums[r--] = nums[l];
        }
    }
    //交换基准元素和重合点的元素
    nums[l]=p;
    return l;
}
int main(){
    std::vector<int> nums{10,9,8,7,6,5,4,3,2,1};
    quick_sort(nums,0,(int)nums.size()-1);
    for(int& n:nums){
        cout<<n<<endl;
    }
    system("pause");
    return 0;
}