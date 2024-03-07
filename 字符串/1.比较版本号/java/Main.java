import java.util.*;

// 1:无需package
// 2: 类名必须Main, 不可修改
public class Main {
    public int compareVersion(String version1, String version2) {
        String[] ss1 = version1.split("\\.");
        String[] ss2 = version2.split("\\.");
        int i = 0, j = 0;
        int index1 = ss1.length - 1;
        int index2 = ss2.length - 1;
        while (index1 >= 0) {
            if (Integer.parseInt(ss1[index1]) == 0) {
                index1--;
            } else {
                break;
            }
        }
        while (index2 >= 0) {
            if (Integer.parseInt(ss2[index2]) == 0) {
                index2--;
            } else {
                break;
            }
        }
        while (i <= index1 || j <= index2) {
            if (i > index1) {
                return -1;
            }
            if (j > index2) {
                return 1;
            }
            int val1 = Integer.parseInt(ss1[i]);
            int val2 = Integer.parseInt(ss2[j]);
            if (val1 < val2) {
                return -1;
            } else if (val1 > val2) {
                return 1;
            }
            i++;
            j++;
        }
        return 0;
    }

    public static void main(String[] args) {
        Main main = new Main();
        main.compareVersion("1", "0");
    }
}