import java.util.*;

// 1:无需package
// 2: 类名必须Main, 不可修改
public class Main {
    public int numIslands(char[][] grid) {
        int ans = 0;
        int m = grid.length;
        if(m==0){
            return ans;
        }
        int n = grid[0].length;
        int[][] direction = new int[][]{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        Queue<int[]> queue = new ArrayDeque<>();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    queue.offer(new int[]{i,j});
                    grid[i][j] = '0';
                    while(!queue.isEmpty()){
                        int[] p = queue.poll();
                        for(int l=0;l<4;l++){
                            int next_x = p[0]+direction[l][0];
                            int next_y = p[1]+direction[l][1];
                            boolean flag = next_x >= 0 && next_x < grid.length && next_y >= 0 &&
                                    next_y < grid[0].length;
                            if(flag&&grid[next_x][next_y]=='1'){
                                queue.offer(new int[]{next_x,next_y});
                                grid[next_x][next_y] = '0';
                            }
                        }
                    }
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