import java.io.*;
// 1:无需package
// 2: 类名必须Main, 不可修改

public class Main {

    public int maxProfit(int[] prices) {
        int minPrice=Integer.MAX_VALUE;
        int maxProfit=0;
        for(int x:prices){
            minPrice=Math.min(minPrice,x);
            maxProfit=Math.max(maxProfit,x-minPrice);
        }
        return maxProfit;
    }

    public static void main(String[] args) throws IOException {
        Main main = new Main();
    }
}