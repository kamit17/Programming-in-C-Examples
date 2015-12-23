/* Factorial of a number  without using recursion*/
#include<stdio.h>
int main()
{
  int a,fact;

  printf("Enter any number :");
  scanf("%d",&a);

  fact=factorial(a);
  printf("Factorail value =%d\n",fact);
}
factorial( int x)
{
  int f=1,i;

  for(i=x;i>1;i--)
  f=f*i;

  return(f);
}
