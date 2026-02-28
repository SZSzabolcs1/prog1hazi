#include <stdio.h>
#include <math.h>

int get_double(){
    double n;
    printf("Sugar: ");
    scanf("%lf",&n);
    return n;
}


int felszin(double r){
    return 4*r*r* M_PI;
}

int terfogat(double r){
    return 4/3*M_PI*r*r*r;
}


int main()
{

    double sugar = get_double();

    double f= felszin(sugar);
    double t= terfogat(sugar);

    printf("A kor felszine: %.2lf cm2\n",f );
    printf("A kor terfogata: %.2lf cm3\n",t );


    return 0;
}