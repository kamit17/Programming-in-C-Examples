#include<stdio.h>
extern int count;
void write_extern(void)
{
  printf("\n count is %d\n",count);
}
