/*Calculating the square root of a number*/

//Function to calculte the absolute value of a number

#include<stdio.h>

float absoluteValue (float x)  //function definition
{
  if (x < 0)
    x = -x;
  return (x);
}

//Function to compute the square root of a number

float squareRoot (float x , float epsilon)
{

  //const float epsilon = .000001;
  float   guess = 1.0;
  float absoluteValue (float x);

  if (x<0)
  {
    printf("Negative argument to square root .\n");

    return -1.0;
  }

  while( absoluteValue (guess * guess - x) >= epsilon)
      guess = (x /guess + guess) / 2.0;

    return guess;
}

int main (void ) {
  /* code */
  printf("squareRoot (2.0) = %f\n",squareRoot (2.0,0.5));
  printf("squareRoot (144.0) = %f\n",squareRoot (144.0,0.25));
  printf("squareRoot (-2) = %f\n",squareRoot (2,0.1));
  return 0;
}
