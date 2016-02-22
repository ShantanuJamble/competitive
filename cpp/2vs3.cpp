#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cmath>
using namespace std;
int *A;
long long  *tree;
void update(int node, int start, int end, int idx, int n)
{
    if(start == end)
    {
       
        A[idx]= (A[idx]==0)?1:A[idx];
        tree[node] +=pow(2,(n-start+1));
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
        {
            // If idx is in the left child, recurse on the left child
            update(2*node, start, mid, idx, n);
        }
        else
        {
            // if idx is in the right child, recurse on the right child
            update(2*node+1, mid+1, end, idx, n);
        }
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}


void build(int node, int start, int end,int n)
{
    if(start == end)
    {
    	int power=n-(start+1);
        tree[node] = A[start]*pow(2,power);
    }
    else
    {
        int mid = (start + end) / 2;
        build(2*node, start, mid,n);
        build(2*node+1, mid+1, end,n);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}
int query(long long *ans,int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        return 0;
    }
    if(l <= start and end <= r)
    {
        return ans[node];
    }
    int mid = (start + end) / 2;
    int p1 = query(ans,2*node, start, mid, l, r);
    int p2 = query(ans,2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}

int main()
{
	long long n,q;
	cin>>n;
	char ch;
	tree=(long long  *)malloc(sizeof(long long)*(2*n));
	A=(int *)malloc(sizeof(int)*(n));
	for(int i=0;i<n;i++)
	{
		cin>>ch;
		A[i]=ch-48;
	}
	
	
	build(1,0,n-1,n);
	for(int i=0;i<2*n;i++)
		cout<<tree[i]<<endl;
	cin>>q;
	cout<<q;
	while(q--)
	{
		int code,i,j,x;
		cin>>code;
	
		switch(code)
		{
			case 1:
					cin>>i>>j;
					update(1,0,n-1,j-1,n);
					break;
			case 0:
					cin>>i>>j;
					cout<<query(tree,1,0,n-1,i-1,j-1)%3<<endl;
					break;
		}
	}
	
}
