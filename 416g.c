#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void shuffle(int n, int tomb[]) {
    for (int i = 0; i < n - 1; i++) {
        int j = i + rand() % (n - i);
        int temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }
}

void kiir(int n, int tomb[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tomb[i]);
    }
}

int main() {
    srand(time(NULL));

    int szamok[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(szamok) / sizeof(szamok[0]);

    printf("Eredeti: ");
    kiir(n, szamok);
    printf("\n");
    
    shuffle(n, szamok);

    printf("Shuffled: ");
    kiir(n, szamok);
    printf("\n");

    return 0;
}
