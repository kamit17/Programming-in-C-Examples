#include<stdio.h>
float square(float);
int main()
{
  float a,b;
  printf("\n Enter any number:");
  scanf("%f",&a);
  b=square(a);
  printf("\n Square of %f is %f\n",a,b);
}
 float square(float x)
{
float y;
y=x*x;
return(y);
}
