#include <stdio.h>
//#include<conio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
   //Simple way is create 1 D array,cascade these 1D row vector to from 2 D array,here 2,1 D will be
  // of length 3 will be cascaded 2 times to form a[2][3].Similarly for higher dimensions. 
    int a[3][2][3]={
                    {{1,2,3},
                    {4,5,6},
                    },
                    {{1,2,3},
                    {4,5,6},
                    },
                    {{1,2,3},
                    {4,5,6},
                    }
                    };

    printf("\nThe first element is %d",a[0][0][0]);
    printf("\nThe last element is %d",a[2][1][2]);
  //  getch();
    return 0;
}

