#include "bits/stdc++.h"
using namespace std;
// https://leetcode.cn/problems/add-strings/

class Solution {
public:
  string addStrings(string num1, string num2) {
    int i = num1.length() - 1, j = num2.length() - 1, add = 0;
    string ans = "";
    while (i >= 0 || j >= 0 || add != 0) {
      int x = i >= 0 ? num1[i] - '0' : 0;
      int y = j >= 0 ? num2[j] - '0' : 0;
      int result = x + y + add;
      ans.push_back('0' + result % 10);
      add = result / 10;
      i -= 1;
      j -= 1;
    }
    // 计算完以后的答案需要翻转过来
    reverse(ans.begin(), ans.end());
    return ans;
    //
    //        作者：力扣官方题解
    //        链接：https://leetcode.cn/problems/add-strings/solutions/357938/zi-fu-chuan-xiang-jia-by-leetcode-solution/
    //        来源：力扣（LeetCode）
    //        著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
  }
};
int main() { return 0; }