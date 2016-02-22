#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	freopen("out.txt","r",stdin);
//	int arr[101];
	for(int i=1;i<100;i++)
		cin>>arr[i];
	freopen("out1.txt","r",stdin);
	int arr1[101];
	for(int i=1;i<100;i++)
		cin>>arr1[i];
		
	for(int i=1;i<100;i++)
	{
		if(arr[i]!=arr1[i])
			cout<<i<<endl;
	}
}
