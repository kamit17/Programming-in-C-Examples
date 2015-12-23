#include<stdio.h>
int main()
{
	int mat[4][4],*arr,i,j,k,t;
	printf("Enter the elements of the matrix");

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter elements %d%d",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	/*sort the elements of the matri*/
	arr=mat; //base address of the matrix array
	/*printf the matrix as entered using pointer*/
	printf("\n The matrix formed is ..\n");
	for(i=0;i<15;i++) // number of passes
	{
		for(j=1;j<16;j++)
		{
			if(*(arr+i)>*(arr+j))
			{
				t=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=t;
			}

		}
	}
	/*The Stored matri*/
	printf("\n the sorted matrix is \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%d",mat[i][j]);
		printf("\n");
	}
	printf("\n\n press any key to exit");
}
