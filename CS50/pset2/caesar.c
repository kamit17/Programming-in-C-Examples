#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

char encrypter( int key, char character)
{
    //if the character is not an alphabet, just return it back
    
        if (isalpha(character) ==  false)
            return character;
    //set an offset that shifts the ASCII values of the characters
    
    int offset = 0;
    
    if(islower(character))
        offset = 97;
    
    if(isupper(character))
        offset = 65;
    
    int position_i = character-offset;
    
    int encrypted_letter = ((position_i + key)%26) + offset;
    
    return encrypted_letter;

}

int main(int argc,string argv[])
{
    if( argc !=2)
    {
        printf("You did not enter any key, Please enter a key and try again\n");
        
        return 1;
    }
     int key = atoi(argv[1]);
     
     string PlainText = GetString();
     
     for(int i =0,length = strlen(PlainText);i < length; i++)
     {
         printf("%c",encrypter(key,PlainText[i]));
        
     }
 printf("\n");
 
 return 0;
}