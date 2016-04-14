#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_answer();
int main(int argc, char* argv[])
{
   unsigned int n;
   int x;
   int y;
   printf("Enter a starting point: ");
   scanf("%d", &x);
   if (x < 1 || x > 1000)
   {
       printf("\nI'm sorry, that number is unrecognized or out of range, try [1-1000]: ");
       scanf("%d", &x);
   }
   else
       {
               int y = 0;
               printf("Enter an ending point: ");
               scanf("%d", &y);
               if (y > x && y <= 10000)
               {
                   print_answer();
               }
               else
               {
                   printf("\nI'm sorry, that number is unrecognized or out of range, try [x-1000]: ");
                   scanf("%d", &y);
                   return 0;

               }
           }
       }
void print_answer()
{
   int n;
   while (n > 1)
   {
       if (n % 2 == 0)
           n = n / 2;
       else
           n = 3 * n + 1;
   }
   int i = 0;
   for (i = 1; i <= n; i++);
   printf("%1d:0", n);
   //return 0;
}
