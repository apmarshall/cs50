#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf ("Error, you must provide one argument as the key");
        return 1;
    }

    int k = atoi(argv[1]);
    str input[] = get_string("Plaintext:");
    str output[];

    for (i=0; i < strlen(input); i++)
    {
        if (input[i] >= 65 && input[i] <= 90) 
        {
            output[i] = (((input[i] - 39) + k) % 26) + 65;
        }
        else if (input[i] >= 97 <= 122)
        {
            output[i] = (((input[i] - 71) + k) % 26) + 97;
        }
        else
        {
            output[i] = input[i];
        }
    }

    printf("Ciphertext: %s", output);
    return 0;    
}
