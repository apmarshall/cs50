#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get amount of change that needs to be made
    float change;

    do
    {
        change = get_float("How much change?:");
    }
    while (change < 0);

    // convert float to integer
    int change_left = change * 100;

    // calculate coins needed:
    int count = 0;
    int coin_values[4] = {25, 10, 5, 1};

    for (i = 0, i < 4; i++)
    {
        if (change_left >= coin_values[i])
        {
            int coins_denom = change_left/coin_values[i];
            count += coins_denom;
            change_left = change_left%coin_values[i]);
        }
    }

    // output number of coins
    printf("%i\n", count);
}
