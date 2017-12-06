/*
    greedy.c

    Author : Ce Barry  - cecebarry4@hotmail.com

    This file is for  pset1 of CS50 - greedy

    Implement a program that calculates the minimum number of coins required to give a user change
    $ ./greedy
    O hai! How much change is owed?
    0.41
    4
*/

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main ()
{
// declare variables
    float amount;
    int coins, cents;

//  user input
    do
    {
        printf("O hai! How much change is owed?\n");
        amount = get_float();
    }
    while (amount <= 0);

// amount convert into cents
    cents = (int) round (amount * 100);

// Initialize coins
    coins = 0;

// Quarters
    coins += cents / 25;
    cents %= 25;

// Dimes
    coins += cents / 10;
    cents %= 10;

//  Nickels
    coins += cents / 5;
    cents %= 5;

// Pennies
    coins += cents;

// Print Result
    printf("%i\n", coins);

    return 0;
}
