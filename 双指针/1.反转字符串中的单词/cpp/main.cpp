#include "bits/stdc++.h"
using namespace std;
// https://leetcode.cn/problems/reverse-words-in-a-string/description/
class Solution {
public:
  string reverseWords(string s) {
    int left = s.length() - 1;
    int right = s.length() - 1;
    string ans = "";
    while (left >= 0) {
      char ch = s[left];
      if (ch == ' ') {
        if (left != right) {
          ans += s.substr(left + 1, right - left);
          ans += " ";
          right = left;
        }
        right--;
      }
      left--;
    }
    if (right >= 0)
      ans += s.substr(left + 1, right - left);
    else
      ans = ans.substr(0, ans.size() - 1);
    return ans;
  }
};
int main() {
  Solution s;
  s.reverseWords("  hello world  ");
  return 0;
}