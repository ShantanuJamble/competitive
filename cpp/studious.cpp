#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out1.txt","w",stdout);
	int n,t,ans,i,min,tmp,tmp1;
	int arr[]={5,-1,1,-1,2,-1,3,-1,4,-1};
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2==1||((arr[n%10]*12>n)&&n%10!=0))
		{
			cout<<"-1"<<endl;
			continue;
		}
		i=n%10;
		i=arr[i];
		min=0;
		if(n%12==0)
			min=n/12;
		else if(n%10==0)
			min=n/10;
		while(1){
			tmp=12*i;
			if(tmp>n)
				break;
			tmp=(n-tmp)/10;
			tmp1=tmp+i;
			if(min==0)
				min=tmp1;
			else if(tmp1<min&&min!=0)
				min=tmp1;
			i+=5;
		}
		cout<<min<<endl;
		
	}
}
