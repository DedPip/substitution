#include "./libs/cs50.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    string key = argv[1];
    printf("%c\n", key[2]);
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    
    int key_length = strlen(key);
    char key_lower[key_length + 1];
    
    for (int i = 0; i < key_length; i++)
    {
        if (isalpha(key[i]))
        {   
            if (isupper(key[i]))
            {
                key_lower[i] = tolower(key[i]);
            }
            else 
            {
                key_lower[i] = key[i];
            }
        }
        else 
        {
            printf("The key must only contain letters!\n");
            return 1;
        }    
    }
    key_lower[key_length] = '\0';
    printf("%s\n", key_lower);
    
    for (int i = 0; i < key_length; i++)
    {
        for (int j = i + 1; j < key_length; j++)
        {
            if (key_lower[i] == key_lower[j])
            {
                printf("The key must not contain duplicate letters!\n");
                return 1;
            }
        }
    }
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