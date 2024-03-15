import java.util.*;

// 1:无需package
// 2: 类名必须Main, 不可修改
public class Main {

  public int climbStairs(int n) {
    if (n <= 2) {
      return n;
    }
    int[] dp = new int[n + 1];
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
      dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
  }

  public static void main(String[] args) { Main main = new Main(); }
}