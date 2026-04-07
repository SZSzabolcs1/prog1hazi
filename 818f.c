#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
        int no = 0;
        for (int i = 1; i <= 100; i++)
        {
            no+=pow(i, 2);
        }
        
        int n = 0;
        for (int i = 1; i <= 100; i++)
        {
            n+=i;
        }
        n = pow(n, 2);

        printf("%d", n-no);
    return 0;
}