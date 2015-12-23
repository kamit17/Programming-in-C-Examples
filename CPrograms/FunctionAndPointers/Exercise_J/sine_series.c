/*
Write a C function to evaluate the series
sin(x)=x-(x^3/3!)+(x^5/5!)-(x^7/7!)+.....
*/

#include<stdio.h>
#include<math.h>
double fact(double n);
int main()
{
  double n,i,x,sum=0;
  int j;
  printf("Enter the value of x: \n");
  scanf("%lf",&x);
  printf("Enter the number of terms:\n");
  scanf("%lf",&n);
  printf("Sin(%.2lf) =  ",x);
  for(i=1,j=1;i<=n,j<=n;i=i+2,j++)
  {
    sum=sum+(pow(-1,j+1)*pow(x,i))/fact(i);
  }
  printf("%.2lf",sum);
}
double fact (double n)
{
  if(n==0)
  {
    return 1;
  }
  else
  {
    return(n*fact(n-1));
  }
}
