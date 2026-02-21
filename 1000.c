#include <stdio.h>

int main()
{
    int total=0;
    const int LIMIT =1000;
    int i = 1;
    for (i; i<LIMIT; i++)
    {
        if (i%3==0 || i %5==0)
        {
            total= total+i;
        }
        
    }
    printf("%d\n",total);
    return 0;
}