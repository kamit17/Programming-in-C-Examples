/*Function to find the GCD of two non-negative integers and to return
the result */

#include<stdio.h>

int gcd (int u, int v)
{
  int temp;

  while (v!=0) {

/* code */
    temp = u % v;
    u =v;
    v = temp;
  }
  return u;
}

int main(void)
{
  int result;

  result = gcd(150,30);
  printf("The gcd of 150 and 30 is %i\n",result);

  result = gcd(1026,45);
  printf("The gcd of 1026 and 45 is %i\n",result);

  //result = gcd(83,230);
  printf("The gcd of 83 and 240 is %i\n",gcd(83 ,240));

  return 0;
}
