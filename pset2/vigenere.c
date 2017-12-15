/*
    vigenere.c

    Author : Cecilia Flora Barry  - cecebarry4@hotmail.com

    This file is for  pset2 of CS50 - vigenere

    Implement a program that encrypts messages using Vigenère’s cipher, per the below.

    $ ./vigenere ABC
    plaintext:  HELLO
    ciphertext: HFNLP
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[])
{
	//  Check for 2 command line argument or more than 2 command line argument
	if (argc != 2 || argc > 3)
    {
        printf("Error - Command Line Argument. Please enter a word entirely of alphabetical characters as a key.\n");
        return 1;
    }
    else
    {
		//  Get the key to cipher
	    string key = argv[1];

		//  Check for alphabetical characters
		for (int i = 0, n = strlen(key); i < n; i++)
        {
            if (isalpha(key[i]))
            {
            }
            else
            {   printf("Error - Argument %s is not alphabetical characters\n", key);
                return 1;
            }
        }

	// Get plaintext to encrypt
	string plaintext = get_string("plaintext: ");

	// Check plaintext not NULL
	if (plaintext != NULL)
	{
		printf("ciphertext: ");

		//	Encipher using user plaintext
			for (int i = 0, j = 0, n = strlen(plaintext); i < n; i++, j++)
			{
				if (j > strlen(key) - 1)
				{
					j = 0;
				}

				int cipher = 0;
				if (isupper(plaintext[i]))
				{
					cipher =(((plaintext[i] - 65) + (tolower(key[j]) - 97))%26) + 65;
					printf("%c", (char) cipher);
				}
				else if (islower(plaintext[i]))
				{
					cipher = (((plaintext[i] - 97) + (tolower(key[j]) - 97))%26) + 97;
					printf("%c", (char) cipher);
				}
				else
				{
                printf("%c", plaintext[i]);
				j--;
				}
			}
        }
		// Returns a new line
		printf("\n");
		return 0;
    }
}
