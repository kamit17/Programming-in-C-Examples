/*(a) How will you initialize a three-dimensional array threed[3][2][3]? 
  How will you refer the first and last element in this array?
  */
#include<stdio.h>
int main()
{
	int threed[3][2][3]={{{100,2,3},{1,2,3}};{{7,8,6},{7,6,6}},{{2,3,4},{3,3,4}}};
	int *f,*l;
	f=&threed[0][0][0]; //reference to the first element
	i=&threed[2][1][2]; //reference to the last element
	printf("%d",*f);
	printf("%d",*i);
}
