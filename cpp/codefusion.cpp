#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int myfun(long long i,long long j){
	return i>j;
}
int main()
{
		long long * arr=NULL;
		long long n,t;
		cin>>t;
		while(t--)
		{
			cin>>n;
			arr=(long long *)malloc(sizeof(long long)*n);
			for(int i=0;i<n;i++)
				cin>>arr[i];
			//sort(arr,arr+n,myfun);
			long long sum=0,sum1=0;
			for(int i=0;i<n;i+=2)
				sum+=arr[i];
			
			for(int i=1;i<n-1;i+=2)
				sum1+=arr[i];
			//cout<<sum<<" "<<sum1;
			cout<<((sum1>sum)?sum1:sum)<<endl;
		}
}
