/*
    water.c

    Author : Ce Barry  - cecebarry4@hotmail.com

    This file is for  pset1 of CS50 - water.
    
    Implement a program that reports a user’s water usage, converting minutes spent in the shower to bottles of drinking water.
    $ ./water
    Minutes: 1
    Bottles: 12

    $ ./water
    Minutes: 10
    Bottles: 120
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
