#include "./libs/cs50.h"
#include "ctype.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    // string lowerCaseAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    string input_text = "Hello     Bello";
    string input_key = "JWRYALZVFKQXTDHOMIECNGBUSP";

    char encrypted[strlen(input_text) + 1];
    int aplphabet_length = 26;

    for (int i = 0, length_input_text = strlen(input_text); i < length_input_text; i++)
    {
        int index_in_alphabet = tolower(input_text[i]) - 'a';

        if (isalpha(input_text[i]))
        {
            if (islower(input_text[i]))
            {
                encrypted[i] = tolower(input_key[index_in_alphabet]);
            }
            else if (isupper(input_text[i]))
            {
                encrypted[i] = toupper(input_key[index_in_alphabet]);
            }
        }
        else if (input_text[i] == ' ')
        {
            encrypted[i] = ' ';
        }
        else 
        {
            encrypted[i] = input_text[i];
        }
    }
    encrypted[strlen(input_text)] = '\0';
    printf("%s\n", encrypted);






    // string original = "abc";
    // string text = "aaabaac";
    // string key = "xYz";
    // char new_text[strlen(text) + 1];
    // int alphabet_length2 = 3;

    // for (int i = 0, length = strlen(text); i < length; i++)
    // {
    //     // get the number of text[i] (for i = 0 it's 'a') in the orignal alphabet (for i = 0 it's 1), 
    //     // printf("%i\n", length);
    //     int address_of_letter_in_alphabet = 0;

    //     for (int j = 0; j < alphabet_length2; j++)
    //     {
    //         if (original[j] == text[i])
    //         {
    //             // address_of_letter_in_alphabet = j;
    //             // printf("%i\n", address_of_letter_in_alphabet);
    //             new_text[i] = tolower(key[j]);
    //             break;
    //         }
    //     }
        
    // }
    // new_text[strlen(text)] = '\0';

    // printf("%s\n", new_text);

}