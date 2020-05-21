/****************************************************
Algorithm:

Sieve of Erastosthenes Algorithm
To Display All Prime Numbers Between 1 and n
Step 1: Step 2: Step 3: Step 4: Step 5: Step 6:
Define an array of integers P. Set all elements Pi to 0, 2 <= i <= n. Setito2.
If i > n, the algorithm terminates.
IfPiis0,theniisprime.
For all positive integer values of j, such that i x j ≤ n, set Pixj to 1.
Add1toiandgotostep3.
**********************************************************/

#include<stdio.h>

int main(void)
{
  int i, j, n=1500, product;
  unsigned long long int p[n];

  for(i=0; i<n; i++)
    p[i] = 0;

  i = 2;

  while (i<=n)
  {
    for ( j = 2 ; j<=n; j++)
    {
      product = i*j;
      if( product <=n)
      p[product] = i;
    }
    ++i;
  }
  p[2] = 0;
  for(i =2; i<=n;i++)
  if(p[i] == 0)
  printf("%i\n",i);

  return 0;
}
