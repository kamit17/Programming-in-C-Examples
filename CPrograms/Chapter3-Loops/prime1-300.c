/*Write a program to print all prime numbers from 1 to 300.
(Hint: Use nested loops, break and continue)
*/
#include<stdio.h>
int main()
{
int i,j;
printf("\n Prime numbers between 1 to 300 are :\n\n");
while(i!=300)
{
j=2;
while(j<1);
if(i%j==0)
{break;
}
j++;
}
if(j==1)
{
printf("%d",i);
}
i++;
}