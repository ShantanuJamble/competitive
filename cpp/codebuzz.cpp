#include<iostream>
#define INFINITY 999
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
   {

	long long  no,m ,cost[10][10] ,res[10][10];
	long long int i, j, k;

	
	cin>>no>>m;

	/* Adjacency Matrix to store Cost of the edges */
	for (i = 0; i < no; i++)
	{
		for (j = 0; j < no; j++)
		{
			printf("Edge weight %d to %d(0 if no edge):", i + 1, j + 1);
			scanf("%d", &cost[i][j]);
			if (cost[i][j] == 0)
				res[i][j] = INFINITY;
			else
				res[i][j] = cost[i][j];
		}
	}

	printf("Adjacent matrix for edge weights:\n");
	for (i = 0; i < no; i++)
	{
		for (j = 0; j < no; j++)
		{
			printf("%3d", cost[i][j]);
		}
		printf("\n");
	}

	/* Calculate shortest path from each vertex to every other vertices */

	for (i = 0; i < no; i++)
	{
		for (j = 0; j < no; j++)
		{
			for (k = 0; k < no; k++)
			{
				if (res[j][k] > res[j][i] + res[i][k])
					res[j][k] = res[j][i] + res[i][k];
			}
		}
	}

	printf("\nShortest path between vertices\n");
	for (i = 0; i < no; i++)
	 {
		for (j = 0; j < no; j++)
		 {
			if ((res[i][j] == INFINITY)||i==j)
				printf("%3d", 0);
			else
				printf("%3d", res[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
  }

