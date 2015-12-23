#include<stdio.h>
#include<stdlib.h>
int main()
{
	    int i=0, size; // size of array
	        int k=0;       // counter

		    printf("enter size of array\n");
		        scanf("%d", &size);                    // ask user for desired size
			    int *arr = malloc(size * sizeof(int)); // allocate memory for array

			        printf("\n Enter 10 positive integers: \n"); // fill your array of size size
				   for(k=0;k<size;k++)
			       		scanf("%d",&arr[k]);

			   	 k = 0;                           // reset this counter
			  
			for(i=0; i<size/2; i++)          // check only for half of it
			 {
			  if(arr[i] == arr[size-i-1])   // try it with paper and pincil
			        {
		           printf("match arr[%d]=arr[%d]=%d\n", i,size-i-1, arr[i]);
		
	k++;
				}
			}

			    if(k==0) printf("No matching");
			    return 0;
}
