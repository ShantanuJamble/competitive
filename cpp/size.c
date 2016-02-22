#include<stdio.h>
#include<stdlib.h>
int size(float *p)
{
	float *tmp=p;
	tmp++;
	int a=(int)p;
	int b=(int)tmp;
	return b-a;
}
int main()
{
	float i=2;
	printf("%d",size(&i));
}
