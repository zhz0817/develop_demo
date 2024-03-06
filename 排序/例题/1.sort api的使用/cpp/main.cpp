#include "bits/stdc++.h"
using namespace std;

bool cmp(int& a,int& b){
    return a<b;
}
int main(){
    std::vector<int> nums{10,9,8,7,6,5,4,3,2,1};//简单介绍一下vector
    nums.emplace_back(100);//插入
    std::sort(nums.begin(),nums.end(),cmp); //默认升序
//    std::sort(nums.begin(),nums.end());
//    std::reverse(nums.begin(),nums.end());
    for(int& n:nums){
        cout<<n<<endl;
    }
    return 0;
}