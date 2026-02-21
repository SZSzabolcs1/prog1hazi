#include <stdio.h>

int main()
{
    int szam;
    int neg= 0;
    int poz= 0;
    do
    {
        printf("Szam: ");
        scanf("%d",&szam);
        if (szam > 0)
        {
            poz++;
        }
        if (szam < 0)
        {
            neg++;
        }
        
    } while (szam != 0);
        printf("P Elemek szama: %d\n",poz);
        printf("N Elemek szama: %d",neg);
    
    return 0;
}
