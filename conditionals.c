#include <stdio.h>

int main(void)
{
    int x = 5;

    int y = 5;

    if (x > y)
    {
        printf("x is greater than y\n");
    }
    else if (x < y)
    {
        printf("y is not grater than x\n");
    }
    else
    {
        printf("y is equal to x\n");
    }
}