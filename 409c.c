#include <stdio.h>
#include <stdlib.h>

int get_number_of_lines(FILE *f) {
    int count = 0;
    int c;

    while ((c = fgetc(f)) != EOF) {
        if (c == '\n') {
            count++;
        }
    }

    return count;
}

int main(int argc, char *argv[]) {

    
    if (argc != 2) {
        fprintf(stderr, "Hiba! Adja meg egy szoveges allomany nevet!\n");
        return 1;
    }

    FILE *f = fopen(argv[1], "r");

    
    if (f == NULL) {
        fprintf(stderr, "Hiba! A %s nevu file-t nem sikerult megnyitni!\n", argv[1]);
        return 1;
    }

    int sorok = get_number_of_lines(f);

    printf("%d\n", sorok);

    fclose(f);

    return 0;
}