#include <stdio.h>

int main(void)
{
    char answer1 = 'N';

    if (answer1 == 'y' || answer1 == 'Y') // >>> || <<< means "or" in English. >>> && <<< means "and" in English.
    {
        printf("I agree.\n");// if we use characters(single letter) we must use one quote, but if we use string we must use double quote.
    }
    else if (answer1 == 'n' || answer1 == 'N')
    {
        printf("I don't agree.\n");
    }
    else 
    {
        printf("Please type 'y' or 'n'.\n");
    }
}