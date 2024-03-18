#include "bits/stdc++.h"
using namespace std;
// https://leetcode.cn/problems/reordered-power-of-2/description/
class Solution {
public:
    vector<int> get_number(long long n){
        vector<int> ans(10,0);
        while (n!=0){
            int temp = n%10;
            ans[temp]++;
            n/=10;
        }
        return ans;
    }

    int get_length(long long n){
        int ans = 0;
        while(n!=0){
            ans++;
            n/=10;
        }
        return ans;
    }
    bool reorderedPowerOf2(int n) {
        vector<int> bits1 = get_number(n);
        int length1 = get_length(n);
        for(long long i=1;;i*=2){
            int length2 = get_length(i);
            if(length2>length1){
                break;
            }else if(length2<length1){
                continue;
            }else{
                vector<int> bits2 = get_number(i);
                bool flag = true;
                for(int j=0;j<10;j++){
                    if(bits1[j]!=bits2[j]){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    Solution s;
}