#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *in = fopen("in.txt", "r");
    if (in == NULL) {
        fprintf(stderr, "nincs ilyen file\n");
        return 1;
    }
    printf("# in.txt megnyitva...\n");

    FILE *out = fopen("out.txt", "w");
    if (out == NULL) {
        fprintf(stderr, "Hiba! Nem sikerult megnyitni az out.txt-t!\n");
        fclose(in);
        return 1;
    }

    printf("# 0,5-nel nagyobb szamok szurese...\n");

    double szam;
    int db = 0;

    while (fscanf(in, "%lf", &szam) == 1) {
        if (szam > 0.5) {
            fprintf(out, "%f\n", szam);
            db++;
        }
    }

    printf("# szures vege\n");

    fclose(out);
    printf("# out.txt bezarva\n");

    printf("# out.txt-be kiit szamok mennyisege: %d db\n", db);

    fclose(in);

    return 0;
}