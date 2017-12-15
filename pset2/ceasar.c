/*
    caesar.c

    Author : Ce Barry  - cecebarry4@hotmail.com

    This file is for  pset2 of CS50 - caesar

	  Implement a program that encrypts messages using Caesar’s cipher, per the below.

	  $ ./caesar 13
    plaintext:  HELLO
    ciphertext: URYYB
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[])
{
	//  Check for 2 or more command line argument
	if (argc != 2)
    {
        printf("Error - Command Line Argument. Please enter a positive intiger as a key.\n");
        return 1;
    }

    // Converting a string from command line argument to integer key
    int key = atoi(argv[1]);

	// Check key for non-negative integer
	if (key <= 0)
    {
    	printf("Error - Invalid Key. Try again by entering a positive integer.\n");
		return 1;
    }

	// Get plaintext to encrypt
	string plaintext = get_string("plaintext: ");

	// Check plaintext not NULL
	if (plaintext != NULL)
	{
		printf("ciphertext: ");

		//	Encipher using user plaintext
		for (int i = 0, n = strlen(plaintext); i < n; i++)
		{
			// Check if character is an alphabetic letter
        	if (isalpha(plaintext[i]))
        	{
            	// Encryption for uppercase letter
            	if (isupper(plaintext[i]))
            	{
                	printf("%c", ((plaintext[i] - 'A' + key) % 26) + 'A');
            	}
            	// Encryption for lowercase letter
            	else
            	{
                	printf("%c", ((plaintext[i] - 'a' + key) % 26) + 'a');
            	}
        	}
        	// otherwise, just ignore it without encryption
        	else
        	{
            	printf("%c", plaintext[i]);
        	}
        }
		// Returns a new line
		printf("\n");
		return 0;
    }
}
