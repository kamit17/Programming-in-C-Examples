/*
Write a function that raises an integer to a positive integer power. Call the func- tion x_to_the_n taking two integer arguments x and n. Have the function return a long int, which represents the results of calculating xn.
*/

#include <stdio.h>

long int x_to_the_n ( int x , int n)
{
  long int power = 1;
  int i = 1;

  for( i = 1 ; i <= n; i++)
  {
    power *= x;

  }
  return power;
}

int main (void)
{
  long int x_to_the_n ( int x  ,int n);
  int a , b;

  printf("Enter the value of x: ");
  scanf("%i",&a);
  printf("\nEnter the power that x needs to be raised to: ");
  scanf("%i",&b);

  printf("%i raised to the power of %i is %li\n", a,b,x_to_the_n(a ,b));

  return 0;

}
