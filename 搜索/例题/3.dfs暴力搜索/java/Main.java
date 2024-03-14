import java.util.*;
public class Main {

    static boolean flag;

    static void dfs(List<int[]> list,boolean[] isVisited,int n,int count,int time){
        if(flag){
            return;
        }
        if(count==n){
            flag = true;
            return;
        }
        for(int i=0;i<n;i++){
            if(!isVisited[i]&&time<=list.get(i)[0]+list.get(i)[1]){
                isVisited[i]=true;
                int temp = Math.max(time,list.get(i)[0]);
                dfs(list,isVisited,n,count+1,temp+list.get(i)[2]);
                isVisited[i]=false;
            }
        }
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t>0){
            t--;
            flag = false;
            int n = scanner.nextInt();
            List<int[]> list = new ArrayList<>();
            for(int i=0;i<n;i++){
                int[] temp = new int[3];
                for(int j=0;j<3;j++){
                    temp[j] = scanner.nextInt();
                }
                list.add(temp);
            }
            boolean[] isVisited = new boolean[n];
            Arrays.fill(isVisited,false);
            dfs(list,isVisited,n,0,0);
            if(flag){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}