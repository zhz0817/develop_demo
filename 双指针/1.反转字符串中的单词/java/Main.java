import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
// 1:无需package
// 2: 类名必须Main, 不可修改

public class Main {

    public String reverseWords(String s) {
        StringBuffer sb = new StringBuffer();
        int left = s.length() - 1, right = s.length() - 1;
        while (left >= 0) {
            char ch = s.charAt(left);
            if (ch == ' ') {
                if (left != right) {
                    sb.append(s.substring(left + 1, right + 1));
                    sb.append(" ");
                    right = left;
                }
                right--;
            }
            left--;
        }
        if (right >= 0) {
            sb.append(s.substring(left + 1, right + 1));
        } else {
            sb.deleteCharAt(sb.length() - 1);
        }
        return sb.toString();
    }

    public static void main(String[] args) throws IOException {
        Main main = new Main();
    }
}