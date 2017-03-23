#include <stdio.h>
int main()
{
    printf("the result is : middle");
}

bool search(int value, int values[],int n)
{
    if (n ==1)
    {
        if (value == values[0])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
int middle = n/2;
const int MAX = 65536;
int half[MAX];
if(value > values[middle])
{
    int new_size = n-middle;
    if(value > values[middle])
    {
        int new_size = n-middle-1;
        for(int i =0,m =middle+1;i <new_size;i++,m++)
        {
            new_array[i] = values[m];
        }
    }
    return search(value, new_array,new_size);
}
else if (value < values[middle])
{
    int new_size = n-middle;
    for(int i = 0,m = 0; i < middle; i++,m++)
    {
        new_array[i] = values[m];
    }
    return search(vlue,new_array,new_size);
}
else if (value == values[middle])
{
    return true;
}
return false;
}

