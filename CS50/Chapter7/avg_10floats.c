#include<stdio.h>

int main(void)
{
  float arr [10] , average , sum = 0 ;
  int i;

  for( i =0; i<10 ; i++)

  {
    printf("Enter the  value # %i: ",i+1);
    scanf("%f\n",&arr[i]);

    sum = sum+arr[i];
  }
average =  (float) sum /10;

printf("Average is %g\n",average);

return 0;

}
