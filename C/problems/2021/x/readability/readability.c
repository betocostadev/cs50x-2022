#include <ctype.h>
#include <math.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// a program that computes the approximate grade level needed to comprehend some text
// For this problem any period, exclamation, and question mark indicates the end of a sentence.

int count_occurencies(string text);
float calc_grade(int length, int array[]);

int total_letters = 0;
int total_words = 0;
int total_sentences = 0;

int main(void)
{
    string user_text;
    // Get the user text
    do
    {
        user_text = get_string("Text: ");
    }
    while (strlen(user_text) < 1);

    printf("Text is: %s\n", user_text);

    // Count occurencies
    count_occurencies(user_text);

    int totals[3] = { total_letters, total_words, total_sentences };

    float grade = calc_grade(3, totals);

    // printf("Grade is: %f\n", grade);
}

int count_occurencies(string text)
{
    // Count letters words and sentences
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isupper(text[i]))
        {
            total_letters++;
        }
        else if (islower(text[i]))
        {
            total_letters++;
        }
        else if (text[i] == ' ')
        {
            total_words++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            total_sentences++;
        }
    }

    total_words++;

    int occurencies[3] = { total_letters, total_words, total_sentences };

    return 0;
}

float calc_grade(int length, int array[])
{
    // Coleman-Liau index: index = 0.0588 * L - 0.296 * S - 15.8
    // L is the average number of letters per 100 words
    // S is the average number of sentences
    float L = (100 * (float) array[0] / (float) array[1]);
    float S = (100 * (float) array[2] / (float) array[1]);

    // printf("Received array is: \n");
    // printf("Number of letters is: %i\n", array[0]);
    // printf("Number of words is: %i\n", array[1]);
    // printf("Number of sentences is: %i\n", array[2]);
    float grade = 0.0588 * L - 0.296 * S - 15.8;

    // printf("Grade is: %f", (float) grade);

    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }

    return grade;
}