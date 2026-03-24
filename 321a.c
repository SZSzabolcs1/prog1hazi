#include <stdio.h>

#define SIZE 27

void feltolt(char tomb[])
{
    for (int i = 0; i < SIZE; ++i)
    {
        tomb[i] = 'a' + i;
    }
    tomb[26] = '\0';
}

int main()
{
    char abc[SIZE];

    feltolt(abc);

    puts("Az angol abc:");
    printf("%s\n", abc);

    return 0;
}