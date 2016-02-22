#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	long long n,*arr=NULL;
	long long sum=0;
	cin>>n;
	arr=(long long*)malloc(sizeof(long long)*n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>sum;
	long long tmp=0;
	int flg=0;
	for(int i=0;i<n&&flg==0;i++)
	{
		
		for(int j=0;j<n&&flg==0;j++){
			
			for(int k=0;k<n;k++)
			{
				tmp=arr[i];
				if(i!=j)
				tmp+=arr[j];
				if(k!=i&&k!=j)
				{
					tmp+=arr[k];
					if(tmp==sum)
					{
						flg=1;
						break;
					}
				}
			}
		}
	}
	if(flg)
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
}
