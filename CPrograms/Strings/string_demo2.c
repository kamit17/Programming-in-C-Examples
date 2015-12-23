#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="Kumar";
	char *ptr;
	ptr=name; /*stores base address of the string*/
		while(*ptr!='\0')
		{
			printf("%c",*ptr);
			ptr++;
		}
}
