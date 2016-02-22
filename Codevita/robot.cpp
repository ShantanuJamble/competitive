#include<iostream>
#include<stdio.h>
using namespace std;
long long n,t,f,b,fd,bd,tot,curr,diff;
long long moveFront(long long curr){
	if(curr+f>=fd){
		diff=fd-curr;
		tot+=diff*t;
		cout<<tot<<" F"<<endl;
		return -9999999;
	}
	else
	{
		
		curr+=f;
		tot+=f*t;
//		cout<<tot<<endl;
		return curr;
	}
}
long long moveBack(long long curr){
	if(curr+b<=bd){
		diff=(bd-curr);
		diff=(diff<0)?diff*-1:diff;
		tot+=diff*t;
		cout<<tot<<" B"<<endl;
		return -9999999;
	}
	else
	{
		curr+=b;
		tot+=(b*t)*-1;
	//	cout<<tot<<endl;
		return curr;
	}
}
int main()
{
	scanf("%lld",&n);
	while(n--){
		cin>>f>>b>>t>>fd>>bd;
		b*=-1;
		bd*=-1;
		tot=0;
//		cout<<f<<" "<<b<<" "<<t<<" "<<fd<<" "<<bd<<endl;
		if(f+b==0&&f<fd)
			cout<<"No Ditch"<<endl;
		else
		{
			curr=0;
			while(1)
			{
				curr=moveFront(curr);
				if(curr==-9999999)
					break;
				curr=moveBack(curr);
				if(curr==-9999999)
					break;
			}
		}
	}
	return 0;
}
