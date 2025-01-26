#include<stdio.h>
#include<conio.h>

/*

Develop a program to find the largest element from a given 2D array.

*/

void main()
{
	int i, j, row, col, a[100][100], max = a[0][0], size;
	clrscr();

	printf("Enter the number of row:- ");
	scanf("%d",&row);

	printf("Enter the number of column:- ");
	scanf("%d",&col);

	printf("Enter elemenst:-\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(a[0][0] < a[i][j])
			{
				max = a[i][j];
			}
		}
	}

	printf("The largest element is: %d",max);
	getch();
}