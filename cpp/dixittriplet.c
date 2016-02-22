#include <stdio.h>

long long GCD(long long a,long long b)
{
if(b==0)
return a;
return GCD(b,a%b);
}
int main()
{
	long long k,a,b,c,gcd,n,m,cnt,i;
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		scanf("%lld %lld",&n,&m);
		cnt=0;
    for(i=0;i<n;i++)
    {
    	scanf("%lld",&a);
    	if(a==m)
    		cnt++;
    }
    b=cnt*(cnt-1)*(cnt-2)/6;
    c=n*(n-1)*(n-2)/6;
    gcd=GCD(b,c);
    if(c!=1)
    	printf("%lld/%lld",b/gcd,c/gcd);
    else
    	printf("%lld",b);
	}
   return 0;
}
