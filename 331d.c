#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "prog1.c"
#include <stdlib.h>



int main()
{

        string szam = get_string("Adj meg egy szamot: ");
        printf("\n");
        
        int sum = 0;
        for (int i = 0; i < strlen(szam); i++)
        {
            int num = szam[i] - '0';
            sum += num;
        }
        printf("Szamjegyek osszege: %d", sum);



    return 0;
}