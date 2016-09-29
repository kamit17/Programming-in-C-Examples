#include <stdio.h>
#include <string.h>

      int  findString( char string1[], char string2[])
{
  int i,j;

  for(i = 0; string1[i]!='\0';i++)
  {
    j=0;
    while(string2[j]!='\0' && string2[j]==string1[i+j])
    {
      j++;
    }
    if(string2[j] == '\0')
    {return j;
    }
    //return j;
  }
  return -1;
}

int main (void)
{
  //int findString( char string1[], char string2[]);
	int index;

	// expect 3
	index = findString ("a chatterbox", "hat");
	printf ("%i\n", index);

	// expect
	index = findString ("a", "aa");
	printf ("%i\n", index);

	// expect -1
	index = findString ("a chatterbox", "hatx");
	printf ("%i\n", index);

	// expect -1
	index = findString ("", "hat");
	printf ("%i\n", index);

	// expect 0
	index = findString ("a chatterbox", "");
	printf ("%i\n", index);

	// expect 0
	char a000[] = {'a', '\0', '\0', '\0' };
	index = findString (a000, "a");
	printf ("%i\n", index);

	return 0;
}
