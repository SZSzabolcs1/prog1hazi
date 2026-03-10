#include <stdbool.h>
#include <stdio.h>

bool is_even(int n)
{
    if (n % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}


int main()
{

    int num= 34;
    
    if (is_even(num) == true) {
        printf("%d paros\n", num);
    }
    else {
        printf("%d paratlan\n", num);
    }

    return 0;
}