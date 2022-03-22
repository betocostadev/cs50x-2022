#include <cs50.h>
#include <stdio.h>

int bin_search(int array[], int arr_size, int target);

// Binary Search Algorithm
// ARRAY MUST BE SORTED
int main(void)
{

  int num_to_search;
  int numbers[] = {6, 7, 8, 9, 10, 11, 14, 15, 17, 19, 22, 23, 25, 28, 30};
  // Prompt for the number to search
  do
  {
    num_to_search = get_int("What's number you want to search? \n");
  } while (num_to_search < 0);

  printf("Looking for the number %i \n", num_to_search);
  // Get the length of the array
  int numbers_size = sizeof(numbers) / sizeof(int);

  int result = bin_search(numbers, numbers_size, num_to_search);
  if (result == -1)
  {
    printf("The number you are looking for is not in the array \n");
  }
  else
  {
    printf("Found the number you are looking for in the array! \n");
    printf("The number %i is in the %i position of the array. \n", num_to_search, result);
  }
}

int bin_search(int array[], int arr_size, int target)
{
  // Set the lowest and highest pointers in the array
  int low = 0;
  int high = arr_size;

  while (low <= high)
  {
    // Calculate the midpoint to search
    int midpoint = low + (high - low) / 2;
    printf("midpoint is: %i \n", midpoint);
    // If the midpoint is == target, return
    // If the target is lower than the midpoint set high to midpoint - 1
    // Else set the low to midpoint + 1
    if (array[midpoint] == target)
      return midpoint;
    else
    {
      if (target < array[midpoint])
        high = midpoint - 1;
      else
        low = midpoint + 1;
    }
  }
  return -1;
}