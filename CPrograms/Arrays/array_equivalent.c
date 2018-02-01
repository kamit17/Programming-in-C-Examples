/*If an array arr contains n elements, then write a program to check 
if arr[0] = arr[n-1], arr[1] = arr[n-2] and so on*/

#include<stdio.h>
int main()
{
	int arr[10],i=0,j;
	int k=0;
	printf("\n Enter 10 positive integers: \n");
	for(k=0;k<=9;k++)
		scanf("%d",&arr[k]);

	while (i<=9)
	{
		for(j=9;j>9/2;j--)
		{
			if(arr[i]==arr[j])
			{
				printf("\n The Array elements %d is equal to array element %d\n",arr[i],arr[j]);
			}
			i++;
		}
	}
	return 0;
}
