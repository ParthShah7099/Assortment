#include<stdio.h>
#include<conio.h>

/*

Develop a program to print and find the sum of all elements of a given
row and column from a 2D array.

*/

void main()
{
	int i, j, row, col, nrow, ncol, a[100][100], srow = 0, scol = 0;
	clrscr();

	printf("Enter the number of rows:- ");
	scanf("%d",&row);

	printf("Enter the number of columns:- ");
	scanf("%d",&col);
	printf("=============================================================\n");

	printf("Enter elements:-\n");

	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("=============================================================\n");
	printf("Matrix:\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("=============================================================\n");
	printf("Enter row number from (0 to %d) to get the sum:- ",row-1);
	scanf("%d",&nrow);

	if(nrow < 0 || nrow >= row)
	{
		printf("Please enter number from (0 to %d).",row-1);
		getch();
		return 0;
	}

	printf("Elements of row %d:- ",nrow);

	for(j=0; j<col; j++)
	{
		printf("%d ",a[nrow][j]);
		srow += a[nrow][j];
	}
	printf("\nSum of row %d:-  %d",nrow,srow);
	printf("\n=============================================================\n");


	printf("Enter column number from (0 to %d) to get the sum:- ",col-1);
	scanf("%d",&ncol);

	if(ncol < 0 || ncol >= col)
	{
		printf("Please enter number from (0 to %d).",col-1);
		getch();
		return 0;
	}


	printf("Elements of column %d:- ",ncol);

	for(i=0; i<row; i++)
	{
		printf("%d ",a[i][ncol]);
		scol += a[i][ncol];
	}
	printf("\nSum of row %d:-  %d",ncol,scol);
	printf("\n=============================================================\n");
	getch();


}