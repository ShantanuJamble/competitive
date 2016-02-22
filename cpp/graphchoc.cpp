#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	long long t,*a;
	long long i,j;
	cin>>t;
	a=(long long*)malloc(sizeof(long long)*t);
	for(int k=0;k<t;k++)
		a[k]=0;
	for(int k=0;k<t-1;k++)
	{
		cin>>i>>j;
		a[j-1]=1;	
	}
	j=0;
	for(i=0;i<t;i++)
	{
		j+=a[i];
	}
	
	if(t-j>2)
	{
		j=t-j;
		cout<<j-2<<endl;
	}
	else if(t-j==2)
	{
		cout<<0<<endl;
	}
	else if(t-j==1)
	{
		cout<<1<<endl;
	}
	
}

