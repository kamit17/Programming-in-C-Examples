#include<stdio.h>
#include<string.h>
int main()
{

char s[80];
int i=0;


printf("Enter the string:\n\n\n");
gets(s);


printf("\n\n\nOutput:\n\n\n");

while(s[i]!='\0') {


if(s[i]==' ' && s[i+1]==' ') {

/* if there are two or more blanks, do nothing */

}

else  {

puts(s[i]);

}

i++;

}

//getch();
}
