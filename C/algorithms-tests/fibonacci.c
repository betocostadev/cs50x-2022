#include <cs50.h>
#include <stdio.h>

// Recursion
// Using a Fibonacci recursive function
int fibo(int num);

int main(void)
{

  int num;

  // Prompt for the fibonacci number
  do
  {
    num = get_int("What's number you want to get the fibonacci? \n");
  } while (num < 0);

  int result = fibo(num);
  printf("The fibonacci of %i is %i . \n", num, result);
}

int fibo(int num)
{
  if (num == 0)
    return 0;

  if (num == 1)
    return 1;
  else
    return fibo(num - 1) + fibo(num - 2);
}