import java.rmi.server.UID;
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

    class UnionFind{
        int[] parent;
        public UnionFind(int n){
            this.parent = new int[n];
            for (int i = 0; i < n; i++) {
                this.parent[i] = i;
            }
        }
        public void union(int index1, int index2) {
            this.parent[find(index1)] = find(index2);
        }

        public int find(int index) {
            if (this.parent[index] != index) {
                this.parent[index] = find(this.parent[index]);
            }
            return this.parent[index];
        }
    }
    public int findCircleNum(int[][] isConnected) {
        int cities = isConnected.length;
        UnionFind uf = new UnionFind(cities);
        for (int i = 0; i < cities; i++) {
            for (int j = i + 1; j < cities; j++) {
                if (isConnected[i][j] == 1) {
                    uf.union(i, j);
                }
            }
        }
        int provinces = 0;
        for (int i = 0; i < cities; i++) {
            if (uf.parent[i] == i) {
                provinces++;
            }
        }
        return provinces;
    }

    public static void main(String[] args) {
//        Main main = new Main();
    }
}
