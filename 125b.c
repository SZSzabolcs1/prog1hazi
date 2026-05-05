#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main() {
    FILE *f = fopen("nevek.csv", "r");

    char line[100];
    char nevek[100][100];
    int db = 0;

    while (fgets(line, 100, f)) {
        char *nev = strtok(line, ",");
        strtok(NULL, ",");
        char *szak = strtok(NULL, ",");

        for (int i = 0; szak[i]; i++) {
            szak[i] = toupper(szak[i]);
        }

        if (strcmp(szak, "MI\n") == 0 || strcmp(szak, "MI") == 0) {
            nev[0] = toupper(nev[0]);
            for (int i = 1; nev[i]; i++) {
                nev[i] = tolower(nev[i]);
            }

            strcpy(nevek[db], nev);
            db++;
        }
    }

    fclose(f);

    qsort(nevek, db, sizeof(nevek[0]), cmp);

    for (int i = 0; i < db; i++) {
        printf("%s", nevek[i]);
        if (i < db - 1) printf(", ");
    }

    return 0;
}