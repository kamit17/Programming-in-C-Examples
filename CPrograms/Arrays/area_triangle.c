/*The area of a triangle can be computed by the sine law when 2 sides of the triangle and the angle between them are known.
Area = (1 / 2 ) ab sin ( angle )
Given the following 6 triangular pieces of land, write a program to find their area and determine which is largest
 */
#include<stdio.h>
#include<math.h>
int main()
{
	float arr[6][3];
	int i,j,d;
	float area,c=0;
	for(i=0;i<6;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nKey in the [%d][%d] value",i+1,j+1);
			scanf("%f",&arr[i][j]);
		}
	}
	for(i=0;i<6;i++)
	{
		area=(1.0/2.0)*arr[i][0]*arr[i][1]*sin(arr[i][2]);

				if(area>c)
				{
				printf("\n");
				c=area;
				d=i;
				}
				}
				printf("\n the Biggest plot of land is %d with area %f",d+1,c);
				}
