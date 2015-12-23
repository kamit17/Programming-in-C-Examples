
#include<stdio.h>
int main()
{
	int i,n;
	float arr[100];
	printf("Enter Total number of elements");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
{
	printf("Enter number %d:",i+1);
	scanf("%f",&arr[i]);
}
	for(i=0;i<n;i++)
{
	if(arr[0]<arr[i])
	arr[0]=arr[i];
}
	printf("\n Largest elements= %.2f",arr[0]);
	return 0;
}
