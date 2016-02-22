/**
 * Created by Tushar on 8/7/2015.
 */
import java.io.*;
public class MilkMan {
    public static void main(String[] args)throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        int []arr=new int [1001];
        arr[0]=0;
        for(int i=1;i<=1000;i++)
        {
            int a=i;
            //int []tmp=new int[4];
            int min=0;
            int tmp=min=1+arr[a-1];
            if(a>=5) {
                tmp = 1 + arr[a - 5];
                if(tmp<min)
                    min=tmp;
            }
            if(a>=7) {
                tmp = 1 + arr[a - 7];
                if(tmp<min)
                    min=tmp;
            }
            if(a>=10) {
                tmp = 1 + arr[a - 10];
                if(tmp<min)
                    min=tmp;
            }

            arr[i]=min;
        }
        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(br.readLine());
            //int tmp = n;
            /*int cnt = 0;
            if (tmp >= 10) {
                cnt += tmp / 10;
                tmp %= 10;
               // System.out.print(" "+cnt+"in 10");
            }
            if (tmp  >=7) {
                cnt += tmp / 7;
                tmp %= 7;
                //System.out.print(" "+cnt+"in 7");
            }
            if (tmp >= 5) {
                cnt += tmp / 5;
                tmp %= 5;
                //System.out.print(" "+cnt+"in 5");
            }
            if (tmp >= 1) {
                cnt += tmp / 1;
                tmp %= 1;
                //System.out.print(" "+cnt+"in 1");
            }*/
            System.out.println(arr[n]);
        }
    }
}
