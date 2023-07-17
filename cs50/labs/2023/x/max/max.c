// Practice writing a function to find a max value

#include <cs50.h>
#include <stdio.h>

int max(int array[], int n);

int main(void)
{
  int n;
  do
  {
    n = get_int("Number of elements: ");
  } while (n < 1);

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    arr[i] = get_int("Element %i: ", i);
  }

  printf("The max value is %i.\n", max(arr, n));
}

// TODO: return the max value
int max(int array[], int n)
{
  // If no elements, return 0
  if (n < 1)
  {
    return 0;
  }

  // Store the value and start with the first number of the array
  int max = array[0];
  // Get the max value
  for (int i = 0; i < n; i++)
  {
    if (array[i] > max)
    {
      max = array[i];
    }
  }
  return max;
}
