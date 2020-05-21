#include<stdio.h>

void printMessage (void)  //function definition
{
  printf("Programming is fun.\n");
}

int main (void)
{
  int i;

  for (i=1 ; i<=5; ++i)
    printMessage ();   //function call

    return 0;
}
