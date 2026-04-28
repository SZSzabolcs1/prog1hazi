#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find_longest_line(const char* filename, int* line_number, int* length) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Cannot open file");
        *line_number = -1;
        *length = -1;
        return;
    }

    int max_length = 0;
    int longest_line_number = 0;

    char line[4096]; 
    int current_line_number = 0;

    while (fgets(line, sizeof(line), file)) {
        current_line_number++;
        int length = strlen(line);
        if (length > max_length) {
            max_length = length;
            longest_line_number = current_line_number;
        }
    }

    fclose(file);

    *line_number = longest_line_number;
    *length = max_length;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    const char* filename = "out.txt";
    int line_number, length;

    find_longest_line(filename, &line_number, &length);

    if (line_number != -1 && length != -1) {
        printf("#%d sor ; %d karakter\n", line_number, length);
    } else {
        return 1;
    }

    return 0;
}
