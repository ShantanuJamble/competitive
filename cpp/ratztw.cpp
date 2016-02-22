#include <stdio.h>

long long int fgcd(long long int a, long long int b){
    if(b==0)
        return a;
    else
        return fgcd(b,a%b);
}
int main()
{
    int t;
    long long int k,n,i,m,count,combination;
    scanf("%d", &t);
    while(t--)
    {
        count=0;
        scanf("%lld %lld", &n, &k);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&m);
            if(m==k)
            {
                count++;
            }
        }
        if(count<3)
        {
            printf("0\n");
        }
        else
        {
            if(count==n)
            {
                printf("1\n");
            }
           
            else
            {
                count = (count*(count-1)*(count-2))/6;
                combination = (n*(n-1)*(n-2))/6;
                long long int gcd = fgcd(count,combination);
                printf("%lld/%lld\n",count/gcd,combination/gcd);
            }           
        }
    }
    return 0;
}
