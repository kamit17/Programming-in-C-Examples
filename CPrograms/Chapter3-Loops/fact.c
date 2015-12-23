/*Write a program to find the factorial value of any number entered through the keyboard.*/
#include<stdio.h>
int main()
{
int c,n,fact=1;
printf("enter a number to calculate its factorial\n");
scanf("%d", &n);
for(c=1;c<=n;c++)
{
fact=fact*c;
}
printf("Factorial of %d =%d\n", n,fact);
}