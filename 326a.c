#include <stdio.h>
#include <stdlib.h>

int my_abs(int n){
    if (n > 0){
        return n;
    }
    else {
        return -n;
    }
    }


int main()
{
    int n;

    printf("Hany db szamot szeretnel bevinni?\n");
    scanf("%d", &n);

    int eredeti[n];
    

    for (int i = 0; i < n; i++)
    {
        printf("%d. szam: ", i + 1);
        scanf("%d", &eredeti[i]);

    }

    int masolat[n];

    for (int i = 0; i < n; i++)
    {
        masolat[i] = my_abs(eredeti[i]);
    }

    printf("A szamok abszolut erteke: ");
       for (int i = 0; i < n; i++)
    {
        printf("%d", masolat[i]);
        if (i < n - 1)
            printf(", ");
    }


    printf("\nAz eredeti megadott szamok: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", eredeti[i]);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");

    return 0;
}