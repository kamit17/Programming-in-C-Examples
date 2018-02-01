/*Write a  program to print the transpose of a 4x4 matrix*/
#include<stdio.h>
int main()
{
	int a,b,c,d,matrix[10][10],transpose[10][10];

	printf("\n Enter the number of rows and columns of matrix\n");
	scanf("%d%d",&a,&b);

	printf("\n Enter the elements of matrix:\n");

	for(c=0;c<a;c++)
		for(d=0;d<b;d++)
	scanf("%d",&matrix[c][d]);

	for(c=0;c<a;c++)
		for(d=0;d<b;d++)
			transpose[d][c]=matrix[c][d];

	printf("Tranpose of entered matrix :-\n");

	for(c=0;c<a;c++)
	{
		for(d=0;d<b;d++)
			printf("%d\t",transpose[c][d]);
	 printf("\n");
	}
	return 0;
}




