#include<stdio.h>
int main()
{
	int m,n,p,q,k,sum=0,c,d;
	int first[10][10],second[10][10],product[10][10];

	printf("Enter the size of the first array\n");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of the first array\n");
	for(c=0;c<m;c++)
		for(d=0;d<n;d++)
			scanf("%d",&first[c][d]);

	printf("Enter the size of the second array\n");
	scanf("%d%d",&p,&q);

	if(n!=p)
		printf("Matrix cannote be  multiplied with each other\n");
	else
	{
	printf("Enter the  elements of the second array\n");
	for(c=0;c<p;c++)
		for(d=0;d<q;d++)
			scanf("%d",&second[c][d]);

	for(c=0;c<m;c++)
	{
		for(d=0;d<q;d++)
		{
			for(k=0;k<p;k++)
			{
				sum=sum+first[c][k]*second[k][d];
			}
			product[c][d]=sum;
			sum=0;
		}
	}
	printf("product of entered matrices:\n");

	for(c=0;c<m;c++){
		for(d=0;d<q;d++)
			printf("%d\t",product[c][d]);
		printf("\n");
	}
	}
	return 0;
}






