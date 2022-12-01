#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //check command line argument
    if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string key = argv[1];

    for(int i = 0; i < strlen(key); i++)
    {
        if(isalpha(key[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else printf("Success!\n");
    }

    //get plaintext
    string plaintext = get_string("Plaintext: ");
    int k = atoi(key);
    
    //encrypt plaintext
    printf("Ciphertext: ");
    for(int i = 0; i < strlen(plaintext); i++)
    {
        if(isupper(plaintext[i]))
        {
            printf("%c", ((plaintext[i] + k - 65) % 26 + 65));
        }
        else if(islower(plaintext[i]))
        {
            printf("%c",((plaintext[i] + k - 97) % 26 + 97));
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}
