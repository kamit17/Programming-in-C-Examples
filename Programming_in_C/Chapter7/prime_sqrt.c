#include<stdio.h>
#include<math.h>
int main (void)
{
  int num , i;
  int FLAG = 1;

  printf("Enter any positive number\n");
  scanf("%i",&num);

  for( i = 2; i <= sqrt(num); i++)
  {
      if( num % i == 0)
      {
        FLAG = 0;
        break;
      }
  }

  if (FLAG == 1)
  {
    printf("%i is Prime number\n",num);

  }
  else{
    printf("%i is not a prime number\n",num );
  }

  return 0;
}
