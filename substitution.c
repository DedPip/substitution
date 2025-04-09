#include "./libs/cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    string original = "abc";
    string text = "ac";
    string key = "xyz";
    char new_text[strlen(text) + 1];
    int alphabet_length = 3;

    for (int i = 0, length = strlen(text); i < length; i++)
    {
        // get the number of text[i] (for i = 0 it's 'a') in the orignal alphabet (for i = 0 it's 1), 
        // printf("%i\n", length);
        int address_of_letter_in_alphabet = 0;

        for (int j = 0; j < alphabet_length; j++)
        {
            if (original[j] == text[i])
            {
                address_of_letter_in_alphabet = j;
                // printf("%i\n", address_of_letter_in_alphabet);
                new_text[i] = key[address_of_letter_in_alphabet];
                break;
            }
        }
        
    }
    new_text[strlen(text)] = '\0';

    printf("%s\n", new_text);

}