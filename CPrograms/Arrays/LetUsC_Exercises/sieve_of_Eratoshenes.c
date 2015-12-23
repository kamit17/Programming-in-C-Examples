#include<stdio.h>
int main()
{
	int num[100];
	int i,a;

	for(i=0;i<=100;i++)
		num[i]=i+1;

	for(i=2;i<100;i++)
	{
		for(a=2;a<num[i];a++)
		{
			if(num[i]%a==0)
				num[i]=0;
		}
	}
	num[0]=0;
	for(i=0;i<100;i++)
		if(num[i]!=0)
			printf("%d ",num[i]);
}
