#include "./libs/cs50.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
    }
    else
    {  
        string input_text = get_string("plaintext:  ");
        string input_key = argv[1];

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
        printf("ciphertext: %s\n", encrypted);
    }
}