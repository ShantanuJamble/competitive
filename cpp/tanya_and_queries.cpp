#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cmath>
using namespace std;
int *tree,*A,*sq_tree;
void updateRange(int node, int start, int end, int l, int r, int val,int code)
{
    // out of range
    if (start > end or start > r or end < l)
        return;

    // Current node is a leaf node
    if (start == end)
    {
        // Add the difference to current node
        tree[node]=(code!=3)?tree[node]+val:val;
        //sq_tree[node]=(code!=3)?(sqrt(sq_tree[node])+val)*(sqrt(sq_tree[node])+val):val*val;
        return;
    }

    // If not a leaf node, recur for children.
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val,code);
    updateRange(node*2 + 1, mid + 1, end, l, r, val,code);

    // Use the result of children calls to update this node
    tree[node] = tree[node*2] + tree[node*2+1];
    //sq_tree[node]= sq_tree[node*2] + sq_tree[node*2+1];
}

void sq_updateRange(int node, int start, int end, int l, int r, int val,int code)
{
    // out of range
    if (start > end or start > r or end < l)
        return;

    // Current node is a leaf node
    if (start == end)
    {
		sq_tree[node]=(code!=3)?(sqrt(sq_tree[node])+val)*(sqrt(sq_tree[node])+val):val*val;
        return;
    }

    int mid = (start + end) / 2;
    sq_updateRange(node*2, start, mid, l, r, val,code);
    sq_updateRange(node*2 + 1, mid + 1, end, l, r, val,code);

    
    sq_tree[node]= sq_tree[node*2] + sq_tree[node*2+1];
}
void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}
int query(int *ans,int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return 0;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return ans[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(ans,2*node, start, mid, l, r);
    int p2 = query(ans,2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}
void build_square_tree(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        sq_tree[node] = A[start]*A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build_square_tree(2*node, start, mid);
        // Recurse on the right child
        build_square_tree(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        sq_tree[node] = sq_tree[2*node] + sq_tree[2*node+1];
    }
}
int main()
{
	long long n,q;
	cin>>n>>q;
	tree=(int *)malloc(sizeof(int)*(2*n));
	sq_tree=(int *)malloc(sizeof(int)*(2*n));
	A=(int *)malloc(sizeof(int)*(n));
	for(int i=0;i<n;i++)
		cin>>A[i];
	build(1,0,n-1);
	build_square_tree(1,0,n-1);
	while(q--)
	{
		int code,i,j,x;
		cin>>code;
		switch(code)
		{
			case 1:
			case 2:
			case 3:
					cin>>i>>j>>x;
					if(code==2)
						x*=-1;
					updateRange(1,0,n-1,i-1,j-1,x,code);
					sq_updateRange(1,0,n-1,i-1,j-1,x,code);
					//build(1,0,n-1);
					//build_square_tree(1,0,n-1);
					break;
			case 4:
					cin>>i>>j;
					cout<<query(sq_tree,1,0,n-1,i-1,j-1)<<endl;
					break;
			case 5:
					cin>>i>>j;
					cout<<query(tree,1,0,n-1,i-1,j-1)<<endl;
					break;
		}
	}
	
}
