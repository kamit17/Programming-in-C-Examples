/*Finding the minimum value in an array*/

//Function to find the minimum value in an array

#include<stdio.h>

int minimum ( int values[10])  //Function that takes array as an argument
{
  int minValue , i;

  minValue = values[0] ;

  for ( i = 1; i < 10; i++)
    if ( values[i] < minValue)
        minValue = values[i];

    return minValue;
}

int main(void) {

  /* code */
  int scores[10], i, minScore;
  int minimum (int values[10]); //function prototype . Values is the formal parameter

  printf("Enter 10 Scores\n");

  for( i =0 ; i  < 10; i++)
    scanf("%i",&scores[i]);

    minScore = minimum (scores);  //call to function minimum with
    printf("\n Minimum Score is %i\n",minScore );

  return 0;
}
