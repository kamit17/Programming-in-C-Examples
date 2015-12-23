/*
Write a function which receives a float and an int from main( ), finds the
product of these two and returns the product which is printed through main( ).*/

#include<stdio.h>
float prod( float , int );
int main()
{
  int a;
  float b,c;
  printf("enter the value of a:");
  scanf("%d",&a);
  printf("\n Enter the value of b:");
  scanf("\n %f",&b);
  c=prod(a,b);
  printf("\nThe product of a and b is %f\n",c);
}
 float prod(float x, int y)
{
  float z;
  z=x*y;
  return(z);
}
