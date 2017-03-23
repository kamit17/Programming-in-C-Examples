#include <stdio.h>
#include <string.h>

int main()
{
  int numbers[100],Key,n,i;

  printf("Enter the number of Elements in the array");
  scanf("%i", &n);

  printf("Enter the %i integers\n",n);

  for( i=0; i<n; i++)
    scanf("%i",&numbers[i]);

  printf("Enter the Key");
  scanf("%i",&Key);

  for(i=0; i<n ; i++)
  {
    if(numbers[i]==Key)
    {
      printf("The element %i is present at %i location",Key,i+1);
      break;
    }
  }
    if(i==n)
     printf("The require number is not present in the list");

     return 0;

}
