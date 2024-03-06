#include<bits/stdc++.h>
using namespace std;



struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root== nullptr){
            return ans;
        }
        queue<TreeNode*> queue;
        queue.push(root);
        while(!queue.empty()){
            int length = queue.size();
            vector<int> temp;
            for(int i=0;i<length;i++){
                int val = queue.front()->val;
                temp.emplace_back(val);
                if(queue.front()->left!= nullptr){
                    queue.push(queue.front()->left);
                }
                if(queue.front()->right!= nullptr){
                    queue.push(queue.front()->right);
                }
                queue.pop();
            }
            ans.emplace_back(temp);
        }
        return ans;
    }
};

int main() {
    return 0;
}