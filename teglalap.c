#include <stdio.h>

int main()
{
    int oldal1;
    printf("add meg az 1. oldal hosszat ");
    scanf("%d", &oldal1);

    int oldal2;
    printf("add meg a 2. oldal hosszat ");
    scanf("%d", &oldal2);

    printf("A teglalap kerulete: %d cm\n", 2*oldal1 + 2*oldal2);
    printf("A teglalap terulete: %d cm2\n", oldal1 * oldal2);


    return 0;
}