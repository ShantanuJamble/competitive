#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		char s[1000];
		cin>>s;
		int len=strlen(s);
		int i,j;
		for(i=0,j=len-1;i<j;i++,j--)
		{
			if(abs(s[i]-s[i+1])!=abs(s[j]-s[j-1]))
				break;
		}
		if(i<j)
			cout<<"Not Funny"<<endl;
		else
			cout<<"Funny"<<endl;
	}
	return 0;
}
