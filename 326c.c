#include <stdio.h>
#include <string.h>

int main()
{
    char szo[100];
    int db = 0;
    int max = 0;

    printf("Adj meg szavakat, * a kilepes\n");

    do
    {
        printf("Szo: ");
        fgets(szo, sizeof(szo), stdin);

        szo[strcspn(szo, "\n")] = '\0';

        if (strcmp(szo, "*") != 0)
        {
            db++;

            int hossz = strlen(szo);
            if (hossz > max)
                max = hossz;
        }

    } while (strcmp(szo, "*") != 0);

    printf("\n%d db szot adtal meg, a leghosszabb szo %d karakter\n", db, max);

    return 0;
}