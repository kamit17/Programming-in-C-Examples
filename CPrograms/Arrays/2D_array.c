#include<stdio.h>
int main()
{
  int arr[4][4]={
  {10,15,20,24},
  {2,4,6,8},
  {9,12,15,18},
  {6,36,216,1296}
  };
  int i,j;
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
        printf("arr[%d][%d] : %d\n",i,j,arr[i][j]);
    }
  }
}
