#include<stdio.h>
#include<conio.h>

/*

Develop a program to find the transpose matrix of a given 2D array.

*/

void main()
{
	int i, j, row, col, a[100][100], t[100][100];
	clrscr();

	printf("Enter the number of row:- ");
	scanf("%d",&row);

	printf("Enter the number of column:- ");
	scanf("%d",&col);

	printf("Enter elements:-\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}


	printf("Matrix before transpose.\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			t[j][i]  = a[i][j];

		}
	}

	printf("Matrix after transpose.\n");
	for(i=0; i<col; i++)
	{
		for(j=0; j<row; j++)
		{
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}

	getch();

}