import java.util.*;
public class Main {

    public void dfs(int[] nums,List<List<Integer>> result,int left,int right){
        if(left==right){
            List<Integer> list = new ArrayList<>(nums.length);
            for (int num : nums) {
                list.add(num);
            }
            result.add(list);
            return;
        }
        for(int i=left;i<right;i++){
            int temp=nums[left];
            nums[left]=nums[i];
            nums[i]=temp;
            dfs(nums,result,left+1,right);
            temp=nums[left];
            nums[left]=nums[i];
            nums[i]=temp;
        }
    }

    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        dfs(nums,ans,0,nums.length);
        return ans;
    }

    public static void main(String[] args) {
        Main main = new Main();
    }
}