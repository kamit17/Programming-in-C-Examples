#include<stdio.h>

int main(void)
{
  const char baseDigits[16]= {
    '0','1','2','3','4','5','6','7','8','9',
    'A','B','C','D','E','F' };

    int converterdNumber[64];
    long int numberToConvert;
    int  nextDigit , base , index = 0;

    //get the number and the base

    printf("Number to be converted?  ");
    scanf("%ld",&numberToConvert );
    printf("Base?  ");
    scanf("%i",&base);

    //convert to the indicated base

    do {
      converterdNumber[index] = numberToConvert % base;
      //printf("%i",index)
      ++index;

      numberToConvert = numberToConvert / base;
    }
    while (numberToConvert !=0);
    printf("index is %i\n",index );

    //display the results in reverse order
    printf("Converted Number =  ");
    for( --index ; index >=0; --index)
    {

      nextDigit = converterdNumber[index];
      printf("%c",baseDigits[nextDigit]);

    }

printf("\n");
return 0;

}