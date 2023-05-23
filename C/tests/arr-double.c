#include <stdio.h>
#include <cs50.h>

int main(void)
{
  printf("Array double\n");

  // Get the length of the array from the user
  int length;
  do
  {
    length = get_int("How many elements? - Between 1 and 31.\n");
  } while (length < 1 || length > 31);

  // Initiate the array with the length provided
  int double_numbers[length];

  printf("Length: %i\n", length);
  printf("=====Result======\n");

  // Print the first result, before manipulating the next elements 1 x 1 = 1
  double_numbers[0] = 1;

  printf("%i\n", double_numbers[0]);

  // calculate the position before the index times 2
  for (int i = 1; i < length; i++)
  {
    double_numbers[i] = 2 * double_numbers[i - 1];
    printf("%i\n", double_numbers[i]);
  }
}