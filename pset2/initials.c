/*
    initials.c

    Author : Ce Barry  - cecebarry4@hotmail.com

    This file is for  pset2 of CS50 - initials

    Implement a program that, given a person’s name, prints a person’s initials, per the below.

    $ ./initials
    Regulus Arcturus Black
    RAB
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
//  Prompt a user for their name
    string name = get_string();

// Check name not NULL
    if (name != NULL)
    {
// Print the first character in uppercase
        printf("%c", toupper(name[0]));

// Prints any initial after a space in uppercase
        for (int i = 0, length = strlen(name); i < length; i++)
        {
            if (name[i] == ' ')
            printf("%c", toupper(name[i + 1]));
        }
// Returns a new line
        printf("\n");
    }
}
