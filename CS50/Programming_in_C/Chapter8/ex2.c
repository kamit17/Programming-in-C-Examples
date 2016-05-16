//Function to calculate the nth triangular number

#include<stdio.h>

int calculateTriangularNumber (int n)  //function prototype declaration
{
  int i ,triangularNumber = 0; //local variables

  for( i =1; i <= n; i++)
    triangularNumber += i;

  //printf("Triangular number  of %i is %i\n",n,triangularNumber);

  return triangularNumber ;
}
int main (void)
{
  int n, number ,triangularNumber , counter;

  printf("How many trianguar number you want to calculate?");
  scanf("%i",&n);

  for( counter = 1; counter<= n; counter++)
  {
    printf("What trianguar number do you want\n");
    scanf("%i",&number);

    triangularNumber = calculateTriangularNumber(number); //call to the fuction is modified here

    printf("Triangular Number %i is %i\n\n",number , triangularNumber );
  }

  return 0;
}
