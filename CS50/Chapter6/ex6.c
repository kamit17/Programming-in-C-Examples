#include<stdio.h>

int main(void)
 {
  /* code */
  int n, temp, rev=0;
  scanf("%i",&n);
  temp = n;
  while (n > 0)
  {
    rev = (rev*10)+(n%10);
    n=n/10;
  }
  //printf("%i\n",rev);
  while(rev>0)
  {
    switch (rev%10)
    {
      case 1:printf("one" );
      break;

      case 2:printf("two");
      break;

      case 3:printf("three");
      break;

      case 4:printf("four");
      break;

      case 5:printf("five");
      break;
      case 6:printf("six");
      break;
      case 7:printf("Seven");
      break;
      case 8:printf("eight");
      break;
      case 9:printf("nine");
      break;

      case 0:printf("Zero");
      break;
    }
    rev = rev / 10;
  }
  while (temp % 10 == 0)
  {
    printf("Zero");
    temp = temp / 10;
  }
  printf("\n");
  return 0;
}
