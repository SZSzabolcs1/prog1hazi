#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void my_strfry(char str[]) {
    int n = strlen(str);

    for (int i = 0; i < n - 1; i++) {
        int j = i + rand() % (n - i);

        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char szoveg[256];

    srand(time(NULL)); 

    printf("Adj meg egy stringet: ");
    fgets(szoveg, sizeof(szoveg), stdin);
    szoveg[strcspn(szoveg, "\n")] = '\0';

    my_strfry(szoveg);

    printf("Osszekevert string: %s\n", szoveg);

    return 0;
}