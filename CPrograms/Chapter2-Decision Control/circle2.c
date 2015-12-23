#include<stdio.h>

#include<math.h>
 int main() {

int x,y,x_,y_,r,point;


printf("Please enter the coordinates of center: \n");
printf("(x,y): ");
scanf("%d%d",&x,&y);
printf("\nPlease enter the radius of circle: \n");
scanf("%d",&r);
printf("\nPlease enter the point to check: \n");
printf("(x`,y`): ");
scanf("%d%d",&x_,&y_);


point=pow(x_,2)+pow(y_,2)+pow(x,2)+pow(y,2)-(2*x_*x)-(2*y_*y)-pow(r,2);

if(point<0)
printf("\nThe point lies inside the circle.\n");

else
if(point>0)
printf("\nThe point lies outside the circle.\n");

else
if(point==0)
printf("\nThe point lies on the circle.\n");



}
