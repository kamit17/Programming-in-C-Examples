#include<stdio.h>
int Prime(int number)
{
  for(int i=2;i<number ;i++)
  {
    if(number%i==0)
    return 0;

  }
  return 1;
}
int main(void)
{
int num = 7;
printf("Prime(num)");

}
