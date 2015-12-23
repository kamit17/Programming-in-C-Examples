#include<stdio.h>
#include<math.h>
int decimaltobinary(int num);
int main()
{

    int num,binNum;
    printf("Enter the decimal number: ");
    scanf("%d",&num);
    binNum=decimaltobinary(num);
    printf("Binary value of %d is %d",num,binNum);
    return 0;
}

int decimaltobinary(int n)
{
    int b=0,c=0;
    while(n>0)
   {
     if(n%2==1)
        {
         b+=pow(10,c);
        }
        c++;
        n=n/2;
    }
    return b;


}
/*
Description:
Step1: Getting the input from the user and storing the value in num.

Step2: calling decimaltobinary(num);function and passing num as an argument.In the above program 15 is sent as argument.

Step3: Value of num is stored in variable n which of type integer and the variables b and c are initialized to 0.

Step4: Now the condition inside the loop is checked.
      while(15>0) its true ...

Step5: If reminder obtained after dividing the number by 2 is equal to 1 then the expression b+=pow(10,c) is executed and c is incremented and expression n=n/2 is also executed.

Step6: Suppose reminder obtained in step5 is 0 then only c is incremented and expression n=n/2 is executed.
Process continues until the condition (n>0) is true.

Step7: When condition fails value in b which is binary equivalent of the decimal number is returned to the calling function and printed on the screen.
- See more at: http://tantra-jynana.blogspot.ca/2013/10/program-which-converts-decimal-number.html#sthash.M4rxXbk3.dpuf*/
