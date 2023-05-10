#include <cs50.h>
#include <stdio.h>

int main(void)
{

  int height;
  // Get height from user
  do
  {
    height = get_int("Height: ");
  } while (height < 1 || height > 8);

  // Build the pyramid
  for (int line = 0; line < height; line++)
  {
    // Print spaces
    for (int space = height - line - 2; space >= 0; space--)
    {
      printf(" ");
    }
    // Print left hashes
    for (int left = 0; left <= line; left++)
    {
      printf("#");
    }
    // Print gap
    printf("  ");
    printf("\n");
  }
}