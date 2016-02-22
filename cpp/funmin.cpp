#include<iostream>
#include<stdio.h>
using namespace std;
int funmin(int a,int b,int c,int d)
{
	int arr[]={a,b,c,d};
	int min=a;
	for(int i=1;i<4;i++)
		min=(min<arr[i])?min:arr[i];
	return min;
}
int main(){
	int t;
	cin>>t;
	char ch;
	int a,b,c,d;
	//cin>>ch;
	while(t--){
		a=b=c=d=0;
		while(1){
			cin>>ch;
			printf("%d",ch);
			if(ch==-1)
			 	break;
			else if(ch=='r')
				a++;
			else if(ch=='u')
				b++;
			else if(ch=='b')
				c++;
			else if(ch=='y')
				d++;
			
		}
		cout<<funmin(a,b,c,d)<<endl;
	}
}
