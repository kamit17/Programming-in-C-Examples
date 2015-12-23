#include<stdio.h>
#include<math.h>
int distance(int, int , int, int, int, int);
float area(float, float, float);

int main()
{
int x1, x2, x3, y1, y2, y3, p1, p2, ap, bp, cp, abc;
printf("Please Enter The 3 points co-rdinate \t");
scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
printf("The distance Betwwen points as follows\n");
abc = distance(x1, y1, x2, y2, x3, y3);
printf("Checking is point lies inside the traingle\n");
printf("Please Enter The Co-rdinate of the point\t");
scanf("%d %d", &p1, &p2);

ap = distance(p1, p2, x2, y2, x3, y3);
bp = distance(x1, y1, p1, p2, x3, y3);
cp = distance(x1, y1, x2, y2, p1, p2);

if ((ap+bp+cp)== abc)
printf("1\n");
else
printf("0\n");
}

int distance(int x1, int y1, int x2, int y2, int x3, int y3)
{
float a, b, c, area1;
a = sqrt(((y2-y1)*(y2-y1))+ ((x2-x1)*(x2-x1)));
b = sqrt(((y2-y3)*(y2-y3))+ ((x2-x3)*(x2-x3)));
c = sqrt(((y3-y1)*(y3-y1))+ ((x3-x1)*(x3-x1)));
printf("a = %f, b = %f , c= %f\n", a, b, c);
area1 = area(a, b, c);
//printf("Area of Triangle is %f\n", area1);
return area1;
}

float area(float a, float b, float c)
{
float arg, area2;
arg = (a+b+c)/2.0;
area2 = sqrt(arg*(arg-a)*(arg-b)*(arg-c)) ;
return area2;
}
