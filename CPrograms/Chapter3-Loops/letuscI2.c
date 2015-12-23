/* Write a program to produce the following output:
	  1
   2      3 
  4    5    6
7    8    9    10    

*/

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
		
		for(col=0;col<=row;col++) // this loop will print what is the row number
		{
			
			n=(n*1)+1;
			printf(" %2d", n);
			
			
		}
		printf("\n");
	}

}
