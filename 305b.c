#include <stdio.h>

int legkisebb(int tomb[], int n)
{
    int min = tomb[0];

    for (int i = 1; i < n; i++)
    {
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
    }

    return min;
}

int legnagyobb(int tomb[], int n)
{
    int max = tomb[0];

    for (int i = 1; i < n; i++)
    {
        if (tomb[i] > max)
        {
            max = tomb[i];
        }
    }

    return max;
}

int main()
{
    int tomb[] = {4, 7, 2, 11, 3};
    int n = 5;

    printf("Legkisebb elem: %d\n", legkisebb(tomb, n));
    printf("Legnagyobb elem: %d\n", legnagyobb(tomb, n));

    return 0;
}