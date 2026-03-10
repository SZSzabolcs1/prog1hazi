#include <stdio.h>
#include <stdlib.h>

void pozitiv(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
            a[i] = abs(a[i]);
    }
}

void kiir(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

int main()
{
    int t[] = {4, -7, 3, -2, 9};
    int n = 5;

    kiir(t, n);       

    pozitiv(t, n);   

    kiir(t, n);       

    return 0;
}