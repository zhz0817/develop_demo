import java.util.*;

// 1:无需package
// 2: 类名必须Main, 不可修改
public class Main {

    public class Pair{
        String name;
        int height;
        public Pair(String name,int height){
            this.name = name;this.height=height;
        }
    }
    public String[] sortPeople(String[] names, int[] heights) {
        int n = names.length;
        String[] ans = new String[n];
        List<Pair> list = new ArrayList<>();
        for(int i=0;i<n;i++){
            list.add(new Pair(names[i],heights[i]));
        }
        Collections.sort(list,(a,b)-> b.height-a.height);
        for(int i=0;i<n;i++){
            ans[i] = list.get(i).name;
        }
        return ans;
    }

    public static void main(String[] args) {
        Main main = new Main();
        String[] names = new String[]{"Mary","John","Emma"};
        int[] heights = new int[]{180,165,170};
        main.sortPeople(names,heights);
    }
}