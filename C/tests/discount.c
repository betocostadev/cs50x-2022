#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
  float regular_price = get_float("Regular price: ");
  int percent_off = get_int("Percent discount: ");
  float sale = discount(regular_price, percent_off);
  printf("Sale price: %.2f\n", sale);
}

float discount(float price, int percentage)
{
  return price * (100 - percentage) / 100;
}