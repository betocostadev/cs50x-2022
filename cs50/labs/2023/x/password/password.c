// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
  string password = get_string("Enter your password: ");
  if (valid(password))
  {
    printf("Your password is valid!\n");
  }
  else
  {
    printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
  }
}

// Your function will iterate through the password that’s supplied to it as an argument.
// Since you have to find at least one lower case letter, one upper case letter, one number and one symbol, you may want to create a boolean variable for each
bool valid(string password)
{
  bool lower_case = false;
  bool upper_case = false;
  bool num = false;
  bool symbol = false;
  int pass_length = strlen(password);
  for (int i = 0; i < pass_length; i++)
  {
    if (isdigit(password[i]))
    {
      num = true;
    }
    else if (isalpha(password[i]))
    {
      if (isupper(password[i]))
      {
        upper_case = true;
      }
      else
      {
        lower_case = true;
      }
    }
    else if (!isalnum(password[i]) && !isspace(password[i]))
    {
      symbol = true;
    }
    else
    {
      // Contain spaces, should not be valid
      return false;
    }
  }
  return lower_case && upper_case && num && symbol;
}
