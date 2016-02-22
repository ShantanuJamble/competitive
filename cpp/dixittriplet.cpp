#include <stdio.h>

long long GCD(long long a,long long b)
{
	if(b==0)
		return b;
	return GCD(b,a%b);
}
int main()
{ 
	long long k,b,c,gcd,n,m,cnt;
	long t;
	scanf("%ld",&t);
	while(t-->0)
	{
		scanf("%lld %lld",&n,&m);
		cnt=0;
    	
    	for(int i=0;i<n;i++)
    	{
    		scanf("%lld",&b);
    		if(b==m)
    			cnt++;
    	}
    	b=cnt*(cnt-1)*(cnt-2);
    	c=n*(n-1)*(n-2);
    	gcd=GCD(b,c);
    	printf("%lld/%lld",b/gcd,c/gcd);
	}
    return 0;
}
