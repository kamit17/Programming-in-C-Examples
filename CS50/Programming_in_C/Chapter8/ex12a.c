#include<stdio.h>


void tranposeMatrix (int a[4][5], int b[5][4])
{
  int row, column;

  for (row = 0; row <4; row++){
    for(column = 0; column<5;column++){
      a[row][column] = b[column][row];
}
}
}
int main(void)
{
  int  a,b;
  int M[4][5] = {
    {7,16,55,13,12},
    {12,10,52,1,7},
    {-2,1,2,4,9},
    {5,6,7,9,10}
  };

  int N[5][4];

  printf("Matrix before transpose :\n");
  for(a = 0; a<4;a++)
  {
    for(b=0; b<5;b++)
      printf("%5i",M[a][b]);
      printf("\n");
    }
  tranposeMatrix(M,N);

  printf("Matrix after transpose:\n");

  for( a=0;a<5;++a)
  {
      for(b=0;b<4;++b){
        printf("%5i",N[a][b]);
}
        printf("\n");

  }
  return 0;
}
