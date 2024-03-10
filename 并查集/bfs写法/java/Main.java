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

    public int findCircleNum(int[][] isConnected) {
        int length = isConnected.length;
        Queue<Integer> queue = new ArrayDeque<>();
        boolean[] isVisited = new boolean[length];
        int res=0;
        for(int i=0;i<length;i++){
            if(!isVisited[i]){
                res++;
                queue.offer(i);
                isVisited[i]=true;
                while(!queue.isEmpty()){
                    int pos = queue.poll();
                    for(int j=0;j<length;j++){
                        if(isConnected[pos][j]==1&&!isVisited[j]){//这里是不是可以用Map优化一下?
                            isVisited[j]=true;
                            queue.offer(j);
                        }
                    }
                }
            }
        }
        return res;
    }

    public static void main(String[] args) {
//        Main main = new Main();
    }
}
