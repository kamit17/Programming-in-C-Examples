#include <stdio.h>
#include <stdbool.h>

bool equalStrings(const char str1[], const char str2[])
{
  int i = 0;
  bool areEqual;

  while( str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
  ++i;

if(str1[i] == str2[i])
  areEqual = true;
  else
  areEqual = false;

  return areEqual;
}

int main(void)
{
  bool equalStrings(const char s1[], const char s2[]);

  const char s1[]="String compare Test";
  const char s2[]= "String";

  printf("%i\n",equalStrings (s1,s2));
  printf("%i\n",equalStrings (s1,s1));
  printf("%i\n",equalStrings (s2,"String") );

  return 0;

}
