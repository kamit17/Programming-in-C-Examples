#include<stdio.h>
#include<math.h>
void func(int arr[] , int val);
int main()
{
  int array[5]={2,3,4,5,7};
  int power;
  printf("Enter power value:");
  scanf("%d",&power);
  func(array ,power);
}
void func(int arr[] , int val)
{
  int i;
  for(i=0;i<5;i++)
  {
    printf("Value of  %d %d is %f\n",arr[i],(i+1),pow(arr[i],val));
  }
}
