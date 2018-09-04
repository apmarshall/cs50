# include <cs50.h>
# include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("How high should the pyramid be?:");
    }
    while (n < 0 || n > 23);

    for (i=0; i<n; i++ ) 
    {
        // print spaces
        for (j=0; j<n-i; j++ )
        {
            printf(" ");
        }
        // print hashes
        for (j=0; j<i; j++)
        {
            printf("#");
        }
        // print gap
        printf("  ");
        // print hashes
        for (j=0; j<i; j++)
        {
            printf("#");
        }
        // start new line
        printf("\n");
    }
}
