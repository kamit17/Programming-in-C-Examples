#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include "alloc.h"
int main()
{
	char *names[6];
	char n[50];
	int len,i;
	char *p;
	for(i=0;i<=5;i++)
	{
		printf("\nEnter Name");
		scanf("%s ",n);
		len=strlen(n);
		p=malloc(len+1);
		strcpy(p,n);
		names[i]=p;
	}
	for(i=0;i<=5;i++)
		printf("\n%s\n",names[i]);
}
