#include <cs50.h>
#include <stdio.h>

int get_start(void);
int get_end(int start);

int main(void)
{
  int start = get_start();
  int end = get_end(start);
  printf("Start is: %i. End is: %i.\n", start, end);

  int years = 0;
  do
  {
    start += start / 12;
    printf("Actual is: %i\n", start);
    years++;
  } while (start < end);
  printf("Total years to get Llamas to %i population is %i years.\n", end, years);
}

int get_start(void)
{
  int start_number;
  do
  {
    start_number = get_int("What's the starting number of llamas? ");
  } while (start_number <= 5);
  return start_number;
}

int get_end(int start)
{
  int end_number;
  do
  {
    end_number = get_int("What's the end number of llamas? ");
  } while (end_number <= start);
  return end_number;
}