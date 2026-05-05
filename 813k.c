#include <stdio.h>

int main() {
    int cella[601] = {0};

    for (int i = 1; i <= 600; i++) {
        for (int j = i; j <= 600; j += i) {
            if (cella[j] == 0) {
                cella[j] = 1;
            } else {
                cella[j] = 0;
            }
        }
    }

    for (int i = 1; i <= 600; i++) {
        if (cella[i] == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}