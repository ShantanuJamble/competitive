#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	freopen("in.txt","r",stdin);
	long long n,t;
	char ch[100000],tmp;
	cin>>n>>t;
	while(n--)
	{
		
		t=1;
		gets(ch);
		//puts(ch);
		int i=0;
		while(ch[i]!='\0')
		{
			
			if(ch[i]=='l')
			{
				if(t%2==0)
					t=t*2-1;
				else
					t=t*2;
			}
			else
			{
				if(t%2==0)
					t=t*2+1;
				else
					t=t*2+2;
			}
			i++;
		}
		cout<<t%1000000007<<endl;;
	}
}
