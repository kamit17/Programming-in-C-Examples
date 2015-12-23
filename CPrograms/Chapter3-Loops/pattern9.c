#include<stdio.h>
int main()
{
	int totalRows=10;
	int row,colspace,colstar;
	for(row=1;row<=totalRows;row++)
	{
		for(colspace=totalRows-row;colspace>=1;colspace--)
		{
			printf(" ");
			
		}
		for(colstar=1;colstar<=2*row-1;colstar++)
		{
			printf("*");
		
		}
		printf("\n");
	}
	for(row=totalRows-1;row>=1;row--)
	{
		for(colspace=1;colspace<=totalRows-row;colspace++)
		{
			printf(" ");
		}
	     for(colstar=1;colstar<=2*row-1;colstar++)
	     {
	     	printf("*");
		 }
		 printf("\n");
	}
}
