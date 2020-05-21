#include<stdio.h>

int main(void)
{
  int n,first=0,second =1,next,c;

  printf("Enter the number of terms\n");
  scanf("%i",&n);

  printf("First %i terms of Fibonacci series are :-\n",n);

  for(c=0;c<n;c++)
  {
    if(c <=1)
      next =c;
    else
    {
      next = first+second;
      first = second;
      second =next;
    }
    printf("%i\n",next);

  }
  return 0;
}
