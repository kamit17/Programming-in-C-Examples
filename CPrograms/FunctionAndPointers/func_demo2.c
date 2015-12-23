/*How to pass value from called function to calling function*/
#include<stdio.h>
int add(int, int);
int main()
{
	int a,b;
	int result;
	printf("Enter the numbers: ");
	scanf("%d%d",&a,&b);
	result = add(a,b);
	printf("\n The Result of addtion operation is : %d",result);
	
}

int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
