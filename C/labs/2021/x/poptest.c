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
    float current_size = start_size;

    for (int counter = 0; current_size < end_size; counter++)
    {
        current_size = current_size + (current_size / 3) - (current_size / 4);
        years++;
        printf("Years passed: %i\n", years);
        printf("Current pop: %i\n", (int) current_size);
    }

    // Print number of years

    // printf("Start size: %i\n", start_size);
    // printf("End size: %i\n", end_size);
    printf("Years: %i", years);
}