/******************************************************************************
This program asks user to enter the size of the matrix (rows and column) then,
it asks the user to enter the elements of two matrices and finally it adds two
matrix and displays the result. To perform this task three functions are made:

1)To take matrix elements from user
2)To multiply two matrix
3)To display the resultant matrix after multiplication
*******************************************************************************/
#include<stdio.h>
void take_data(int a[][10],int b[][10], int r1, int c1,int r2,int c2);
void multiplication(int a[][10],int b[][10],int mult[][10], int r1,int c1,int r2,int c2);
void display(int mult[][10], int r1,int c2);
int main()
{
  int a[10][10], b[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;
  printf("Enter the rows and columns for the first matrix:");
  scanf("%d%d",&r1,&c1);
  printf("Enter the rows and columns for the second matrix:");
  scanf("%d%d",&r2,&c2);
/*if column of a is not equal to row of b*/
while (c1!=r2)
  {
      printf("Error! column of first matrix not equal to row of second.\n");
      printf("Enter rows and column for first matrix: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter rows and column for second matrix: ");
      scanf("%d%d",&r2, &c2);
  }
  take_data(a,b,r1,c1,r2,c2); //function to take matrices
  multiplication(a,b,mult,r1,c1,r2,c2); //function to multiply two matrices
  display(mult,r1,c2); //function to display resultant matrix
  return 0;
}
void take_data(int a[][10],int b[][10],int r1,int c1,int r2, int c2)
{
  int i,j;
  printf("Enter the Elements of matrix 1:\n");
  for(i=0;i<r1;i++)
  for(j=0;j<c1;j++)
  {
    printf("Enter elements a%d%d:",i+1,j+1);
    scanf("%d",&a[i][j]);
  }
  printf("Enter the Elements of matrix 2:\n");
  for(i=0;i<r2;i++)
  for(j=0;j<c2;j++)
  {
    printf("Enter elements a%d%d:",i+1,j+1);
    scanf("%d",&b[i][j]);
  }
  printf("\n the First matrix is:\n");
  for(i=0;i<r1;i++)
  {
    printf("\n");
    for(j=0;j<c1;j++)
    {
      printf("%d\t",a[i][j]);
    }
  }
  printf("\n the second matrix is:\n");
  for(i=0;i<r2;i++)
  {
    printf("\n");
    for(j=0;j<c2;j++)
    {
      printf("%d\t", b[i][j]);
    }
  }
}
void multiplication(int a[][10],int b[][10],int mult[][10],int r1,int c1,int r2, int c2)
{
    int i,j,k;
    for(i=0;i<r1;i++)
    for(j=0;j<c1;j++)
    {
      mult[i][j]=0;
    }
  /*Multiplying a and ba and storing them in mult*/
  for(i=0;i<r1;i++)
  for(j=0;j<c2;j++)
  for(k=0;k<c1;k++)
  {
    mult[i][j]+=a[i][k]*b[k][j];
  }
}
void display(int mult [][10], int r1,int c2)
{

  int i, j;
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
    for(j=0; j<c2; ++j)
    {
        printf("%d  ",mult[i][j]);
        if(j==c2-1)
            printf("\n\n");
    }
}
