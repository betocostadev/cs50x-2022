#include <stdio.h>
#include <cs50.h>

typedef struct
{
  string name;
  int votes;
} candidate;

candidate get_candidate(string prompt);

int main(void)
{
  candidate candidates_array[3];
  for (int i = 0; i < 3; i++)
  {
    candidates_array[i] = get_candidate("\nEnter a candidate");
    printf("Created candidate: %s\n", candidates_array[i].name);
  }

  printf("End\n");
}

candidate get_candidate(string prompt)
{
  printf("%s\n", prompt);
  candidate c;
  c.name = get_string("Enter the candidate name: ");
  c.votes = get_int("Enter the candidate number of votes: ");
  return c;
}
