#include "bits/stdc++.h"
using namespace std;
// https://leetcode.cn/problems/sort-the-people/
class Solution {
public:

    static bool cmp(std::pair<std::string,int> pair1,std::pair<std::string,int> pair2){
        return pair1.second>pair2.second;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<std::pair<std::string,int>> pairs;
        for(int i=0;i<n;i++){
            std::pair<std::string,int> pair(names[i],heights[i]);
            pairs.emplace_back(pair);
        }
        sort(pairs.begin(),pairs.end(),cmp);
        vector<string> ans(n);
        for(int i=0;i<n;i++){
            ans[i] = pairs[i].first;
        }
        return ans;
    }
};
int main(){
    Solution* s = new Solution();
    vector<string> names{"Mary","John","Emma"};
    vector<int> heights{180,165,170};
    s->sortPeople(names,heights);
    return 0;
}