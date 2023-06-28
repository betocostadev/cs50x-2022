#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
  string input = get_string("Enter a word: ");
  int input_length = strlen(input);

  for (int i = 0, n = strlen(input); i < n; i++)
  {
    if (!isdigit(input[i]))
    {
      printf("Invalid Input!\n");
      return 1;
    }
  }

  // Convert string to int
  printf("%i\n", convert(input));
}

int convert(string input)
{
  int count = strlen(input);

  // base case
  if (count == 0)
  {
    return 0;
  }

  // Get the INT of the last CHAR
  int i = input[count - 1] - '0';
  // printf("i is: %i\n", i);

  // Remove the last char
  input[count - 1] = '\0';

  // Return the converted string as int
  return i + 10 * convert(input);
}