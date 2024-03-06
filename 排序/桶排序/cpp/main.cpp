#include "bits/stdc++.h"
using namespace std;

void bucket_sort(vector<int>& nums){
    int max = 0;
    for(int& n:nums){
        if(max<n){
            max = n;
        }
    }
    vector<int> temp(max+1);
    std::fill(temp.begin(), temp.end(),-1);
    for(int& n:nums){
        temp[n] = n;
    }
    for(int i=0;i<temp.size();i++){
        if(temp[i]!=-1){
            cout<<temp[i]<<endl;
        }
    }

}
int main(){
    std::vector<int> nums{10,9,8,7,6,5,4,3,2,1};//简单介绍一下vector
    bucket_sort(nums);
    return 0;
}