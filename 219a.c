#include <stdio.h>

int main()
{
    int szam;
    int total= 0;
    do
    {
        printf("Szam: ");
        scanf("%d",&szam);
        total=total+szam;
    } while (szam != 0);
        printf("Elemek osszege: %d",total);
    
    return 0;
}
