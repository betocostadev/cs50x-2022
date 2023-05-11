#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float change_owed;
    int coins = 0;

    // Get change owned
    do
    {
        change_owed = get_float("Change owed: ");
    } while (change_owed < 0.00999);

    // Convert cents to int
    int cents = round(change_owed * 100);

    // Select the correct coins to give to the user while there is still change to be given
    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        else if (cents <= 24 && cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        else if (cents <= 9 && cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        else
        {
            cents -= 1;
            coins++;
        }
    }
    printf("%i\n", coins);
}