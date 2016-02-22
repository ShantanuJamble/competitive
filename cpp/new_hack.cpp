#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

long long gcd(long long a,long long b)
{
	if(b==0)
		return a;
	else
		return (b,a%b);
}

int main()
{
	long long n,m,t,tmp,cnt;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		cnt=tmp=0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&tmp);
			if(tmp==m)
				cnt++;
		}
		if(cnt/3!=0)
		{
		
			cnt=(cnt*(cnt-1)*(cnt-2))/6;
			cout<<cnt<<endl;
			n=(n*(n-1)*(n-2))/6;
			cout<<n<<endl;
			if(cnt/n!=1)
			{
				tmp=gcd(cnt,n);
			
				printf("%lld/%lld\n",cnt/tmp,n/tmp);
			}
			else
			{
				printf("1\n");
			}
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}
