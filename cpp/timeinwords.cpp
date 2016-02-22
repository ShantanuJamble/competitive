#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	char ones[10][10]={"twenty","one","two","three","four","five","six","seven","eight","nine"};
	char eleven[10][10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	int h,m;
	cin>>h>>m;
	if(m==0)
		cout<<ones[h]<<"o' clock";
	
	
	else if(m<=30)
	{
		if(m==30)
		{
			cout<<"half past"<<ones[h]<<endl;
		}
		else
		{
			if(m==15)
			{
				cout<<"quarter past "<<ones[h]<<endl;
			}
			else if(m<10)
			{
				if(m==1)
					cout<<ones[m]<<" minute past "<<ones[h];
				else
					cout<<ones[m]<<" minutes past "<<ones[h];
			}
			else if(m>=10&&m<20)
			{
				cout<<eleven[m%10]<<" minutes past "<<ones[h];
			}
			else 
			{
				cout<<"twenty "<<ones[m%10]<<" minutes past "<<ones[h];
			}
		}
	}
	else
	{
		m=60-m;
		if(m==15)
			{
				cout<<"quarter to "<<ones[h+1]<<endl;
			}
			else if(m<10)
			{
				if(m==1)
					cout<<ones[m]<<" minute to "<<ones[h+1];
				else
				cout<<ones[m]<<" minutes to "<<ones[h+1];
			}
			else if(m>=10&&m<20)
			{
				cout<<eleven[m%10]<<" minutes to "<<ones[h+1];
			}
			else 
			{
				cout<<"twenty "<<ones[m%10]<<" minutes to "<<ones[h];
			}
		
	}
		
}
