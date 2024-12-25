#include <stdio.h>

int main(void)
{
    int number = 5;

    number = number + 1;
    number += 1; // All are the same.
    number++;

    number = number - 1;
    number -= 1; // All are the same.
    number--;


    printf("Here is the number %i\n", number);
}