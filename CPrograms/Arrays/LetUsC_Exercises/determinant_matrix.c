/*A 6 x 6 matrix is entered through the keyboard and stored in a 2-dimensional array mat[7][7]. Write a program to obtain the Determinant values of this matrix.*/
#include<stdio.h>
int a [6][6],m;
int determinant(int mat[7][7],int a);
int main()
{
	int i,j;
	printf("\n\nEnter order of matrix: ");
	scanf("%d",&m);
	printf("\nEnter The elements of the matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n-----------Matrix A is ---------\n");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=1;j<m;j++);
		{
			printf("\t%d \t",a[i][j]);
		}
	}
	printf("\n\n");
	printf("\n Determinanat of Matrix A is %d .",determinanat(a,mat));
}

int determinant(int mat[7][7], int x);
{
	int pr,c[7][7],d=0,b[7][7],j,p,q,t;
	if(x==2)
	{
		d=0;
		d=(mat[1][1]*mat[2][2])-(mat[1][2]*mat[2][1]);
		return d;
	}
	else
	{
		for(j=1;j<x;j++)
		{
			int r=1,s=1;
			for(p=1;p<x;p++)
			{
				for(q=1;q<x;q++)
				{
					if(p!=1&&q!=j)
					{
						b[r][s]=mat[p][q];
						s++;
						if(s>x-1)
						{
							r++;
							s=1;
						}
					}
				}
			}
			forfor(t=1,pr=1;t<=(1+j);t++)
				     pr=(-1)*pr;
			     c[j]=pr*determinant(b,x-1);
			          }
		     for(j=1,d=0;j<=x;j++)
			          {
					         d=d+(mat[1][j]*c[j]);
						       }
		          return(d);
			     }
}

