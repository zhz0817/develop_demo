import java.io.*;
// 1:无需package
// 2: 类名必须Main, 不可修改

public class Main {

    public int searchInsert(int[] nums, int target) {
        int left = 0, right = nums.length-1;
        int mid;
        while (left<=right){
            mid = left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                right=mid-1;
            }else{
                left = mid+1;
            }
        }
        return left;
    }

    public static void main(String[] args) throws IOException {
        Main main = new Main();
    }
}