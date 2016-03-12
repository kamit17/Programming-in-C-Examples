/* Write a program to evaluate the polynomial shown here:
3x^3-5x^2=6
for x=2.55
*/

#include<stdio.h>
#include<math.h>
 int main()
 {
     float x,expression;

     printf("\n print the value of  x:\n");
     scanf("%f",&x);

     expression=3*pow(x,3)-5*pow(x,2)-6;

     printf("The value of the polynomial expression is %.2f",expression);

     return 0;
 }
