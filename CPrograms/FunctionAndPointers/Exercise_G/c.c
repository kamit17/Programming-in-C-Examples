#include<stdio.h>
int main()

{
int i = 4, j = 2 ;
junk ( &i, j ) ;
printf ( "\n%d %d", i, j ) ;
}
 int junk ( int *i, int j )
{
*i = *i * *i ;
j = j * j ;
}
