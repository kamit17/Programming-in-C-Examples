/*program to find prime numbers between 1 to 300*/
#include<stdio.h>
int main()
{
int i,j;
for(i=2;i<300;i++)  
{
for(j=2;j<=i;j++)
{
if(i%j==0)
{
break;
}
}
if(i==j)
{
printf(" %d is a  prime numbers between 1 to 300 \n",i);
}
}
}