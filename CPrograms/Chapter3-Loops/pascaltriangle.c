#include<stdio.h>
int main()
{
	int row,col,space,n,noOfRows; // n is the variable for calculating the pattern
	printf("Enter the number of rows that you want");
	scanf("%d",&noOfRows);
	for(row=0;row<=noOfRows;row++)
	{
		for(space=0;space<=(noOfRows-row);space++)
		{
			printf(" ");
		}
		n=1;
		for(col=0;col<=row;col++) // this loop will print what is the row number
		{
			printf(" %d", n);
			n=n*(row-col)/(col+1);
		}
		printf("\n");
	}
//getch();
}
