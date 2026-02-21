#include <stdio.h>
#include <math.h>

int main()
{
    float sugar;
    printf("add meg akor sugarat: ");
    scanf("%f", &sugar);


    printf("A kor kerulete: %0.2f cm\n", 2*sugar* M_PI);
    printf("A kor terulete: %0.2f cm\n", sugar*sugar* M_PI);


    return 0;
}