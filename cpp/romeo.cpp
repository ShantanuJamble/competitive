#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
char mat[10000][10000];
long long x,y;
int move(int i,int j,int from){
	if(i<0||i==x||j<0||j==y||mat[i][j]=='w'||mat[i][j]=='a')
		return -1;
	mat[i][j]='a';
	if(mat[i+1][j+1]=='d'||mat[i+1][j-1]=='d'||mat[i-1][j+1]=='d'||mat[i-1][j-1]=='d'||mat[i][j+1]=='d'||mat[i][j-1]=='d'||mat[i+1][j]=='d'||mat[i-1][j]=='d')
	{
			return 1;
	}
	if(from!=2)
	if(move(i+1,j-1,1)==1)
		return 1;
	else 
		if(from!=1)
		if(move(i-1,j+1,2)==1)
		return 1;
	else 
		if(from!=4)
		if(move(i+1,j+1,3)==1)
		return 1;
	else
		if(from!=3)
		 if(move(i-1,j-1,4)==1)
		return 1;
	
	else
	if(from!=8) 
	if(move(i+1,j,7)==1)
		return 1;
	else
	if(from!=7) 
	if(move(i-1,j,8)==1)
		return 1; 	
	
	else
	if(from!=6) 
	if(move(i,j+1,5)==1)
		return 1;
	else 
		if(from!=5)
		if(move(i,j-1,6)==1)
		return 1;
		
	
	else
	{
		mat[i][j]='-';
		return -1;
	}
	
}
int main()
{

		long long px,py;
		cin>>x>>y;
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				cin>>mat[i][j];
				if(mat[i][j]=='s')
				{
					px=i;
					py=j;	
				}
		}
		}
		int asfd;
		cin>>asfd;
		//cout<<px<<" "<<py<<" "<<<<endl;
		move(px,py,0);
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
				cout<<mat[i][j];
			cout<<endl;
		}
		return 0;
}
