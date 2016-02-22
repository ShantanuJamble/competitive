#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
long long *Arr;
long long *size;
//modified initialize function:
void initialize( long long Arr[ ], long long N)
{
    for(long long i = 0;i<N;i++)
    {
		Arr[ i ] = i ;
		size[ i ] = 1;//initially size one as each set has only one element :P
		
	}	
}
//finding root of an element.
long long root(long long i)
{
    while(Arr[ i ] != i)//chase parent of current element until it reaches root.
    {
     i = Arr[ i ];
    }
    return i;
}

/*modified union function where we connect the elements by changing the root of one of the element */

void fun_union(long long Arr[] ,long long A ,long long B)
{
    long long root_A = root(A);       
    long long root_B = root(B);  
    Arr[ root_A ] = root_B ;       //setting parent of root(A) as root(B).
}

/*void weighted_union(long long Arr[ ],long long size[ ],long long A,int B)
{
    long long root_A = root(A);
    long long root_B = root(B);
    if(size[root_A] < size[root_B ])
    {
	Arr[ root_A ] = Arr[root_B];
	size[root_B] += size[root_A];
	}
    else
    {
		Arr[ root_B ] = Arr[root_A];
		size[root_A] += size[root_B];
	}
}*/

bool find(long long A,long long B)
{
    if( root(A)==root(B) )       //if A and B have same root,means they are connected.
    return true;
    else
    return false;
}

int main()
{
	
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	long long n;
	cin>>n;
	Arr=(long long*)malloc(sizeof(long long)*(n+1));
	size=(long long*)malloc(sizeof(long long)*(n+1));
	for(int i=0;i<=n;i++)
	{
		Arr[i]=i;
		size[i]=1;
	}
	while(1)
	{
		char ch[5];
		long long a,b;
		cin>>ch>>a>>b;
		if(strcmp(ch,"-1")==0)
			break;
		else
		{
			if(strcmp(ch,"c")==0)
				fun_union(Arr,a,b);
			else
				if(find(a,b)==true)
					cout<<"Yes"<<endl;
				else
					cout<<"No"<<endl;
		}
	}
}
