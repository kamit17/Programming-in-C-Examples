/*
To Pass 2D-Array to a function as an argument, starting address of memory area
reserved is passed as a 1D array
*/

#include<stdio.h>
void function (int c[2][2]);
int main()
{
  int c[2][2],i,j;
  printf("Enter 4 numbers:\n");
  for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    {
      scanf("%d",&c[i][j]);
    }
    function(c);  //passing multi_dimesional array to funciton
    return 0;
}
void function(int c[2][2])
{
  int i,j;
  printf("\n Displaying:\n");
  for(i=0;i<2;i++)
    for(j=0;j<2;j++)
      printf("%d\n",c[i][j]);
}
