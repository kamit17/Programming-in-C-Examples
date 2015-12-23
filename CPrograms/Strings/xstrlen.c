#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="Bamboozled";
	int len1,len2;
	len1=xstrlen(arr);
	len2=xstrlen("Humpty Dumpty");

	printf("\nString=%s lenght=%d",arr,len1);
	printf("\nstring=%s length=%d","Humpty Dumpty",len2);
}
xstrlen(char *s)
{
	int length=0;
	while(*s!='\0')
	{
		length++;
		s++;
	}
	return(length);
}
