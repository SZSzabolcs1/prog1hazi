#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contains(const int n, const int tomb[], const int k){
    for (int i = 0; i<n; ++i){
        if (tomb[i]==k){
            return 1;
        }
    }
    return 0;
}


int main()
{
    int n= 10;
    int also = 1; 
    int felso = 99;

    //printf("Hany db random szamot kersz?\n");
    //scanf("%d", &n);

    //printf("Also hatar: ");
    //scanf("%d", &also);

    //printf("Felso hatar: ");
    //scanf("%d", &felso);


    srand(time(NULL));

    //printf("\nA generalt szamok: ");

    int tomb[n];
    for (int i = 0; i < n; i++)
    {
        int r = rand() % (felso - also + 1) + also;  
        
        if (contains(n, tomb, r))
        {
            i--;
            continue;
        }
        
        else tomb[i]= r;
    }

    for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-i-1; j++) {
        if (tomb[j] > tomb[j+1]) {
            int tmp = tomb[j];
            tomb[j] = tomb[j+1];
            tomb[j+1] = tmp;
        }
    }
}

    printf("A tomb elemei rendezve: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    

    return 0;
}