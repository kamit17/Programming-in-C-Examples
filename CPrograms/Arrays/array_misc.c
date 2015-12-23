#include<stdio.h>
int main()
{
  int i;
  float arr[]={5.45,20.62,18.57,19.00};
  arr[2]=23.23;
  for(i=0;i<4;i++)
  {
    printf("arr[%d]is: %f\n",i,arr[i]);
  }
}
