

import java.io.BufferedReader;
import java.util.Scanner;

/**
 * Created by user on 07/08/2015.
 */
public class EMI {
    public static void main(String [] args)throws  Exception{
        Scanner sc=new Scanner(System.in);
        Double m,t,r;
        m=sc.nextDouble();
        t=sc.nextDouble();
        r=sc.nextDouble();
        if(r>0) {
            r /= 12.000000000000;
            r /= 100.00000000000;
            double r1 = (1.0 + r);
            r1 = Math.pow(r1, 3.0);
            double ans = (m * (r1 - 1)) / (r1 * r);
            double a = (double) Math.ceil(ans);
            double b = (double) Math.floor(ans);
            if (a - ans > ans - b)
                ans = b;
            else
                ans = a;
            System.out.println("" + (int) ans);
        }
        else
        {
            double ans=m*t;
            System.out.println("" + (int)ans );
        }

    }
}
