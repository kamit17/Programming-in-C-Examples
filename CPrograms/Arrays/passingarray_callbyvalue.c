/*In this method of calling a function, the actual argument gets copied into formal arguments.Here the actual argument is arr[x] and the formal parameter is ch.*/
#include<stdio.h>
disp(char ch)
{
	printf("%c",ch);
}
int main()
{
	char arr[]={'a','b','c','d','e','f','g','h','I','J','k','l','m'};
	for(int x=0;x<=10;x++)
	{
		/*passing each element one by one using subscript*/
		disp(arr[x]);
	}
	return 0;
}
