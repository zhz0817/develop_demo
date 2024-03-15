class Solution {
    int ans = 0;
    public void dfs(int index,int n){
        if(index>n){
            return;
        }
        if(index==n){
            ans++;
            return;
        }
        for(int i=1;i<=2;i++){
            dfs(index+i,n);
        }
    }
    public int climbStairs(int n) {
        if(n<=2){
            return n;
        }
        dfs(0,n);    
        return this.ans;
    }
}