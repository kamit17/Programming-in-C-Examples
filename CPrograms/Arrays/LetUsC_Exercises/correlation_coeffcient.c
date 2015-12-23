/*For the following set of n data points (x, y), compute the correlation coefficient r, given by*/
#include<stdio.h>
#include<math.h>
int main()
{
	float x[100],y[100],xy[100],xsquare[100],ysquare[100];
	float xsum,ysum,xysum,xsqr_sum,ysqr_sum;
	float r,num,deno;
	int n,i;

	xsum=ysum=xysum=xsqr_sum=ysqr_sum=0;

	/*get the number of entries from the user*/
	printf("Enter the valuye of n");
	scanf("%d",&n);

	/*get the values of x and y from the user*/
	printf("Enter the values of x and y:\n");
	for(i=0;i<n;i++)
	{
		printf("x[%d]and y[%d]",i,i);
		scanf("%d%d",&x[i],&y[i]);
	}

	/*fint the needed data to manipulate the correlation coef*/

	for(i=0;i<n;i++)
	{
		xy[i]=x[i]*y[i];
		xsquare[i]=x[i]*x[i];
		ysquare[i]=y[i]*y[i];
		xsum=xsum+x[i];
		ysum=ysum+y[i];
		xysum=xysum+xy[i];
		xsqr_sum=xsqr_sum+xsquare[i];
		ysqr_sum=ysqr_sum+ysquare[i];
	}
	num=1.0*((n*xysum)-(xsum*ysum));
	deno=1.0*((n*xsqr_sum-xsum*xsum)*(n*ysqr_sum-ysum*ysum));

	/*calculate correlation coefficinet*/

	r=num/sqrt(deno);

	/*print the result*/
	printf("Correlation Coefficient :%.4f\n",r);
	return 0;
}


