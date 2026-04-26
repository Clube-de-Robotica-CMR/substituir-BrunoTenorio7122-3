#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "lib/cs50.h"

int main(int argc, string argv[])
{
    int key = 0;

    if (argc != 2)
    {
        printf("Como usar: ./substituir key\n");
        return 1;
    }

    for (int i = 0; i < (int) strlen(argv[1]); i++)
    {
        if (!isupper(argv[1][i]))
        {
            printf("Como usar: ./substituir key\n");
            return 1;
        }
        key += 1;
    }

    if(key != 26)
    {
        printf("Como usar: ./substituir key\n");
        return 1;
    }

    string plaintext = get_string("plaintext: ");
    int caracteres = strlen(plaintext);
    int cripto = 0;
    int posição_mod = 0;

    printf("ciphertext: ");

    for (int i = 0; i < caracteres; i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                posição_mod = ((int) plaintext[i]) % 65;
                cripto = argv[1][posição_mod];
                
                printf("%c", cripto);
            }

            else if (islower(plaintext[i]))
            {
                posição_mod = ((int) plaintext[i]) % 97;
                cripto = argv[1][posição_mod];

                printf("%c", cripto + 32);
            }
        }

        else
        {
            cripto = plaintext[i];
            printf("%c", cripto);
        }
    }

    return 0;
}