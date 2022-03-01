#include <cs50.h>
#include <stdio.h>

// Prototype for meow function
void meow(void);

int main(void)
{
    printf("Loops started!\n");

    int i = 0;

    while (i < 3)
    {
        printf("looping... i is: %i \n", i);
        i++;
    }

    for (int counter = 0; counter < 5; counter++)
    {
        printf("Counter: %i\n", counter);
    }

    int j = 0;

    do
    {
        meow();
        j++;
    }
    while (j < 0);
}

void meow(void)
{
    printf("meow\n");
}