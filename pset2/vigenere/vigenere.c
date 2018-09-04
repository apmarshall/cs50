#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // check for proper number of cli arguments
    if (argc != 2)
    {
        printf ("Error, you must provide one argument as the key");
        return 1;
    }

    //convert argument to integer
    str key_str[] = argv[1];
    str input[] = get_string("Plaintext:");

    if (strlen(input) > strlen(key_str))
    {
        for(i=0, j=strlen(input)/strlen(key_str); i<j; i++)
        {
            key_str = key_str + key_str;
        }
        for (i=0, j=strlen(input), k=j%strlen(key_str); i<=k; i++)
        {
            key_str[i+j] = key_str[i];
        }
    }

    int k[];

    for (i=0, j=strlen(key_str); i<j; i++)
    {
         if (key_str[i] >= 65 && <= 90) 
        {
            k[i] = (key_str[i] - 39) % 26;
        }
        else if (key_str[i] >=97 && <= 122) 
        {
            k[i] = (key_str[i] - 71) % 26;
        }
    }
    
    str output[];
   
    for (i=0, j=strlen(input); i < j; i++)
    {
        if (input[i] >= 65 && input[i] <= 90) 
        {
            output[i] = (((input[i] - 39) + k[i]) % 26) + 65;
        }
        else if (input[i] >= 97 <= 122)
        {
            output[i] = (((input[i] - 71) + k[i]) % 26) + 97;
        }
        else
        {
            output[i] = input[i];
        }
    }

    printf("Ciphertext: %s", output);
    return 0;    
}