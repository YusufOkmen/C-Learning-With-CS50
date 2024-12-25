#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(10);
}


void meow(int n)
{
    int i = 0;

    while (i < n)
    {
        printf("Meow!\n");
        i++;
    }
}