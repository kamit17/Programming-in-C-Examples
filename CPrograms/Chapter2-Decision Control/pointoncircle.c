/*Given the coordinates (x, y) of a center of a circle and it’s radius, write a program 
which will determine whether a point lies inside the circle, on the circle or outside 
the circle.
(Hint: Use sqrt( ) and pow( ) functions)*/


#include<stdio.h>
int main() 
{
int x,y;

printf("Enter co-ordinate(x1,y1)to check position: ");
scanf("%d%d",&x,&y);

if(x==0&&y==0)
printf("\nPoint lies on the origin ");
else if(x==0&&y!=0)
printf("\nPoint lies on the y-axis ");
else
printf("\nPoint lies on the x-axis ");


return 0; 

}
