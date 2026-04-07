#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n, also, felso;

    printf("Hany db random szamot kersz? ");
    scanf("%d", &n);

    printf("Also hatar: ");
    scanf("%d", &also);

    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso);

    int tartomany = felso - also + 1;

    
    if (n > tartomany)
    {
        printf("Nincs eleg kulonbozo szam ebben a tartomanyban!\n");
        return 1;
    }

    int szamok[n];
    int db = 0;

    srand(time(NULL));

    while (db < n)
    {
        int uj = rand() % tartomany + also;

        int van = 0;
        for (int i = 0; i < db; i++)
        {
            if (szamok[i] == uj)
            {
                van = 1;
                break;
            }
        }

        if (!van)
        {
            szamok[db] = uj;
            db++;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (szamok[j] > szamok[j + 1])
            {
                int tmp = szamok[j];
                szamok[j] = szamok[j + 1];
                szamok[j + 1] = tmp;
            }
        }
    }

    printf("A generalt szamok: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", szamok[i]);
    }
    printf("\n");

    return 0;
}