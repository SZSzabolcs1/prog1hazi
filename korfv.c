#include <stdio.h>
#include <math.h>

int kerulet(double r){
    return 2*r* M_PI;
}

int terulet(double r){
    return r*r* M_PI;
}


int main()
{

    double sugar;
    printf("add meg a kor sugarat: ");
    scanf("%lf", &sugar);

    double k= kerulet(sugar);
    double t= terulet(sugar);

    printf("A kor kerulete: %.2lf cm\n",k );
    printf("A kor terulete: %.2lf cm2\n",t );


    return 0;
}