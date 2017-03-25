#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// program to encrypt user string by keyword entered in command line argument
int main(int argc, string argv[])
{
    // declare variables
    int shift;
    int KeyValue;
   
    // only accept two command line arguments
    if (argc != 2)
    {
        printf("No key or incorrect key. Please retry.\n");
        return 1;
    }

    // capture the second command line argument as a string
    string key = argv[1]; 
    
    // iterate through the key to make sure it's alphabetical
    for (int n = 0, keylength = strlen(argv[1]); n < keylength; n++)
    {
        if ((key[n] >= '0') && (key[n] <= '9'))
        {
            printf("Please enter a key with only alphabets.\n");
            return 1;
        }
    }
    
    // get the plain text
   
    string PlainText = GetString();   
    
    // encrypt - iterate over the characters in string, printing each one encrypted
    for(int i = 0, j = 0, length = strlen(PlainText); i < length; i++, j++)
    {
        // start the key again if key shorter than PlainText
        if (j >= strlen(key))
        {
            j = 0;
        }
        
   
        KeyValue = key[j]; 
        
        // skip key[j] if PlainText[i] is not an alpha character
        if (!isalpha(PlainText[i]))
        {
            j = (j - 1);
        }  
        
        // makes Aa = 0, Zz = 25 for the uppercase letters 
        if ((KeyValue >= 'A') && (KeyValue <=  'Z'))
        {
            KeyValue = (KeyValue -  'A');
        }
        
       
        if ((KeyValue >= 'a') && (KeyValue <= 'z'))
        {
            KeyValue = (KeyValue - 'a');
        }
        
        
        shift = (PlainText[i] + KeyValue);
        
     
        if (isupper(PlainText[i]) && (shift > 'Z'))
        {
            shift = (shift - 26);
        }
            
       
        if (islower(PlainText[i]) && (shift > 'z'))
        {
            shift = (shift - 26);
        }
            

        
        // if character is alphabetical, print encrypted result
        if (isalpha(PlainText[i]))
        {
            printf("%c", shift);
        }
         
       // if non-alphabetical character, print as is   
        else
        {
            printf("%c", PlainText[i]);
        }
            
    }  
    printf("\n");
    return 0;
}