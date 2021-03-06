//Function to determine if a character is alphabetic
#include<stdio.h>
#include <stdbool.h>

bool alphabetic (const char c)
{
  if ((c >='a' && c <= 'z') || (c >= 'A' && c<= 'Z'))
    return true;
  else
    return false;
}
/*Function to count the number of words in a string*/

int countWords (const char string [])
{
  int i, wordCount = 0;
  bool lookingForWord = true, alphabetic (const char c);

  for ( i = 0; string[i] != '\0'; i++)
      if( alphabetic(string[i]))
      {
        if (lookingForWord)
        {
          ++wordCount;
          lookingForWord = false;
        }
      }
      else
      lookingForWord = true;
    return wordCount;
}

int main (void)
{
  char text[81];
  int totalWords = 0;
  int countWords (const char string[]);
  void readLine(char buffer[]);
  bool endofText = false;

  printf("Type in your text.\n");
  printf("When you are done, press 'RETURN'.\n\n");

  while ( ! endofText )
  {
    readLine (text);

    if (text[0] == '\0')
      endofText = true;

      else
        totalWords + = countWords (text);
  }
  printf("\nThere are %i words in the above text.\n",totalWords);

  return 0;
}
