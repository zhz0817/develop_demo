import java.util.*;
public class Main {
    
    public int[] getNumber(int n){
        int[] ans = new int[10];
        while (n!=0){
            int temp = n%10;
            ans[temp]++;
            n/=10;
        }
        return ans;
    }
    public boolean reorderedPowerOf2(int n) {
        int[] bits1 = getNumber(n);
        int length1 = String.valueOf(n).length();
        for(int i=1;;i*=2){
            int length2 = String.valueOf(i).length();
            if(length2>length1){
                break;
            }else if(length2<length1){
                continue;
            }else{
                int[] bits2 = getNumber(i);
                boolean flag = true;
                for(int j=0;j<10;j++){
                    if(bits1[j]!=bits2[j]){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    return true;
                }
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Main main = new Main();
        main.reorderedPowerOf2(46);
    }
}