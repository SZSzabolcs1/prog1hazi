#include <stdio.h>

int main()
{
    int szam;

    printf("Milyen magas legyen? ");
    scanf("%d", &szam);

    for (int i = 1; i <= szam; i++)
    {
        for (int j = 0; j < szam - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("  ");

        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}