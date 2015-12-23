#include<stdio.h>
int main()
{
int n;
printf("give an integer:");
scanf("%d" ,&n); /* The & is related to how parameters are passed in C. &n here means the address of the location n. Variables are stored are stored in storage locations in memory, so the computer has */
printf("the value of n is %d\n",n);
}