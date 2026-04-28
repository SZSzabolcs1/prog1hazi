#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        puts("Hasznalat: add meg a fajlnevet argumentumkent\n" );
        return 1;
    }

    const char *inputFile = argv[1];
    FILE *file = fopen(inputFile, "r");
    if (!file) {
        puts("nincs ilyen file");
        return 1;
    }


    fseek(file, 0L, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0L, SEEK_SET);
   
    const int avgIntSize = sizeof(int) + 1;
    const int estimatedNumLines = (int)(fileSize / avgIntSize);

    int *numbers = (int *)malloc(estimatedNumLines * sizeof(int));
    if (!numbers) {
        perror("memoria allokacio hiba");
        fclose(file);
        return 1;
    }

    char line[256];
    int count = 0;

    while (fgets(line, sizeof(line), file)) {
        numbers[count++] = atoi(line);
    }

    fclose(file);

    qsort(numbers, count, sizeof(int), compare);

    FILE *outputFile = fopen("output.txt", "w");
    if (!outputFile) {
        perror("Nincs output file");
        free(numbers);
        return 1;
    }

    for (int i = 0; i < count; i++) {
        fprintf(outputFile, "%d\n", numbers[i]);
    }

    fclose(outputFile);

    free(numbers);

    printf("Millio sor kiirva output.txt-be\n");

    return 0;
}
