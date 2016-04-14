
// Program to generate a table of prime numbers

#include<stdio.h>

int main(void)
{
    int     p,d;
    _Bool isPrime; //Declared as bool  since it takes either 0 or 1

    for( p =2;p <= 50; ++p)  //Sets up a loop to cycle through 2 to 50
    {
        isPrime = 1;

        for( d =2; d < p; ++d) //divide the integers from 2 to p-1
            if( p%d == 0 )
                isPrime = 0;  //indicates that p is not longer a candidate as a prie number,

            if ( isPrime !=0 )
                printf( "%i  ",p);

    }

    printf("\n");
    return 0;
}
