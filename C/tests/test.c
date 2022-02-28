#include <cs50.h>
#include <stdio.h>

int multiply(int num);

int main(void)
{
  // Ask for user name
  string user_answer = get_string("What's your name? ");
  printf("Hello, %s\n", user_answer);

  int user_number = get_int("Now, please choose a number to get it squared:");
  multiply(user_number);
}

int multiply(int num)
{
  int i = 0;
  int result = num;
  while (i < num)
  {
    result *= result;
    printf("\n now result is %i", result);
    i++;
  }

  printf("\nFinal result is %i\n", result);
  return result;