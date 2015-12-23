/* Any character is entered through the keyboard, write a program to determine
 whether the character entered is a capital letter, a small case letter, a digit 
 or a special symbol.
 
The following table shows the range of ASCII values for various characters.

The following table shows the range of ASCII values for various characters.
Characters

Characters            ASCII values

A – Z                       65 - 90
a – z                         97 - 122
0 – 9                        48 - 57
special symbols         0 - 47, 58 - 64, 91 - 96, 123 - 127 */

#include<stdio.h>
int main()
{
char ch;
printf("enter any character \n");
scanf("%c",&ch);
if(ch>=65 && ch<=90)
printf("you have entered a capital letter\n");
else if(ch>=97&& ch<=122)
printf("you have entered a lower case letter\n");
else if(ch>=48&&ch<=57)
printf("you have entered a digit\n");
else if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123||ch<=127))
printf("you have entered a special symbol\n");
}