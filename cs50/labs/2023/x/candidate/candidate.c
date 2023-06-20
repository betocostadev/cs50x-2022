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
  candidate president = get_candidate("Enter a candidate: ");
  printf("Created a new candidate\n");
  printf("Name: %s\n", president.name);
  printf("Votes: %i\n", president.votes);
}

candidate get_candidate(string prompt)
{
  printf("%s\n", prompt);
  candidate c;
  c.name = get_string("Enter the candidate name: ");
  c.votes = get_int("Enther the candidate number of votes: ");
  return c;
}