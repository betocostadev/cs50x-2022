#include <cs50.h>
#include <stdio.h>

string get_user_name();
int get_user_age(void);
string get_user_phone(void);

int main(void)
{
  string name = get_user_name();
  int age = get_user_age();
  string phone = get_user_phone();
  printf("Name is: %s.\nAge is: %i.\nPhone number: %s.\n", name, age, phone);
}

string get_user_name(void)
{
  string name = get_string("What's your name? ");
  return name;
}

int get_user_age(void)
{
  int age = get_int("What's your age? ");
  return age;
}

string get_user_phone(void)
{
  string user_phone = get_string("What's your phone number?");
  return user_phone;
}