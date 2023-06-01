#include <ctype.h>
#include <math.h>
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Implement a program that encrypts messages using Caesar’s cipher.


int main(int argc, string argv[])
{
    // Get key from the user
    // If the user types more than the key, or key is not a number (string will be 0) exit.
    if (argc != 2 || atoi(argv[1]) <= 0)
    {
        printf("Usage ./caesar key\n");
        return 1;
    }

    // If it is a non-numeric key, exit.
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);

    string plaintext;
    string cyphertext;

    // Get the text from the user
    do
    {
        plaintext = get_string("plaintext: ");
    }
    while (strlen(plaintext) < 1);

    // printf("key %i\n", key);
    // printf("plaintext: %s", plaintext);

    // Store the cyphered text in an array
    int ciphered[strlen(plaintext)];
    char value;

    // Get the values of the encrypted text based in the plaintext and key (using ASCII), and add to the array
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        if (isupper(plaintext[i]))
        {
            value = (((plaintext[i] + key) - 65) % 26) + 65;
            ciphered[i] = value;
        }
        else if (islower(plaintext[i]))
        {
            value = (((plaintext[i] + key) - 97) % 26) + 97;
            ciphered[i] = value;
        }
        else
        {
            ciphered[i] = plaintext[i];
        }
    }


    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        printf("%c", ciphered[i]);
    }

    printf("\n");
    return 0;

}