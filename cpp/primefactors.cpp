# include <stdio.h>
# include <math.h>
#include<set>
#include<iostream>
using namespace std;

int primeFactors(long long n,set<long long>myset)
{
    while (n%2 == 0)
    {
        myset.insert(2);
        n = n/2;
    }
 
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            myset.insert(i);
            n = n/i;
        }
    }
 
    if (n > 2)
        myset.insert(n);
}

int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
    long long t
    //primeFactors(n);
    
	  //  for (set<long long>::iterator it=myset.begin(); it!=myset.end(); ++it)
    	//	std::cout << ' ' << *it;
    set<long long>myset;
    while(t--)
    {
    	long long c=0;
    	long long n;
    	cin>>t;
    	while(n)
    	{
    		c+=n%10;
    		n/=10;
    	}
    	
    }
    return 0;
}
