/*Demonstration of call by reference*/
int main()
{
	int i;	
	int marks[]={55,56,57,58,59};
	for(i=0;i<4;i++)
		disp(&marks[i]);//passing element;s address.
}
disp(int *n)
{
	printf("%d",*n);
}
