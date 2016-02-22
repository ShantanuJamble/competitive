import java.io.*;
import java.util.*;

class Deadpool{
	public static void main(String[] args) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		long k,m;
		String s[]=br.readLine().split(" ");
		k=Long.parseLong(s[0]);
		m=Long.parseLong(s[1]);
		int arr[]=new int[(int)m];
		int len=0,g,i;
		while(k-->0)
		{
			s=br.readLine().split(" ");
			len=s.length;
			for(i=0;i<len;i++)
			{
				g=Integer.parseInt(s[i]);
				arr[g-1]=1;
			}
		}
		for(i=0;i<m;i++)
		{
			if(arr[i]!=0)
				break;	
		}
		if(i<m)
			System.out.println("NO");
		else
			System.out.println("YES");
	}
}