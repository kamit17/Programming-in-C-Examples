#include<stdio.h>
int shift(int(*p)[5]);  /* p  is a pointer to an array whose declaration is shown below*/
{
	int *q;
	int i,j,a[5],k;
	for(i=0;i<4;i++)
	{
		q=*(p+1);  /*selects rows .i.e q contains the row number to which shifting is applied*/
		for(j=0;j<5;j++)  /*shifts elements of row and saves in another linear array*/
		{
			a[j]=*(q+((j+2)%5));
		}
		for(k=0;k<5;k++)
			*(q+k)=a[k]; /*stores the new order of elements of that row in original array*/
	}
}

int main()
{
	int a[4][5],i,j;
	printf("Enter the elements \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter Element[%d][%d]:" , i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
			printf("\t%d",a[i][j]);
		printf("\n");
	}
	shift(a);
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
			printf("\t%d",a[i][j]);
	}
	return 0;
}
