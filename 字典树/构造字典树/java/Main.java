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

    class Trie {

        /** Initialize your data structure here. */
        public Trie[] child;
        public boolean isEnd;

        public Trie(){
            this.child = new Trie[26];
            this.isEnd = false;
        }
        public void insert(String word) {

            Trie trie = this;
            for(int i=0;i<word.length();i++){
                char ch = word.charAt(i);
                int index = ch - 'a';
                if(trie.child[index]==null){
                    trie.child[index] = new Trie();
                }
                trie = trie.child[index];
            }
            trie.isEnd=true;
        }

        public Trie searchTrie(String word){
            Trie node = this;
            for(int i=0;i<word.length();i++){
                char ch = word.charAt(i);
                int index = ch - 'a';
                if(node.child[index]==null)
                    return null;
                node = node.child[index];
            }
            return node;

        }
        /** Returns if the word is in the trie. */
        public boolean search(String word) {
            Trie trie = searchTrie(word);
            return trie!=null&&trie.isEnd;
        }

        /** Returns if there is any word in the trie that starts with the given prefix. */
        public boolean startsWith(String prefix) {
            return searchTrie(prefix)!=null;
        }
    }

    /**
     * Your Trie object will be instantiated and called as such:
     * Trie obj = new Trie();
     * obj.insert(word);
     * boolean param_2 = obj.search(word);
     * boolean param_3 = obj.startsWith(prefix);
     */
    public static void main(String[] args) {
//        Main main = new Main();
    }
}
