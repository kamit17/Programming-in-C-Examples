#include<stdio.h>
#include<math.h>

int main()
{
int x,y,r,d;
printf("\nEnter the value of x and y:");
scanf("%d %d",&x,&y);
printf("Enter the radius:");
scanf("%d",&r);
d=sqrt(x*x+y*y);
if(d>r)
printf("\nPoint is outside");
else if(d==r)
printf("\nPoint is on the circle");
else if(d<r)
printf("\nPoint lies inside the circle");

return 0;
}