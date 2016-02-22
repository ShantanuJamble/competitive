import java.io.File;
import java.lang.reflect.Array;
import java.util.*;

/**
 * Created by user on 07/08/2015.
 */
public class SubSum {
    static int arr[] = new int[10000];
    static int tmp[] = new int[10000];
    static int index = 0;
    //static File file = new File("D:\\javaprg\\IntelliJ\\src\\com\\company\\in.txt");
    static int res;
    static ArrayList<String> list=new ArrayList<String>();
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        try {
            while (true) {
                int t = sc.nextInt();
                //System.out.print(""+t);
                arr[index] = t;
                index++;
            }
        } catch (java.util.NoSuchElementException e) {
            index--;
            Arrays.sort(arr, 0, index);
            for (int i = 0; i < index / 2; i++) {
                int temp = arr[i];
                arr[i] = arr[index - 1 - i];
                arr[index - i - 1] = temp;
            }
            res = arr[index];
            foo(0,0);
            return;
        }

    }
    static void foo(int i,int sum){
        if(sum>res || i>index)
            return;
        if(sum==res){
            String s="[";
            for(int j=0;j<=i;j++)
                if(tmp[j]==1)
                    s+=arr[j]+", ";
            s=s.substring(0,s.length()-2);
            s+="]";
            if(list.contains(s)==false){
                list.add(s);
                System.out.println(s);
            }

        }
        tmp[i]=1;
        foo(i+1,sum+arr[i]);
        tmp[i]=0;
        foo(i+1,sum);

    }
}


