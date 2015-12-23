//#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
 int a[10][10],i,j,m;
 //clrscr();
 printf("Enter order of square matrix: ");
 scanf("%d",&m);
 for(i=1;i<=m;i++)
 {
  for(j=1;j<=m;j++)
  {
   printf("Enter value of a[%d][%d]: ",i,j);
   scanf("%d",&a[i][j]);
  }
 }
 for(i=1;i<=m;i++)
 {
  for(j=1;j<=m;j++)
  {
   if(a[i][j]!=a[j][i])
   {
    printf("\n\nMatrix is not symmetric");
    exit(0);
   }
  }
 }
 printf("\n\nMatrix is symmetric");
 //getch();
 }

//Read more: http://www.noexit4u.com/2013/02/c-program-to-check-whether-matrix-is.html#ixzz3t1TffPa3
