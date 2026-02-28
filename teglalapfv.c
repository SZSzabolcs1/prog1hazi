#include <stdio.h>

int kerulet(int a, int b){
    return 2*a + 2*b;
}

int terulet(int a,int b){
    return a*b;
}


int main()
{

    int oldal1;
    printf("add meg az 1. oldal hosszat ");
    scanf("%d", &oldal1);

    int oldal2;
    printf("add meg a 2. oldal hosszat ");
    scanf("%d", &oldal2);

    int k= kerulet(oldal1, oldal2);
    int t= terulet(oldal1, oldal2);

    printf("A teglalap kerulete: %d cm\n",k );
    printf("A teglalap terulete: %d cm2\n",t );


    return 0;
}