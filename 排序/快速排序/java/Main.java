import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
// 1:无需package
// 2: 类名必须Main, 不可修改
//https://blog.csdn.net/zcxyywd/article/details/131024516
public class Main {

    public static void quickSort(int[] arr, int startIndex, int endIndex){
        //递归结束条件为startIndex大于或等于endIndex
        if(startIndex>=endIndex){
            return;
        }

        //得到基准元素位置
        int pIndex=partition(arr,startIndex,endIndex);

        //根据基准元素分两部分进行递归排序
        quickSort(arr,startIndex,pIndex-1);
        quickSort(arr,pIndex+1,endIndex);
    }
    /*
     * 分治法（双边循环法）
     * arr  待排序数组
     * startIndex  起始下标
     * endIndex  结束下标
     * */
    public static int partition(int arr[],int startIndex,int endIndex)
    {
        int p=arr[startIndex];//基准元素(可取随机位置)
        int l=startIndex;//左指针
        int r=endIndex;//右指针

        while(l!=r){
            //控制右指针向左移动，找到小于基准元素的那个数
            while((l<r)&&(arr[r]>p)){
                r--;
            }
            //控制左指针向右移动，找到大于基准元素的那个数
            while((l<r)&&(arr[l]<=p)){
                l++;
            }
            //交换l指针和r指针所指的元素
            if(l<r){
                int tmp=arr[l];
                arr[l]=arr[r];
                arr[r]=tmp;
            }
        }

        //交换基准元素和重合点的元素
        arr[startIndex]=arr[l];
        arr[l]=p;
        return l;
    }


    public static void main(String[] args) {
        int[] nums = new int[]{10,9,8,7,6,5,4,3,2,1};
        int length = nums.length;
        quickSort(nums,0,nums.length-1);
        for(int n:nums){
            System.out.println(n);
        }
    }
}