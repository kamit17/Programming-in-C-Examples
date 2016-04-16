//Function to calculate the nth triangular number

#include<stdio.h>

void calculateTriangularNumber (int n)  //function prototype declaration
{
  int i ,triangularNumber = 0; //local variables

  for( i =1; i <= n; i++)
    triangularNumber += i;

  printf("Triangular number  of %i is %i\n",n,triangularNumber);
}
int main (void)
{
  calculateTriangularNumber (10);  //first call to function
  calculateTriangularNumber(20);   //second call to function
  calculateTriangularNumber(50);   //third call to function

  return 0;
}
