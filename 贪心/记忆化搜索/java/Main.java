import java.util.*;

// 1:无需package
// 2: 类名必须Main, 不可修改
public class Main {
    public boolean carPooling(int[][] trips, int capacity) {
        final int max = 1000; // 最远距离处
        int[] diff = new int[max + 1];
        for (int[] trip : trips) {
            diff[trip[1]] += trip[0];
            diff[trip[2]] -= trip[0];
        }
        int prefixSum = 0;
        for (int i = 0; i <= max; i++) {
            prefixSum += diff[i];
            if (prefixSum > capacity) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Main main = new Main();
    }
}