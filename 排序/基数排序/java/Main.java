import java.util.*;

// 1:无需package
// 2: 类名必须Main, 不可修改
public class Main {

    public static void radixSort(int[] nums){
        int base = 1;
        int max = -1;
        for(int n:nums){
            max = Math.max(max,n);
        }
        while(base<=max){
            List<List<Integer>> list = new ArrayList<>();
            for (int i = 0; i < 10; ++i) {
                list.add(new ArrayList<>());
            }
            for(int n:nums){
                int index = n/base%10;
                list.get(index).add(n);
            }
            int index = 0;
            for (int i = 0; i < 10; ++i) {
                for(int value:list.get(i)){
                    nums[index] = value;
                    index++;
                }
            }
            base*=10;
        }
    }
    
    public static void main(String[] args) {
        int[] nums = new int[]{10,9,8,7,6,5,4,3,2,1};
        radixSort(nums);
        for(int n:nums){
            System.out.println(n);
        }
    }
}