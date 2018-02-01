#include<stdio.h>

//function Declaraton
void insertionSort( int *a, int n);

int main()
{
 // variable Declaraton
 int arr[5],i;

 //input
 printf("Enter the elements of the array:\n");
 for(i=0;i<5;i++)
 scanf("%d\n",&arr[i]);

 //sort
 insertionSort(arr ,5);
 //output
printf("The sorted array is :\n");
 for(i=0;i<5;i++)
 printf("%d\n",arr[i]);

 return 0;
 }
 void insertionSort(int *a, int n)
 {
   int k,j,temp;
   for(k=1;k<=n-1;k++)
   {
     temp=a[k];
     j=k-1;
     while(temp<a[j]&& j>=0)
     {
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=temp;
   }
 }
