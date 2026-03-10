#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a)
        return true;

    return false;
}

int main()
{
    int o1, o2, o3;

    printf("Add meg a haromszog oldalainak hosszat:\n");
    scanf("%d", &o1);
    scanf("%d", &o2);
    scanf("%d", &o3);

    bool szerkesztheto = valid_triangle(o1, o2, o3);

    if (szerkesztheto == true)
        printf("A haromszog szerkesztheto\n");
    else
        printf("A haromszog nem szerkesztheto\n");

    return 0;
}