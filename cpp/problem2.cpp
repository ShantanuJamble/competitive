#include<iostream>
#include<stdio.h>
using namespace std;
int arr[101][101];

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int i,j;
	int t=k; 
	while(k--)
	{
		cin>>i>>j;
		arr[i][j]=999;
	}
	k=0;
	while(k<=t)
	{
		printf("%d ",getPaths(1,1,k))		
	}
	
}
