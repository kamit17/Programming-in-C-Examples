/*C program to pass a single element of an array to a function*/
#include<stdio.h>
void display(int a)
{
  printf("%d\n",a);
}
int main()
{
  int c[]={2,3,4};
  display(c[2]);  //passing array element c[2] only.
  return 0;
}
