#include<stdio.h>
#include<stdlib.h>
int arr[100],arr1[100];
int main()
{

	int a,b,c,k,i=0;
//	clrscr();
	printf("\nEnter line number=");
	scanf("%d",&c);
	for(a=0;a<c;a++){

		for(k=a;k<c;k++)
			printf(" ");
		for(b=0,i=1;b<=a;b++){
			if(b==a||b==0)
			{
				arr1[b]=1;
				arr[b]=1;
			}
			else{
				arr1[b]=arr[b]+arr[b-1];

			}

		}
		for(k=0;arr1[k]!=0;k++)
		{	printf("%d ",arr1[k]);
			arr[k]=arr1[k];
		}
		printf("\n");
	}

	printf("\n\n");
	return 0;
}
