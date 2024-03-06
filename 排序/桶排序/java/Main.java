import java.util.*;

// 1:无需package
// 2: 类名必须Main, 不可修改
public class Main {

    public static void main(String[] args) {
        int[] nums = new int[]{10,9,8,7,6,5,4,3,2,1};
        int max = 0;
        for(int n:nums){
            max = Math.max(max,n);
        }
        int[] temp = new int[max+1];
        Arrays.fill(temp,-1);
        for(int n:nums){
            temp[n] = n;
        }
        for(int n:temp){
            if(n!=-1){
                System.out.println(n);
            }
        }
    }
}