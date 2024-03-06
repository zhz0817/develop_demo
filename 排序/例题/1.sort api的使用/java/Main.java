import java.util.*;

// 1:无需package
// 2: 类名必须Main, 不可修改
public class Main {

    public static void main(String[] args) {
        int[] nums = new int[]{10,9,8,7,6,5,4,3,2,1};
        List<Integer> list = new ArrayList<>();
        for(int n:nums){
            list.add(n);
        }
        Arrays.sort(nums);
        Collections.sort(list);
        for(int n:nums){
            System.out.println(n);
        }
    }
}