/* MATRIX MULTIPLICATION.*/
#include<stdio.h>
int main()
{
  int a[2][2],b[2][2],c[2][2];
  int i,j,k,m,n,o;
  /* here a is mxn,b is nxo,c=mxo matrices.*/

  /*Reading the data*/
printf("Enter the Dimensions of the matrices\n");
  scanf("%d %d %d ",&m,&n,&o);    //Reading the Three Dimensions

  //Reading in array a
  printf("Enter Elements of the first matrix\n");
  for(i=1;i<=m;i++)
  for(j=1;j<=n;j++)
  scanf("%d",&a[i][j]);

  //Reading in array b
  printf("Enter elements of the second matrix\n");
  for(i=1;i<=n;i++)
  for(j=1;j<=o;j++)
  scanf("%d",&b[i][j]);

  /*Performing the multiplication*/

  for(i=1;i<=m;i++)
  for(j=1;j<=o;j++)
  {
    c[i][j]=0;


    for(k=1;k<=n;k++)
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
  }

  /*printing the result*/
  for(i=1;i<=m;i++)
  for(j=1;j<=o;j++)
  printf(" %d ", c[i] [j]);
  printf("\n");


}
