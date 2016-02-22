#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
	long long *arr=NULL,t,n,s,max,tmp;
	int r,ls;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		arr=(long long *)malloc(sizeof(long long)*n);
		for(int i=0;i<n;i++)
			arr[i]=0;
		ls=0;
		max=0;
		tmp=0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld %d",&s,&r);
			if(arr[s-1]!=1)
			{
				if((r==1&&ls==1)||(r==1&&tmp==0))
				{
					tmp++;
					ls=1;
					arr[s-1]=1;
				//	cout<<arr[s-1]<<endl;
				}
				else 
				{
					max=tmp;
					tmp=0;
					ls=0;
				}
			}
			
		}
		//max=(max>tmp)?max:tmp;		
		printf("%lld %lld",max,tmp);
	}
}
