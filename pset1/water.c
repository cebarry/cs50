/*
    water.c

    Author : Ce Barry  - cecebarry4@hotmail.com

    This file is for  pset1 of CS50 - water.
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int minutes, bottles;

    do //  user input length of shower in minutes
    {
        printf("Minutes : ");
        minutes = get_int();

    if (minutes > 0) //  calculations
        {
            bottles = (minutes * 12);
            printf("Bottles : %d\n", bottles);
        }
    }
    while (minutes <= 0);
}
