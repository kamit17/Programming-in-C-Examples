/*For the following set of sample data, compute the standard deviation and the mean.
-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2
*/
#include<stdio.h>
#include<math.h>
float sd(float data[],int n);
double mean;
int main()
{
	int i,n;
	float data[100];
	printf("Enter the number of data");
	scanf("%d",&n);
	printf("Enter Elements :\n");
	for(i=0;i<n;i++)
		scanf("%f",&data[i]);
	printf("\n");
	
printf("Mean =% .2f",mean);
	printf("Standard Devation=%.2f",sd(data,n));

}
float sd(float data[],int n)
{
	double sum=0.0 ,sum_deviation=0.0;
	int i;

	for(i=0;i<n;i++)
	{
		sum+=data[i];
	}
	
	mean=sum/n;

	for(i=0;i<n;i++)

		sum_deviation+=(data[i]-mean)*(data[i]-mean);
	return mean;
return  sqrt(sum_deviation/n);
}

