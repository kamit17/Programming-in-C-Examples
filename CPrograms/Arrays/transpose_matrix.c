/*Program to find transpose of a matrix*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a[10][10],trans[10][10],r,c,i,j;
    printf("Enter rows and columns of  the matrix:\n");
    scanf("%d %d",&r,&c);

/*Storing Elements of the matrix entered by the user in the array a[][]*/
printf("\nEnter the elements of the matrix:\n");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
  {
  printf("Enter elements a%d%d: ",i+1,j+1);
  scanf("%d",&a[i][j]);
  }

/*Displaying the matrix*/
printf("\n The Entered matrix is :\n");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
  printf("%d ",a[i][j]);
  if(j==c-1)
  printf("\n\n");
}
/*finding transpose of matrix a[][] and storing it in array trans[][]*/
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
  trans [j][i]=a[i][j];
}
/*displaying the transpose*/
printf("\n Transpose of matrix:\n");
for(i=0;i<c;i++)
for(j=0;j<r;j++)
  {
    printf("%d ",trans[i][j]);
    if(j==r-1)
    printf("\n\n");
  }
}
