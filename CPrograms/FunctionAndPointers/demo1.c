#include<stdio.h>
void my_func(); // nothing is returned so no argument list.
int main()
{
	printf(" This is Main.\n");
	my_func(); // calling the function my_func.
	
}

void my_func()
{
	printf("This is my_func.");
}


