#include<iostream>
#include<stdio.h>
#include <string.h>
using namespace std;
void swap(char *a,char *b){
	char c=*b;
	*b=*a;
	*a=c;
}

void permute(char *a,int l,int r)
{
	if(l==r)
		cout<<a<<endl;
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(a[l],a[i]);
			permute(a,l+1,r);
			swap(a[l],a[i]);
		}
	}
}
int main()
{
	char ch[100];
	gets(ch);
	int n=strlen(ch);
	permute(ch,0,2);
	return 0;
}
