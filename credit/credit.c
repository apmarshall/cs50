#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // prompt user for credit card number
    long long ccn;
    do 
    {
        ccn = get_long_long("Please enter a credit card number:");
    }
    while (ccn < 0);

    // check1: validate length
    if (ccn < 1000000000000 || ccn > 9999999999999999)
    {
        printf("INVALID\n");
        break
    }
    // check2: validate checksum
    else
    {
        // construct array of every other digit starting with second to last
        // use ccn%100 - ccn%10 as model to construct array, need a for-loop
        // multiply every element of array by 2 and sum products

        // construct array of every other digit starting with last digit
        // add the sum of the digits
        // add to sum from previous step

        // if total%10 == 0, ccn is valid
    }

    // check 3: validate (and return) provider
}
