#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="hello World";
	char str2[]="World";
	//if(strchr(str1,'H'))
	if(strstr(str1,str2))
	{
		//printf("The character exists in the string");
		printf("The str2  existsin the string.");
	}
	else
	{
		//printf("The charecter does not exist in the string");
		printf("The str2does not exist in the string");
	}
}
