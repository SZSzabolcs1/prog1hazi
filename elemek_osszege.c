#include <stdio.h>

int elemek_osszege(int n, int tomb[]) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum+=tomb[i];
    }
    return sum;
}

int main()
{
    
    
    int szamok[10]= {1,2,3,4,5,6,7,8,9,10};
    int meret = 10;
    int result = elemek_osszege(meret,szamok);
    printf("elemek osszege: %d", result);
    
    return 0;
}