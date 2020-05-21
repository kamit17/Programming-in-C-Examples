#include<stdio.h>
void sort( int a[], int n, int order)
{
  int i , j,temp;

  for(i = 0; i < n - 1; ++i)
    for(j = i+1; j < n ; j++)
      if((order ==1 && a[i] > a[j]) || (order == -1 && a[i]<a[j]))
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
}

int main(void)
{
  int i , order;
  int array[16] = {34, -5, -22, 24,31,55,0 ,12,25,27,45,11,9,8,7,13};

  void sort( int a[], int n , int order);

  printf("The array before the sort:\n");

  for( i =0; i<16; i++)
    printf("%i ", array[i]);
printf("Enter the order\n");
scanf("%i",&order);
    sort(array, 16,order);

    printf("\n\nThe array after the sort:\n");
      for(i=0; i<16;i++)
        printf("%i ",array[i]);

    printf("\n");

    return 0;

}
