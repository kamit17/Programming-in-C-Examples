#include<stdio.h>
int main()
{
	int num[]={23,25,26,27,28,29,30};
	int i,*j;

	j=&num[0]; /*Assinging address of zeroth element*/

	for(i=0;i<6;i++)
	{
		printf("\naddress =%u",j);
		printf("element=%d",*j);
		j++; //increment pointer to point to next location
	}
}
