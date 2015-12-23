/* Write a program to produce the following output:
	  1
   2      3 
  4    5    6
7    8    9    10    

*/

#include<stdio.h>
int main()
{
int rowel,col,colspace=6;

for(rowel=1;rowel<=10;rowel++)
{
	if(rowel==1||rowel==2||rowel==4||rowel==7)
	{
	printf("\n");
	for(col=1;col<=colspace;col++)
	printf(" ");
	colspace=colspace-2;
	}
	printf("%4d", rowel);
	
}
printf("\n");
}


#include<stdio.h>
int main()