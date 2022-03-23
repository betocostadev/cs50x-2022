#include <cs50.h>
#include <stdio.h>

// Recursion
// Using a Factorial recursive function
int factorial(int num);

int main(void)
{

  int num;

  // Prompt for the factorial number
  do
  {
    num = get_int("What's number you want to get the factorial? \n");
  } while (num < 1);

  int result = factorial(num);
  printf("The factorial of %i is %i . \n", num, result);
}

int factorial(int num)
{
  if (num == 1)
    return 1;
  else
    return num * factorial(num - 1);
}