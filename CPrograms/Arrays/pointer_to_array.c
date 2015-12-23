#include<stdio.h>
int main()
{
	int s[5][2]={
		{1234, 56},
		{1212, 33},
		{1323, 64},
		{1232, 44}
	};
	int (*p)[2]; // p is a pointer to an array of two integers
	int i,j,*pint;

	for(i=0;i<=3;i++) 
	{
		p=&s[i]; // address of a new 1D array is stored here
		pint=p; //address is assigned to pint
		printf("\n");
		for(j=0;j<=1;j++)
		printf("%d ", *(pint+j)); //using the inner loop to print the individual elements of the 1D array to which p points
	}
}
