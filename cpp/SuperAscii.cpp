#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char ch;
	bool flg=true;
	int t,i;
	scanf("%d",&t);
	scanf("%c",&ch);
	while(t--){
		int arr[26]={0};
		flg=true;
		while(1){
			scanf("%c",&ch);
			if(ch=='\n')
				break;
			arr[ch-97]++;
		}
		
		for(i=0;i<26;i++)
		{
			if(arr[i]!=i+1&&arr[i]!=0)
				flg=false;
			if(!flg)
				break;
		}
		if(flg)
			printf("%s","Yes");
		else
			printf("%s","No");
	}
}
