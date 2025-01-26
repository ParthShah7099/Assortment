#include<stdio.h>
#include<conio.h>

/*

Develop a program that finds all the negative elements form a given 1D array.

*/

void main()
{
	int i, size, a[100],b[100];
	clrscr();

	printf("Enter the size of an array:- ");
	scanf("%d",&size);

	printf("Enter the elements of an array:-\n");

	for(i=0; i<size; i++)
	{
		printf("Enter a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Negative elements from an Array: ");
	for(i=0; i<size; i++)
	{
		if(a[i] < 0)
		{
			printf("%d, ",a[i]);
		}
	}
	getch();
}

