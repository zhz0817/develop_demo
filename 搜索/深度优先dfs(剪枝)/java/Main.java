import java.util.*;

public class Main {

    public class TreeNode {
      int val;
      TreeNode left;
      TreeNode right;
      TreeNode() {}
      TreeNode(int val) { this.val = val; }
      TreeNode(int val, TreeNode left, TreeNode right) {
         this.val = val;
          this.left = left;
          this.right = right;
      }
    }

    public void getNums(String s){
        StringBuilder sb = new StringBuilder();
        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            if(ch=='['){
                sb.append('{');
            }else if(ch==']'){
                sb.append('}');
            }else{
                sb.append(ch);
            }
        }
        System.out.println(sb.toString());
    }

    int ans = Integer.MAX_VALUE;

    public void dfs(TreeNode root,int depth){
        if(root.left==null&&root.right==null){
            ans = Math.min(ans,depth);
            return;
        }
        if(depth>=ans){
            return;
        }
        if(root.left!=null)
            dfs(root.left,depth+1);
        if(root.right!=null)
            dfs(root.right,depth+1);
    }
    public int minDepth(TreeNode root) {
        if(root==null){
            return 0;
        }
        dfs(root,1);
        return this.ans;
    }

    public static void main(String[] args) {
//        Main main = new Main();
    }
}
