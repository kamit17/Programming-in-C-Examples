/*The expression p/primes[i] >=primes[i] is used in the innermoset for loop to ensure that the value of p does not exceed the sqaure root of primes[i]*/

#include<stdio.h>
#include<stdbool.h>

int main (void)
{
  int p,i, primes[50], primeIndex = 2; //primeIndex is the next free slot in the primes Array
  bool isPrime;

  primes[0]=2;
  primes[1] = 3;

  for(p=5; p <= 50; p = p + 2) //loop for running through odd integers from 5 to 50 .
  {
    printf("%i\n",p);
    int isPrime = true; //Boolean variable set to 0

    for (i = 1; p / primes[i] >= primes[i]; ++i) // Successively divides the value of p by all the previously genreated prime numbers that are stored in the prime Array
    printf("%i,%i\n",p, primes[i]/*primeIndex*/);
      if( p % primes[i] == 0)
          isPrime = false ;

      if( isPrime == true)
      {
        primes[primeIndex] = p;
        ++primeIndex;
      }
    }
      for(i=0; i < primeIndex ; ++i)
        //printf("%i\n", p);
        printf("%i ",primes[i] );
        printf("\n");

        return 0;
  }
