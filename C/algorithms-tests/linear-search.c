#include <cs50.h>
#include <stdio.h>

int search(int array[], int arr_size, int target);

// Linear Search Algorithm
int main(void)
{

  int num_to_search;
  int numbers[] = {9, 10, 22, 39, 30, 94, 92, 83, 1, 3, 5, 0, 2, 15, 6, 3, 21, 19, 7, 8, 4, 11, 12, 13, 14, 17};
  // Prompt for the number to search
  do
  {
    num_to_search = get_int("What's number you want to search? \n");
  } while (num_to_search < 0);

  printf("Looking for the number %i \n", num_to_search);
  // Get the length of the array
  int numbers_size = sizeof(numbers) / sizeof(int);

  int result = search(numbers, numbers_size, num_to_search);
  if (result == -1)
  {
    printf("The number you are looking for is not in the array \n");
  }
  else
  {
    printf("Found the number you are looking for in the array! \n");
  }
}

int search(int array[], int arr_size, int target)
{
  printf("search called \n");

  for (int i = 0; i < arr_size; i++)
  {
    if (i == target)
      return target;
  }
  return -1;
}