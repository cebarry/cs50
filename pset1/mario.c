/*
    mario.c

    Author : Ce Barry  - cecebarry4@hotmail.com

    This file is for  pset1 of CS50 - mario.

    Implement a program that prints out a half-pyramid of a specified height, per the below.

    $ ./mario
    Height: 5
        ##
       ###
      ####
     #####
    ######

    $ ./mario
    Height: 3
      ##
     ###
    ####
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
// declare variables
    int height = 0;

// user input, check and ask for retry if not within requirements
    do
    {
        printf("Height: ");
        height = get_int();

        if (height == 0)
        {
            return 0;
        }
    }
    while (height < 1 || height > 23);

//print rows
    for (int i = 0; i < height; i++)
    {

// print spaces
        for (int s = 0; s < height - i - 1; s++)
        {
            printf("%s", " ");
        }

// print the '#' character
        for (int c = 0; c < i + 2; c++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
