/*Find the smallest number in an array using pointers*/
#include<stdio.h>
small(int *j, int i);
int main()
{
int arr[10],i,*j,k;
j=arr;
printf("Enter the array elements : \n");
for(i=0;i<10;i++)
{
  printf("\n Key the %d value ",i+1);
  scanf("%d",&arr[i]);
}
k=small(j,i);
printf("\n The smallers number in the array is %d",k);
}
int small (int *j,int i)
{
int m,n;
for(m=0;m<i;m++,j++)
{
if(m==0)
n=*j;
if(*j<n)
n=*j;
}
return n;
}
