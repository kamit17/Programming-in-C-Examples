#include<stdio.h>
int main()
{
	int noOfRows,row,colspace,colstar;
	printf("enter the number of rows ");
	scanf("%d",&noOfRows);
	
	for(row=1;row<=noOfRows;row++)
	{
		for(colspace=noOfRows-row;colspace>=1;colspace--)
		{
			printf(" ");
		}
		for(colstar=1;colstar<=(row*2)-1;colstar++)
		{
			printf("*");
		}
		printf("\n");

	}
}
