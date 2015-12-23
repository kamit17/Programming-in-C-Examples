/*External Storage Class Demo*/
#include<stdio.h>
int i;
int main()
{
  printf("\n i=%d",i);
  increment();
  increment();
  decrement();
  decrement();
}
increment()
{
  i=i+1;
  printf("\non decrementing i=%d",i);
}
decrement()
{
  i=i-1;
  printf("\non decrementing i=%d\n",i);
}
