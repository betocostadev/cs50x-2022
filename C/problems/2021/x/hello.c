#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the user input and then display the answer
    string name = get_string("What's your name?\n");
    printf("hello, %s\n", name);
}