/*factorial of a number with recursion*/
#include<stdio.h>
int main()
{
  int a,fact;

  printf("\n Enter any number:");
  scanf("%d",&a);

  fact=rec(a);
  printf("Factorial value =%d",fact);
}
rec (int x)
{
  int f;

  if(x==1)
  return(1);
  else
  f=x*rec(x-1);
  return(f);
}
