#include <cs50.h>
#include <stdio.h>
#include <math.h>

bool prime(int number);

int main(void)
{
  int min;
  do
  {
    min = get_int("Minimum: ");
  } while (min < 1);

  int max;
  do
  {
    max = get_int("Maximum: ");
  } while (min >= max);
  // Calls the prime function for each number
  for (int i = min; i <= max; i++)
  {
    if (prime(i))
    {
      printf("%i\n", i);
    }
  }
}

bool prime(int number)
{
  if (number < 2)
  {
    return false;
  }
  else if (number == 2)
  {
    return true;
  }
  else if (number % 2 == 0)
  {
    return false;
  }
  else
  {
    // Checks for divisibility from 3 to the square root of the number
    for (int i = 3; i <= sqrt(number); i += 2)
    {
      if (number % i == 0)
      {
        return false;
      }
    }
    return true;
  }
}
