#include<stdio.h>
int main()
{
	int num[]={24,25,26,27,28,29,30};
	int i;

	for(i=0;i<6;i++)
	{
		printf("\nElement no.%d",i);
		printf("address=%u",&num[i]);
	}
}
