#include<stdio.h>
int main()
{
	int totalRows=10;
	int row,colspace,colstar;
for(row=totalRows;row>=1;row--)
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
