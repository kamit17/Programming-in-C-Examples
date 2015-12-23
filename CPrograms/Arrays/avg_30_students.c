#include<stdio.h>
int main()
{
	int avg,sum=0;
	int i;	
	int marks[5];

	for(i=0;i<=4;i++)
	{
		printf("\n Enter Marks:");
		scanf("%d",&marks[i]);

	}
	for(i=0;i<4;i++)
	
	sum=sum+marks[i];

	avg=sum/30;
	printf("\nAvg marks =%d",avg);
}
