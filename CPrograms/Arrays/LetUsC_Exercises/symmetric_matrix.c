#include<stdio.h>

int main()
{
int m,n,c,d,matrix[10][10],tranpose[10][10];

printf("Enter the number of rows and columns of the matrix:\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of the matrix\n");

for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&matrix[c][d]);
for(c=0;c<m;c++)
{
        for(d=0;d<n;d++)
        {
                tranpose[d][c]=matrix[c][d];
        }
}
if(m==n) /*check if order is same*/
{
        for(c=0;c<m;c++)
        {
                for(d=0;d<n;d++)
                {
                        if(matrix[c][d]!=tranpose[c][d])
                                break;
                }
                if(d!=m)
                        break;
        }
        if(c==m)
                printf("Symmetric Matrix.\n");
}
else
printf("Not a  symmetric Matrix\n");
return 0;
}
