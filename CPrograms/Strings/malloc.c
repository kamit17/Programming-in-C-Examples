/*Create an array , memory block. user enters elelemnts and then sum */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	 int n,*ptr,sum=0,i,*p; 
/*size of array is n,ptr is the pointer which points to the address of the first element of the block,p is the pointer which stores the  addressof the first byte stored in ptr so that ptr can be freed */
	 printf("Enter the size of the array:\n");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	p=ptr;/*whatever address is in ptr is initialized to p*/
	/*storing the Elements in the pointer ptr*/
	printf("Enter the Elements in the array:\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",ptr);
		sum=sum+*ptr;
		ptr++;
	}
	/*To print all the elements and the sum*/
	printf("\nArray Elements:");
	for(i=0;i<=n;i++)
	{
		printf("%d",*p);
		p++;
	}
	printf("The sum is %d",sum);
	
}



