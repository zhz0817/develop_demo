import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
// 1:无需package
// 2: 类名必须Main, 不可修改

public class Main {

    public int uniquePaths(int m, int n) {
        int[][] dp = new int[m+1][n+1];
        for(int i=1;i<=m;i++){
            dp[i][1] = 1;
        }
        for(int i=1;i<=n;i++){
            dp[1][i] = 1;
        }
        for(int i=2;i<=m;i++){
            for(int j=2;j<=n;j++){
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m][n];
    }

    public static void main(String[] args) throws IOException {
        Main main = new Main();
    }
}