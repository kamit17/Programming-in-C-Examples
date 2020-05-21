/*Sorting Algorithm
Simple Step 1: Step 2: Step 3: Step 4: Step 5: Step 6:
Exchange Sort Algorithm
1)Set i to 0.
2)Set j to i+1.
3)If a[i] > a[j], exchange their values.
4)Set j to j+1. If j<n, go to step3.
5)Set i to i+1.If i<n–1, goto step2.
6)a is now sorted in ascending order.
*/

//Program to sort an array of integers in ascending order
#include<stdio.h>
void sort( int a[], int n)
{
  int i , j,temp;

  for(i = 0; i < n - 1; ++i)
    for(j = i+1; j < n ; j++)
      if(a[i] > a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
}

int main(void)
{
  int i;
  int array[16] = {34, -5, -22, 24,31,55,0 ,12,25,27,45,11,9,8,7,13};

  void sort( int a[], int n);

  printf("The array before the sort:\n");

  for( i =0; i<16; i++)
    printf("%i ", array[i]);

    sort(array, 16);

    printf("\n\nThe array after the sort:\n");
      for(i=0; i<16;i++)
        printf("%i ",array[i]);

    printf("\n");

    return 0;
    
}
