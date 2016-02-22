#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,j;
	freopen("check.cpp","r",stdin);
	//freopen("ans.txt","w",stdout);
	char ch;
	while(1)
	{
		cin>>ch;
		
		if(ch=='}')
			break;
		
		if(ch=='/')
		{
			cin>>ch;
			if(ch=='/')
			{
				while(1)
				{
					cin>>ch;
					if(ch==13)
						break;
					if(ch=='}')
						return 0;
					cout<<ch;
				}
			}
			if(ch=='*')
			{
				while(1)
				{
					cin>>ch;
					if(ch=='}')
						break;
					if(ch=='*')
					{
						char t;
						cin>>t;
						if(t=='/')
							break;
					}
					cout<<ch;
				}
			}
		}
		cout<<endl;
	}
	return 0;
	
}
