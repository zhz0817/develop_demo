import java.util.*;

// 1:无需package
// 2: 类名必须Main, 不可修改
public class Main {

    public static void main(String[] args) {
        int[] nums = new int[]{10,9,8,7,6,5,4,3,2,1};
        Queue<Integer> queue = new PriorityQueue<>((a,b)->a-b);
        for(int n:nums){
            queue.offer(n);
        }
        while (!queue.isEmpty()){
            System.out.println(queue.poll());
        }
    }
}