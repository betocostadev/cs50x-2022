// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

char replace(char letter);

int main(int argc, string argv[])
{
  if (argc != 2)
  {
    printf("Please provide only one word!\n");
    return 1;
  }

  // printf("argc = %i\n", argc);
  for (int i = 1; i < argc; i++)
  {
    // printf("Each arg: %s\n", argv[i]);
    for (int j = 0; j < strlen(argv[i]); j++)
    {
      printf("%c", replace(argv[i][j]));
    }
  }
  printf("\n");

  return 0;
}

char replace(char letter)
{
  switch (letter)
  {
  case 'a':
  case 'A':
    return '6';
    break;
  case 'e':
  case 'E':
    return '3';
    break;
  case 'i':
  case 'I':
    return '1';
  case 'o':
  case 'O':
    return '0';
    break;
  default:
    return letter;
    break;
  }
}