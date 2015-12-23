#include<stdio.h>
int main()
{
  int radius;
  float area,perimeter;

  printf("\n Enter radius of a cirlce");
  scanf("%d",&radius);
  areaperi(radius,&area,&perimeter);

  printf("Area = %f",area);
  printf("\n Perimeter =%f",perimeter);
}
areaperi( int r,float *a,float *p)
{
  *a=3.14*r*r;
  *p=2*3.14*r;
}
