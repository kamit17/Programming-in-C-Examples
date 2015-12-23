
#include<stdio.h>
int recFibo(int a1, int a2, int num)
{
  if (num)
  {
    printf("%d ", a1);
    return recFibo(a2, a1 + a2, num - 1);
  }
  return 0;
}

int main()
{
  int number;
  printf("\n\nEnter a number: ");
  scanf("%d", &number);
  recFibo(1, 1, number);
  printf("\n\n");
  system("pause");
  return 0;
}
