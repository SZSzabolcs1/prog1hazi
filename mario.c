#include <stdio.h>
int main()
{
    int total=0;
    
    int szam;
    printf("Milyen magas legyen? ");
    scanf("%d", &szam);

    int i = 1;
    for (i ; i<=szam; i++)
    {
        for (int j =0; j<i; ++j)
        {
            printf("#");
        }
            
     printf("\n");
    }
    return 1;
    
}