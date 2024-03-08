import java.io.*;
// 1:无需package
// 2: 类名必须Main, 不可修改

public class Main {

    public int maxProfit(int[] prices) {
        int ans = 0;
        for(int i=1;i<prices.length;i++){
            int val = prices[i]-prices[i-1];
            if(val>0){
                ans+=val;
            }
        }
        return ans;
    }

    public static void main(String[] args) throws IOException {
        Main main = new Main();
    }
}