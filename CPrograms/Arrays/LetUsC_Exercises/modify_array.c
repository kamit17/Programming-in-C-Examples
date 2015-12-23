/*Write a program which performs the following tasks:
− initialize an integer array of 10 elements in main( )
− pass the entire array to a function modify( )
− in modify( ) multiply each element of array by 3
− return the control to main( ) and print the new array elements in main( )
*/

#include<stdio.h>
int modify(int *j);
int main()
{
	int i,a[10],j;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);	
	modify(a);
	for(i=0;i<10;i++)
		printf("\n%d",a[i]);
	return 0;
}
int modify(int b[10])
{
	int c ;
	for(c=0;c<10;c++)
		//*(a+1)=*(a+1)*3;
	{
		b[c]=b[c]*3;
	}
	return b[c];

}
