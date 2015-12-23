/*matrix Multiplication*/
#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;
  printf("Enter the rows and columns for the First matrix:\n ");
  scanf("%d%d",&r1,&c1);
  printf("Enter the rows and columns for the second matrix:\n");
  scanf("%d%d",&r2,&c2);

  /*if column of first matrix is not equal to row of second matrix, ask user to
  reenter the size of the matrices*/
  while(c1!=r2)
  {
    printf("Error! Column of first matrix is not equal to the row of the first matrix");
    printf("Enter the rows and columns for the First matrix:\n ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the rows and columns for the second matrix:\n");
    scanf("%d%d",&r2,&c2);
  }

  /*Storing Elements of the first matrix*/
    printf("\n Enter the Elements of the first matrix:\n");
    for(i=0;i<r1;++i)
    for(j=0;j<c1;++j)
    {
      printf("Elements of a%d%d:",i+1,+j+1);
      scanf("%d",&a[i][j]);
    }
    /*Storing Elements of the second matrix*/
      printf("\n Enter the Elements of the first matrix:\n");
      for(i=0;i<r2;++i)
      for(j=0;j<c2;++j)
      {
        printf("Elements of b %d%d:",i+1,j+1);
        scanf("%d",&b[i][j]);
      }
      printf("\n The First matrix is\n");
      for(i=0;i<r1;i++)
      {
        printf(" \n");
        for(j=0;j<c1;j++)
        {
        printf("%d\t",a[i][j]);
      }
    }
    /*Initializing elements of matrix mult to 0*/
    for(i=0;i<r1;++i)
    for(j=0;j<c2;++j)
    {
      mult[i][j]=0;
    }
  /*Multiplying the matrix and storing the value in array mult*/
  for(i=0;i<r1;++i)
  for(j=0;j<c2;++j)
  for(k=0;k<c1;++k)
  {
      mult[i][j]=mult[i][j]+a[i][k]*b[k][j];
  }
  /*Displaying the multiplicaion of two matrices*/
  printf("\n Output Matrix\n");
  for(i=0;i<r1;++i)
  for(j=0;j<c2;++j)
  {
    printf("%d  ",mult[i][j]);
    if(j==c2-1)
    printf("\n\n");
  }
  return 0;

}
