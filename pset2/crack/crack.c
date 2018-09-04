#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, string argv[])
{
    // prompt user for hash
    if(strlen(argv) != 2)
    {
        printf("Usage: ./crack hash");
        return 1;
    }

    // create array with up to 6 characters
    str guess[6] = \0;

    // get salt from provided hash
    str salt[3] = [argv[0], argv[1], \0];

    // create variable for our hashed guesses
    str guess_hashed = crypt(guess, salt);

   // solution: if (guess_hashed == hash) return guess
    if (guess_hashed = argv)
    {
        printf("%s\n", guess);
        return 0;
    }
    else
    {
        // else: iterate over possible guesses
        // iteration: start with 1-character passwords, then increase number of characters until solution found
        // to-do: change to a while loop instead of a for loop so that we can increment j only if the guess is wrong
        str letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        for (i=0; i<6; i++)
        {
            for(j=0; j<52; j++)
            {
                guess[i] = letters[j];
                guess[i+1] = \0;
            }
        }
    }
}