#include<stdio.h>

int  main() {

int i,j,a[5][5];


printf("\nType the numbers to in matrix:\n");

for(i=0;i<5;i++) {

for(j=0;j<5;j++) {

scanf("%d",&a[i][j]);

}
 }



printf("matrix you entered is:\n\n");

for(i=0;i<5;i++) {

for(j=0;j<5;j++) {

printf(" %2d ",a[i][j]);

}

printf("\n");

}

/* finding the largest number */

for(i=0;i<5;i++) {

for(j=0;j<5;j++) {

if(a[0][0]<a[i][j])      /* if number is larger than first element */

a[0][0]=a[i][j];          /* larger number is placed as the first element */


}

}



printf("\n\nThe largest number in matrix is: %d",a[0][0]);



}

