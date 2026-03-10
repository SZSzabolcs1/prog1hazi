#include <stdio.h>

void kiir(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d", a[i]);

        if(i < n-1)
            printf(", ");
    }

    printf("\n");
}

int main()
{
    int t[] = {4, 7, 34, 23, 67};
    int n = 5;

    kiir(t, n);

    return 0;
}