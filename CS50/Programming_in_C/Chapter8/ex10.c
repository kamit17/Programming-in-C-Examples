/*Write a function prime that returns 1 if its argument is prime number and
returns 0 otherwise*/
#include<stdio.h>
int prime (int n)
{
  int i;
  for(i=2;i<=n;i++)
  {
    if(n%i==0)
    return 0;
  }
  return 1;
}

int main(void)
{
  int n ,p;
  printf("Print a number: \n");
  scanf("%i",&n);
  p=prime(n);
  if(p==1)
  printf("1");
  else
  printf("0\n");
  return 0;
}
