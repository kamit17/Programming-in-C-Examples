/*C program to find sum of two matrices of order 2*2 using Multidimensional Arrays*/
#include<stdio.h>
int main()
{
  int a[2][2],b[2][2],c[2][2],i,j;
  printf("\n Enter the Elements of the 1st Matrix\n");

/* Reading two dimensional Array with the help of two for loop. If there was
an array of 'n' dimension, 'n' numbers of loops are needed for inserting data to array.*/

  for(i=0;i<2;i++)
  for(j=0;j<2;j++)
  {
    printf("Enter a%d%d: ",i+1,j+1);
    scanf("%d",&a[i][j]);
    }
  printf("\nEnter the Elements of the second Matrix\n");
  for(i=0;i<2;i++)
  for(j=0;j<2;j++)
  {
    printf("Enter b%d%d:",i+1,j+1);
    scanf("%d",&b[i][j]);

  }
 for(i=0;i<2;i++)
 for(j=0;j<2;j++)
 {
/*Writing the elements of multidimensional array using loop*/
  c[i][j]=a[i][j]+b[i][j];
  }
  printf("\n Sum of Matrix:\n");
  for(i=0;i<2;i++)
  for(j=0;j<2;j++)
  {
  printf("%d\t",c[i][j]);
  if(j==1)
  printf("\n");
}
return 0;
}
