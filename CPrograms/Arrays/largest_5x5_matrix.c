/*Write a program to pick up the largest number from any 5 row by 5 column matrix.*/
#include<stdio.h>
int main()
{
	int a[5][5],i,j,k,m,n;
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			scanf("%d",&a[i][j]);
					k=a[0][0];
					for(i=0;i<=4;i++)
					{
					for(j=0;j<=4;j++)
					if(k<a[i][j])
					k=a[i][j];
					}
					printf("largetst no. is %u",a[m][n]);
					}

