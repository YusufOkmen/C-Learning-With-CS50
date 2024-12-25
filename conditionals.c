#include <stdio.h>

int main(void)
{
    int x = 5;

    int y = 5;

    if (x > y)
    {
        printf("x is more than y\n");
    }
    else if (x < y)
    {
        printf("y is not more than x\n");
    }
    else
    {
        printf("y is equal to x\n");
    }
}