#include "bits/stdc++.h"
using namespace std;

void radix_sort(vector<int>& nums){
    int base = 1;
    int max = -1;
    for(int& n:nums){
        max = std::max(max,n);
    }
    while(base<=max){
        vector<vector<int>> temp;
        for (int i = 0; i < 10; ++i) {
            vector<int> t;
            temp.emplace_back(t);
        }
        for(int& n:nums){
            int index = n/base%10;
            temp[index].emplace_back(n);
        }
        int index = 0;
        for (int i = 0; i < 10; ++i) {
            for(int& value:temp[i]){
                nums[index] = value;
                index++;
            }
        }
        base*=10;
    }
}

int main(){
    std::vector<int> nums{10,9,8,7,6,5,4,3,2,1};//简单介绍一下vector
    radix_sort(nums);
    for(int& n:nums){
        cout<<n<<endl;
    }
    return 0;
}