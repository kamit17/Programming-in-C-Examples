/*STRING0: Read and store a string of characters and print it out*/
/*File: string.c
  This Program reads characters until a newline,stores them in an array,and terminates the string with a NULL character. It then prints out the string.
  */
#include<stdio.h>
#include ''arraydef.h"

int main()
{
	char msg[SIZE],ch;
	int i=0;

	printf("***Character Strings***\n\n");
	printf("Type characters terminated by RETURN or ENTER\n")

		while((ch==getchar())!='\n')
			msg[i++]=ch;
	msg[i]='\0';

	i=0;
	while(msg[i]!='\0')
		putchar(msg[i++]);
	printf("\n");
}

				


