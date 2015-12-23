/*program to find if roots are real ,complex or distinct*/
#include <stdio.h>
 int main()
{
float a,b,c,r1,r2,y,z,w;
scanf("%f%f%f",&a,&b,&c);
y=b*b-4*a*c;
if(y==0)
printf("Equal roots\n");
else
if(y<0)
printf("complex roots\n");
else 
printf("two distinct roots\n");

} 