#include <stdio.h>

int main()
{
    int szam;
    int total= 0;
    do
    {
        printf("Szam: ");
        scanf("%d",&szam);
        if (szam > 0)
        {
            total++;
        }
        
        
    } while (szam != 0);
        printf("P Elemek szama: %d",total);
    
    return 0;
}
