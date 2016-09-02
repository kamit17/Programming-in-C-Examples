/*Write a function called arraysum that takes two arguments: an integer array
and the number of elements in the array. Have the function retun as its result
the sum of the elements in the array*/

#include<stdio.h>
int arraySum (int arr[], int n)
{
  int i,sum;
  for(i=0;i<n;i++)
  {
    sum+=arr[i];
  }
  return sum;
}

int main(void)
{
  int array1[5]={1222,123,125,1};
  int result =arraySum(array1 ,5);

  printf("The sume is: %i\n",result);
}
