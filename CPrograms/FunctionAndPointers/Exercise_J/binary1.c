#include<stdio.h>
long binary(long a)
{
int binaryNum;
	 while(a!=0)
	 {
		int num=a%2;
		a=a/2;
		printf("%d", num);
	 }
}
int main()
{
	long no;
	 //long binaryNum;
	printf("\n Enter a  number:");
	scanf("%ld",&no);
	printf("binary equivalent of  %ld is :", no);
	//binaryNum=binary( no);
	binary(no);
	return 0;
}
