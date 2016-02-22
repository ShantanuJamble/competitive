#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char ch[100],c;
	gets(ch);
	int arr[26]={0};
	for(int i=0;ch[i]!='\0';i++)
	{
		c=ch[i];
		if(arr[c-97]==1)
		{
			ch[i]=48;
		}
		else
		{
			if(arr[i]==0)
			{
				arr[c-97]=1;
			}
		}
	}
	cout<<endl;
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!=48)
			cout<<ch[i];
		
	}	
	return 0;
}
