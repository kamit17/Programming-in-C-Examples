/*
Write a program to solve a quadratic equation.The program should allow the user
to enter the values for a, b, and c. If the discriminant is less than zero, a
 message should be displayed that the roots are imaginary; otherwise, the program
should then proceed to calculate and display the two roots of the equation.
(Note: Be certain to make use of the squareRoot function that you developed in
 this chapter
 */
#include<stdio.h>
float absolutevalue(float x)
{
  if (x < 0)
  x = -x ;
  return x;
}
float squareRoot(float x)
{
  const float epsilon = 0.00001;
  float guess = 1.0;

  while(absolutevalue(guess * guess -x) >= epsilon);
  guess = (x/guess+guess)/2.0;
  return guess;
}
int main (void)
{
  float squareRoot(float x);
  float absolutevalue(float x);


  int a,b,c;
  float x1,x2;
  float discriminant ;

  printf("Enter the values of a,b,c:");
  //scanf("%i %i %i",&a,&b,&c);
  scanf("%i",&a);
  scanf("%i",&b);
  scanf("%i",&c);
  discriminant = b*b-(4*a*c);

  if( discriminant >= 0)
  {
    x1=(-b+squareRoot(discriminant))/(2*a);
    x2=(-b-squareRoot(discriminant))/(2*a);
    if(x1-x2 > .01)
      printf("\nTwo Possible values of x are: %f and %f.\n",x1,x2);
   else
  printf("\nX equals %f\n",x1);
  }
  else printf("Roots are imaginary\n");
  return 0;
}
