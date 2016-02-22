#include<iostream>
#include<stdio.h>
using namespace std;
int clockwise(char curr,char c)
{
	int steps=0;
	while(curr!=c)
	{
		steps++;
		
		if((curr+1)==123)
			curr=97;
		else
			curr+=1;
		
	}
	
	return steps;
}
int anticlockwise(char curr,char c)
{
	int steps=0;
	while(curr!=c)
	{
		steps++;
		if(curr-1==96)
			curr=122;
		else
			curr--;
	}
	return steps;
}
int main()
{
	char ch[100];
	int t;
	cin>>t;
	while(t--)
	{
		int arr[100];
		cin>>ch;
		char curr='a';
		int cl,acl;
		for(int i=0;ch[i]!='\0';i++)
		{
			char c=ch[i];
			
			if(curr!=c)
			{
				cl=clockwise(curr,c);
				acl=anticlockwise(curr,c);
				arr[i]=(cl!=acl)?(acl>cl)?cl:acl*-1:cl;
			}
			else
				arr[i]=0;
			curr=c;
		}
		for(int i=0;ch[i]!='\0';i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
