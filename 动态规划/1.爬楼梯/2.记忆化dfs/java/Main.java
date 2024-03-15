import java.util.*;
public class Main {

    Map<Integer,Integer> map1 = new HashMap<>();
    public int dfs(int index){
        if(index<=1){
            return 1;
        }
        if(map1.containsKey(index)){
            return map1.get(index);
        }
        int ans = dfs(index-1)+dfs(index-2);
        map1.put(index,ans);
        return ans;
    }
    public int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        return dfs(n);
    }
    public static void main(String[] args) {
        Main main = new Main();
    }
}