/*Write a program that converts a string like "124" to an integer 124.*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char stri[]="125";
	int i,len,a,res,digit;
	len=strlen(stri);
	for(i=0,a=pow(10,len-1)),res=0;i<len;i++,a/=10)
	{
		digit=getdigit(str[i]);
		res=res+(digit*a);
	}
	printf("\nThe required integer is %d",res);
}
getdigit(char m)
{
	int c;
	c=m-48;
	return(c);
}
