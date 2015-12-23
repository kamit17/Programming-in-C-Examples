/*passing entire array as a function */
#include<stdio.h>
int main()
{
	int num[]={24,26,34,44,56,17};
	display(&num[0],6);
}
display(int *j,int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		printf("\nelement=%d",*j);
		j++;
	}
}
