/* In main( ) we receive the values of a, b and c through the keyboard and then
output the sum of a, b and c. However, the calculation of sum is done in a
different function called calsum( ). If sum is to be calculated in calsum( ) and
values of a, b and c are received in main( ), then we must pass on these values
to calsum( ), and once calsum( ) calculates the sum we must return it from
calsum( ) back to main( ).*/

/* Sending and receiving values between functions*/
#include<stdio.h>
int main()
{
  int a,b,c,sum;
  printf("Enter the values of a,b,c");
  scanf("%d%d%d" ,&a,&b,&c);
  sum=calsum(a,b,c); // The values of a,b,c are passed on to the function calsum .
  printf("\n Sum= %d",sum);
}
calsum(x,y,z) // The values of a,b,c are collected in x,y,z
int x,y,z;
{
  int d;
  d=x+y+z;
  return(d);
}

// The variables a,b,c are cvalled the actual arguments and the variables x,y,z
//called the formal arguments.
/*The method used to declare the formal arguments here is known as Kernighan and
Ritchie method(k&R method).*/
