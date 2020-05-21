#include <stdio.h>

void transposeMatrix(int matrixM[][5],int matrixN[][4])
{
  int i,j;

  i=0;
  j=0;

  for (i=0;i<4;i++) {
    for(j=0;j<5;j++){
      matrixN[j][i]=matrixM[i][j];
    }
  }
}

int main (void)
{
  int i,j;

  int matrixM[4][5] = {
  {12,25,47,87,54},
  {16,89,78,63,58},
  {45,21,47,62,82},
  {14,56,47,41,98}
};

  int matrixN[5][4];
  transposeMatrix(matrixM,matrixN);


  i=0;
  j=0;

  for(j=0;j<5;j++){
    for (i=0;i<4;i++){
      printf("%i    ",matrixN[j][i] );
    }
    printf("\n");
  }

  return 0;
}
 
