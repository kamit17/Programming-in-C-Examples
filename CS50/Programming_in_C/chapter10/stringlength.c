#include<stdio.h>

int stringLength(const char string[])

{
  int count = 0;

  while ( string[count]!= '\0')
    count++;

  return count ;
}

int main(void)
{
  int stringLength(const char string[]);

  char str1[]={'T','E','E','N','\0'};
  char str2[]={'M','A','A','A','R','\0'};

  printf(" %i %i\n", stringLength(str1), stringLength(str2));

  return 0;
}
