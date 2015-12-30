#include<stdio.h>
#include<string.h>
int main()
{
	char *str[50];
	char *temp;
	int i,j;
	printf("Enter the words:\n");
	for(i=0;i<10;i++)
		gets(str[i]);
	for(j=i+1;j<10;j++)
	{
	if(strcmp(str[i],str[j]>0))
		{	
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		}
		printf("in lexographical order:\n");
		for(i=0;i<10;++i)
		puts(str[i]);
	}
		return 0;
	}

