#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        puts("Hasznalat: adj meg egy fajlnevet argumentumkent\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        puts("Nincs ilyen fajl! \n");
        return 1;
    }

    int numbers[1024]; 
    int cnt = 0;

    while (fscanf(file, "%d", &numbers[cnt]) == 1) {
        cnt++;
    }

    fclose(file);

    qsort(numbers, cnt, sizeof(int), compare);

    for (int i = 0; i < cnt; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}