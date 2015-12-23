/*Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis 
or at the origin, viz. (0, 0).*/
# include<stdio.h> 
#include<ctype.h>

int main() 
{ 
int x,y; 
printf("\nEnter the x and y coordinates of a point:"); 
scanf("%d \n %d",&x,&y); 
if(x == 0 && y == 0) 
printf("Point lies on origin \n"); 
else if(x == 0 && y!= 0) 
printf("\nPoint lies on y axis \n"); 
else if(x!=0 && y==0) 
printf("\nPoint lies on X axis \n");
else 
printf("\nPoint dose not lie on any axis, nor origin \n"); 
} 