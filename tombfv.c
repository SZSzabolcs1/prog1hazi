#include <stdio.h>

void reverse_array(int n,tomb[]){
    int i = 0;
    int j = n-1;
    int temp;

    while (i < j)
    {
        temp = tomb[i]
        tomb[i] = tomb[j];
        tomb[j] = temp;
        ++i;
        --j; 
    }
    
}


void kiir(int n, int tomb[]) {

    for (int i = 0; i < n; ++i) {
        printf("%d ",tomb[i]);
    }
}

int main()
{
    
    
    int tomb[10]= {1,2,3,4,5,6,7,8,9,10};
    int meret = 10;
    puts("elotte: ");
    kiir(meret,szamok);
    puts("utana: ");
    reverse_array(meret,tomb[]);
    kiir(meret,tomb[]);
    return 0;
}