#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(const int n, const int tomb[]) {
    srand(time(NULL));
    int random = rand() % n;

    return tomb[random];
}

int main() {
    int szamok[] = {5, 3, 8, 2, 9, 1, 67, 69};
    int size = sizeof(szamok) / sizeof(szamok[0]);

    int kivalasztott = choice(size, szamok);
    printf("A veletlenszeruen kivalasztott elem: %d\n", kivalasztott);

    return 0;
}