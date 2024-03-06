#include "bits/stdc++.h"
using namespace std;

int main(){
    std::vector<int> nums{10,9,8,7,6,5,4,3,2,1};//简单介绍一下vector
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int& n:nums){
        pq.push(n);
    }
    while (!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}