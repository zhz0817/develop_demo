import java.util.*;
//https://leetcode.cn/problems/number-of-provinces/description/
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

    public void dfs(int[][] isConnected,boolean[] isVisited,int i,int length){
        isVisited[i]=true;
        for(int j=0;j<length;j++){
            if(isConnected[i][j]==1&&!isVisited[j]){
                dfs(isConnected,isVisited,j,length);
            }
        }
    }
    public int findCircleNum(int[][] isConnected) {
        int length = isConnected.length;
        boolean[] isVisited = new boolean[length];
        int res=0;
        for(int i=0;i<length;i++){
            if(!isVisited[i]){
                res++;
                dfs(isConnected,isVisited,i,length);
            }
        }
        return res;
    }

    public static void main(String[] args) {
//        Main main = new Main();
    }
}
