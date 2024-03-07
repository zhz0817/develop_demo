import java.util.*;

// 1:无需package
// 2: 类名必须Main, 不可修改
public class Main {

    int[][] dir = new int[][]{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    public void dfs(char[][] grid,int x,int y){
        grid[x][y] = '0';
        for (int i = 0; i < 4; i++) {
            int next_x = x + dir[i][0];
            int next_y = y + dir[i][1];
            boolean flag = next_x >= 0 && next_x < grid.length && next_y >= 0 &&
                    next_y < grid[0].length;
            if (flag) {
                if (grid[next_x][next_y] == '1') {
                    dfs(grid, next_x, next_y);
                }
            }
        }
    }
    public int numIslands(char[][] grid) {
        int ans = 0;
        int m = grid.length;
        if(m==0){
            return ans;
        }
        int n = grid[0].length;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Main main = new Main();
    }
}