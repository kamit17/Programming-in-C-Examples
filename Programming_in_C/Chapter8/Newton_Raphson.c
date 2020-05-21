/*Calculating the square root of a number

Newton-Raphson Method to Compute the Square Root of x
Step 1: Step 2: Step 3:
Step 4:
Set the value of guess to 1.
If |guess2 - x| < ε, proceed to step 4.
Set the value of guess to (x / guess + guess) / 2 and return to step 2.
The guess is the approximation of the square root.
*/


//Function to calculate the absolute value of a number

#include<stdio.h>

float absoluteValue (float x)  //function definition
{
  if (x < 0)
    x = -x;
  return (x);
}

//Function to compute the square root of a number

float squareRoot (float x)
{

  const float epsilon = .000001;
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
  printf("squareRoot (2.0) = %f\n",squareRoot (2.0));
  printf("squareRoot (144.0) = %f\n",squareRoot (144.0));
  printf("squareRoot (-2) = %f\n",squareRoot (-2));
  return 0;
}
