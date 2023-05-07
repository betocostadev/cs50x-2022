#include <cs50.h>
#include <stdio.h>

int main(void)
{
  // TODO: Prompt for start size
  int min;
  do
  {
    min = get_int("Start size: ");
  } while (min < 8);

  // TODO: Prompt for end size
  int max;
  do
  {
    max = get_int("End size: ");
  } while (min >= max);

  // TODO: Calculate number of years until we reach threshold
  int years = 0;
  while (min < max)
  {
    min = min + (min / 3) - (min / 4);
    years++;
  }

  // TODO: Print number of years
  printf("Years: %i\n", years);
}
