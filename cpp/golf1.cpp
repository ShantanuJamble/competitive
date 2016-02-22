#include <iostream>
#include<stdio.h>
using namespace std;

int main()

{
  	freopen("input.txt","r",stdin);
  	
  	int n,m;
  	cin>>n>>m;
  	for(int i=0;i<n;i++)
  		for(int j=0;j<m;j++)
  		{
  			int a;
  			cin>>a;
  			cout<<a<<" ";
  		}
  		
  	return 0;
}

