#include<stdio.h>
int main()
{
	int num,i,a;
	int arr[25];

	for(i=0;i<=25;i++)
	{
		printf("\n Key %d value", i);
		scanf("%d",&arr[i]);
	}
	printf("\n 25 integers stored, enter any integer again");
	scanf("%d",&num);

	for(i=0;i<=25;i++)
	{
		if(arr[i]==num)
			a++;
	}
	if(a>0)
		printf("\n The integer appeared %d times in the array",a);
	else
		printf("\n The integer did not appear in the array");
}
