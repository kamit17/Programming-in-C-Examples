/*Write a function to find the norm of a matrix. The norm is defined as the square root of the sum of squares of all elements in the matrix.*/
#include<stdio.h>
#include<math.h>
int main()
{
	int arr[2][2];
	int i,j;
	float k=0;
	float *l;
	l=&k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nKey in the [%d][%d] value",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nThe value of the norm of the matrix is %f",*l);
}
norm( int*q,int i,int j,float *c)
{
	int sum,a,b;
	int *d;
	for(a=0,sum=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
			d=q+a*2+b;
			sum=sum+pow(*d,2);
		}
	}
	*c=sqrt(sum);
}


