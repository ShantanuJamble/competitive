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
	long long n;
	scanf("%lld",&n);
	long long *arr=(long long *)malloc(sizeof(long long)*n);
	for(int i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	sort(arr,arr+n,myfun);
	long long res=arr[0];
	res=n+(res-(n-1))+1;
	printf("%lld",res);
	
}
