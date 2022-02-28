#include <cs50.h>
#include <stdio.h>

float calc_average(int length, int array[]);
int get_positive_int(string user_input);

int main(void)
{
  const int TOTAL_SCORES = get_positive_int("What's the number of scores? ");

  int scores[TOTAL_SCORES];

  printf("The scores array length should be: %i\n", TOTAL_SCORES);
  for (int i = 0; i < TOTAL_SCORES; i++)
  {
    scores[i] = get_positive_int("Please, give the score: ");
  }

  printf("The average is: %f\n", calc_average(TOTAL_SCORES, scores));
}

// function to calculate the average
float calc_average(int length, int array[])
{

  int sum = 0;

  for (int i = 0; i < length; i++)
  {
    sum += array[i];
  }
  return sum / (float)length;
}

// function to get a positive int between 0 and 100
int get_positive_int(string user_input)

{
  int number;
  do
  {
    number = get_int("%s", user_input);
  } while (number < 0 || number > 100);

  return number;
}