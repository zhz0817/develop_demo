// import java.util.*;

// // 1:无需package
// // 2: 类名必须Main, 不可修改
// public class Main {
//     public String addStrings(String num1, String num2) {
//         // int i = num1.length() - 1, j = num2.length() - 1, add = 0;
//         // StringBuffer ans = new StringBuffer();
//         // while (i >= 0 || j >= 0 || add != 0) {
//         //     int x = i >= 0 ? num1.charAt(i) - '0' : 0;
//         //     int y = j >= 0 ? num2.charAt(j) - '0' : 0;
//         //     int result = x + y + add;
//         //     ans.append(result % 10);
//         //     add = result / 10;
//         //     i--;
//         //     j--;
//         // }
//         // // 计算完以后的答案需要翻转过来
//         // ans.reverse();
//         // return ans.toString();
//     }

//     public static void main(String[] args) {
//         Main main = new Main();
//     }
// }

import java.math.BigInteger;
import java.util.*;
public class Main {

    public String addStrings(String num1, String num2) {
        BigInteger bigInteger1 = new BigInteger(num1);
        BigInteger bigInteger2 = new BigInteger(num2);
        bigInteger1 = bigInteger1.add(bigInteger2);
        return bigInteger1.toString();
    }

    public static void main(String[] args) {
        Main main = new Main();
    }
}