/*Find the frequency of characters in a string*/
#include<stdio.h>
#include<string.h>
int main()
{
  char c[1000],ch;
  int i,count=0;
  printf("Enter a string:");
  gets(c);
  printf("Enter a character to find frequency: ");
  scanf("%c",ch);
  for(i=0;c[i]!='\0';++i)
  {
    if(ch==c[i])
    ++count;
  }
  printf("\n Frequency of %c = %d",ch,count);
  return 0;
}
