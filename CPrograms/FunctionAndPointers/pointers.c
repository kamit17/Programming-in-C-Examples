#include<stdio.h>
int main()
{
	int x=10;
	int *ptr; // the pointer variable, which is going to hold the address of some variable in the program.
	ptr=&x; //passing ptr the adderss of x;
	printf("Value of x: %d\n",x);
	printf("Address of x: %d\n",&x);
	printf("Value of ptr: %d\n",ptr);
	printf("Value at the address stored in ptr: %d",*ptr);
}

/*Output
Value of x: 10 - Value of int x
Address of x: 2358852 - Address of int x
Value of ptr: 2358852-  address of the x
Value at the address stored in ptr: 10  - value of x stored at the address
*/
