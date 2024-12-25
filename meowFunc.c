#include <stdio.h>

void meow(void);
int main(void)
{
    for (int i = 0; i < 3; i++)
     {
        meow();
     }
}

void meow(void)
{
    printf("Meow!\n"); // Language C is working like up to down so we first define the function itself. But we want to main function on the top of our code. So we can referece our meow funtion with "void meow(void)".
}