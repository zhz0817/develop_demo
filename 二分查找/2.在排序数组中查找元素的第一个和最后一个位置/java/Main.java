import java.io.*;
// 1:无需package
// 2: 类名必须Main, 不可修改
//https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/
public class Main {

    public int floor(int[] nums,int left,int right,int target){
        int mid;
        while (left<=right){
            mid = left+(right-left)/2;
            if(nums[mid]==target){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return left;
    }

    public int ceil(int[] nums,int left,int right,int target){
        int mid;
        while (left<=right){
            mid = left+(right-left)/2;
            if(nums[mid]==target){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        return left-1;
    }
    public int[] searchRange(int[] nums, int target) {
        int left = 0;
        int right = nums.length-1;
        boolean flag = false;
        int index = 0;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]==target){
                index = mid;
                flag = true;
                break;
            }else if(nums[mid]>target){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        if(!flag){
            return new int[]{-1,-1};
        }
        int[] ans = new int[2];
        ans[0] = floor(nums,0,index,target);
        ans[1] = ceil(nums,index,nums.length-1,target);
        return ans;
    }

    public static void main(String[] args) throws IOException {
        Main main = new Main();
        int[] nums = new int[]{5,7,7,8,8,10};
        int[] ans = main.searchRange(nums,8);
        System.out.println(1);
    }
}