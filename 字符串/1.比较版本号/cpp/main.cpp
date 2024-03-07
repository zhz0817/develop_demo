#include "bits/stdc++.h"
using namespace std;
//https://leetcode.cn/problems/compare-version-numbers/
class Solution {
    //重点讲C++的split
public:

    vector<int> split(string s){
        vector<int> ans;
        string t = "";
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch=='.'){
                ans.emplace_back(atoi(t.c_str()));
                t = "";
            }else{
                t+=ch;
            }
        }
        if(t.size()>0){
            ans.emplace_back(atoi(t.c_str()));
        }
        while(ans.size()>0){
            if(ans[ans.size()-1]==0){
                ans.pop_back();
            }else{
                break;
            }
        }
        return ans;
    }
    int compareVersion(string version1, string version2) {
        vector<int> arr1 = split(version1);
        vector<int> arr2 = split(version2);
        int i=0,j=0;
        while(i<arr1.size()||j<arr2.size()){
            if(i>=arr1.size()){
                return -1;
            }
            if(j>=arr2.size()){
                return 1;
            }
            if(arr1[i]!=arr2[j]){
                return arr1[i]>arr2[j]?1:-1;
            }
            i++;j++;
        }
        return 0;
    }
};
int main(){
    Solution s;
    int ans = s.compareVersion("1.0","1.0.0");
    cout<<ans<<endl;
    return 0;
}