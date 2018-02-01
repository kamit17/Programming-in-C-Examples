#include<stdio.h>
int main()
{
	int a,b,c,d,first[10][10],second[10][10],sum[10][10];
	printf("enter the rows and columns of the matrix:\n");
	scanf("%d%d",&a,&b);
	printf("Enter the elements of the first matrix:\n");

	for(c=0;c<a;c++)
		for(d=0;d<b;d++)
			scanf("%d",&first[c][d]);
	printf("Enter the second matrix\n");

	for(c=0;c<a;c++)
		for(d=0;d<b;d++)
			scanf("%d",&second[c][d]);

	printf("Sum of both the matrices:\n");

	for(c=0;c<a;c++){
		for(d=0;d<b;d++){
			sum[c][d]=first[c][d]+second[c][d];
	printf("%d\t",sum[c][d]);
}
printf("\n");
}
return 0;
}
