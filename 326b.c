#include <stdio.h>

int main()
{
    int szam;
    int volt[100] = {0}; 

    printf("Adj meg szamokat 1-99, 0 a kilepes: \n");

    do
    {
        printf("Szam: ");
        scanf("%d", &szam);

        if (szam == 0)
            break;

        if (szam < 1 || szam > 99)
        {
            printf("Ez a szam nem megfelelo!\n");
        }
        else
        {
            volt[szam] = 1;
        }

    } while (1);

    
    int db = 0;
    for (int i = 1; i <= 99; i++)
    {
        if (volt[i])
            db++;
    }

    printf("\n%d db kulonbozo szam lett megadva.\n", db);

    
    printf("Ezek novekvo sorrendben: ");
    int elso = 1;
    for (int i = 1; i <= 99; i++)
    {
        if (volt[i])
        {
            if (!elso)
                printf(", ");
            printf("%d", i);
            elso = 0;
        }
    }

    printf("\n");

    return 0;
}