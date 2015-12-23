#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="Hello";
	char str2[]="Whats up?";
	if(!strcmp(str1,str2))
	{
		printf("The strings are same");
	}
	else
	{
		printf("The strings are not same");
	}

}
