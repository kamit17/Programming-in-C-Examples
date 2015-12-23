/*C Program to calculate Standard Deviation*/

#include<stdio.h>
#include<math.h>
float sd(float data[],int n);
int main()
{
	int n,i;
	float data[100];
	printf("Enter the Sample size:");
	scanf("%d",&n);
	printf("Enter Elements :");
	for(i=0;i<n;i++)
	scanf("%f",&data[i]);
	printf("\n");
	printf("SD= %.2f",sd(data ,n));
	return 0;
}
float sd(float data[], int n)
{
	float mean=0.0,variance=0.0;
	int i;
	for(i=0;i<n;i++)
	{
		mean+=data[i];
	}
	mean=mean/n;
	for(i=0;i<n;i++)
	variance+=(data[i]-mean)*(data[i]-mean);
	return sqrt(variance/n);
}
