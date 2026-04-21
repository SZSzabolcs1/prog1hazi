#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *f = fopen("valos_szamok.txt", "r");

    char sor[100];
    double osszeg = 0.0;

    while (fgets(sor, sizeof(sor), f)) {
        for (int i = 0; sor[i]; i++) {
            if (sor[i] == ',') sor[i] = '.';
        }

        osszeg += atof(sor);
    }

    printf("%.20f\n", osszeg);

    fclose(f);
    return 0;
}