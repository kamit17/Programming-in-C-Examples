#include<stdio.h>
#include<string.h>
int main()
{
	char c[100],ch;
	int i,count=0;
	printf("enter a string");
	gets(c);
	printf("\n Enter a character to find frequency: ");
	scanf("%c",&ch);
	for(i=0;c[i]!='\0';++i)
	{
		if(ch==c[i])
			++count;
	}
	printf("\n Frequency of %c =%d",ch,count);
	return 0;
}

