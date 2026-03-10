#include <stdio.h>
#include <stdbool.h>

bool rendezett_e(int tomb[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (tomb[i] > tomb[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int tomb[] = {1, 2, 3, 4, 7};
    int n = 5;

    if (rendezett_e(tomb, n) == true)
    {
        printf("A tomb rendezett\n");
    }
    else
    {
        printf("A tomb nem rendezett\n");
    }

    return 0;
}