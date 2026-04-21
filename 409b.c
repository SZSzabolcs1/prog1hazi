#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_valid_c_identifier(const char* input) {
    
    if (input[0] == '\0') return 0;

    
    if (!(isalpha(input[0]) || input[0] == '_')) {
        return 0;
    }

    
    for (int i = 1; input[i] != '\0'; i++) {
        if (!(isalnum(input[i]) || input[i] == '_')) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str[100];

    printf("Adj meg sztringeket '*' vegjelig!\n");

    while (1) {
        printf("Input: ");
        scanf("%99s", str);

        if (strcmp(str, "*") == 0) break;

        if (is_valid_c_identifier(str)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}