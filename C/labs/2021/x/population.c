#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size = 0;
    int end_size = 0;
    int years = 0;

    // Prompt for start size
    do
    {
        start_size = get_int("Please, input the start size of the population: \n");
    }
    while (start_size < 9);

    // Prompt for end size
    do
    {
        end_size = get_int("Please, input the end size of the population: \n");
    }
    while (end_size < start_size);

    // Calculate number of years until we reach threshold
    while (start_size < end_size)
    {
        start_size = start_size + (start_size / 3) - (start_size / 4);
        years++;
        printf("Years passed: %i\n", years);
        printf("Current pop: %i\n", start_size);
    }

    // Print number of years
    printf("Years: %i", years);
}