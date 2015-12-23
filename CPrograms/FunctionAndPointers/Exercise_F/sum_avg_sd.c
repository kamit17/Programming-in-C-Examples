/*Write a function that receives 5 integers and returns the sum, average and
standard deviation of these numbers. Call this function from main( ) and print
the results in main( ).*/
#include<stdio.h>
#include<math.h>
void fun(int*,float*,float*);
int main()
{
  int sum;
  float avg,sd;
  printf("Enter 5 integers:");
  fun(&sum,&avg,&sd);
  printf("Sum= %d\n Avergae =%f\n Standard Deviation =%f",sum,avg,sd);
}
void fun(int *sum,float *avg, float *sd)
{
int a,b,c, d,e,x,y;
float var;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
x=a+b+c+d+e;
y=(a*a)+(b*b)+(c*c)+(d*d)+(e*e);
*sum=x;
*avg=x/5;
var=(y/5)-((x/5)*(x/5));
*sd=pow(var,0.5);

}
