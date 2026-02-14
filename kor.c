#include <stdio.h>
#include <math.h>

int main()
{
    int sugar;
    printf("add meg akor sugarat");
    scanf("%d", &sugar);


    printf("A kor kerulete: %d cm\n", 2*sugar* M_PI);
    printf("A kor terulete: %d cm\n", sugar*sugar* M_PI);


    return 0;
}