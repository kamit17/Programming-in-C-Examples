/*Twenty-five numbers are entered from the keyboard into an
 array. Write a program to find out how many of them are
 positive, how many are negative, how many are even and how
 many odd.*/

#include<stdio.h>
int main()
{
	int i,arr[25],num,tn=0,tp=0,te=0,to=0;
	printf("\n Enter 25 numbers");
	for(i=0;i<25;i++)
	{
		scanf("%d",&arr[i]);
	
		if(arr[i]<0)
		
		{
			tn=tn+1;
		}
		if(arr[i]>0)
		{
			tp=tp+1;
		}

		if(arr[i]%2==0)
		{
			te=te+1;
		
		}
		if(arr[i]%2!=0)
		{
			to=to+1;
		}
	}
	printf("\n Total positive =%d\n",tp);
	printf("\n Total Negative =%d\n",tn);
	printf("\n total odd=%d\n",to);
	printf("\n total even =%d\n",te);
}
