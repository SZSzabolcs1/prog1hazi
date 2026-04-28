#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void generate_file(const char* filename, int num_lines, int min_length, int max_length) {
    FILE* file = fopen(filename, "w");
    if (!file) {
        perror("Cannot open file");
        return;
    }

    srand(time(NULL));

    for (int i = 0; i < num_lines; i++) {
        int length = min_length + rand() % (max_length - min_length + 1);
        char* line = (char*)malloc((length + 1) * sizeof(char));
        if (!line) {
            perror("Cannot allocate memory");
            fclose(file);
            return;
        }

        for (int j = 0; j < length; j++) {
            line[j] = 'a' + rand() % ('z' - 'a' + 1);
        }
        line[length] = '\0';

        fprintf(file, "%s\n", line);
        free(line);
    }

    fclose(file);
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <num_lines> <min_length> <max_length>\n", argv[0]);
        return 1;
    }

    int num_lines = atoi(argv[1]);
    int min_length = atoi(argv[2]);
    int max_length = atoi(argv[3]);

    if (min_length > max_length) {
        fprintf(stderr, "Min length must be less than or equal to max length\n");
        return 1;
    }

    const char* filename = "out.txt";

    generate_file(filename, num_lines, min_length, max_length);

    printf("File %s has been created with %d lines of varying lengths.\n", filename, num_lines);

    return 0;
}
