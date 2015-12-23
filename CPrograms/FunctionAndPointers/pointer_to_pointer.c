#include<stdio.h>
int main()
{
	int a,*b,**c;// c is pointer to a pointer
	a=100; 
	b=&a;  // b points to a by storing the address of a in b.
	c=&b;  //c  points to b by storing the address of b in b.
	printf(" Address of a: %d", &a); // display the address of a
	printf("\n Address of a: %d", b);// address of a through b
	printf("\n Address of a: %d", *c);  	/* display the address of a through c since the value at c is the address
										 	of b which holds the address of a.( C holds the value at address of b)*/
										 
	printf("\n Address of b: %d", &b); // display the  address of b 
	printf("\n Address of b: %d", c); // display the address of b in terms of c.
	printf("\n Address of c: %d", &c); // display the address of c
	printf("\n Value of a: %d", a);  //display the value of a
	printf("\n Value of b: %d", b); // dsipal the value of b
	printf("\n Value of c: %d", c); // display the value of a in terms of c
	printf("\n Value of a: %d", *b);  //display the value of a in terms of b
	printf("\n Value of b: %u", *c); //display the value of b in terms of c 
	printf("\n Value of a: %d", **c); //display the value of a in terms of c since c does not point to a directly bt thru b
	
}

//Output
/*
Address of a: 2358860
Address of a: 2358860
Address of a: 2358860
Address of b: 2358848
Address of b: 2358848
Address of c: 2358840
Value of a: 100
Value of b: 2358860
Value of c: 2358848
Value of a: 100
Value of b: 2358860
Value of a: 100
*/
