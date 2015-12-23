/* Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the
 three points fall on one straight line.*/
 #include<stdio.h>
 int main()
 {
 int x1,y1,x2,y2,x3,y3,m1,m2;
 printf("enter the values of the coordinates of the first point");
 scanf("%d %d", &x1,&y1);
 printf("enter the values of the  coordinates of the second point");
 scanf("%d%d",&x2,&y2);
 printf("enter the values of the coordinates of the third point");
 scanf("%d%d",&x3,&y3);
 m1=(y2-y1)/(x2-x1);
 printf(" the first slope is %d \n",m1);
 m2=(y3-y2)/(x3-x2);
 printf(" the second slope is %d \n",m2);
 if(m1==m2)
 printf("the points lie on the same line \n");
 else
 printf("the points do not lie on the same line \n");
 
 }