#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "prog1.c"

int eros_e(string jelszo)
{
    int pont = 0;

    int vanKis = 0, vanNagy = 0, vanSzam = 0;

    for (int i = 0; i < strlen(jelszo); i++)
    {
        if (islower(jelszo[i])) vanKis = 1;
        if (isupper(jelszo[i])) vanNagy = 1;
        if (isdigit(jelszo[i])) vanSzam = 1;
    }

    if (vanKis) pont++;
    if (vanNagy) pont++;
    if (vanSzam) pont++;
    if (strlen(jelszo) >= 8) pont++;

    if (pont == 4)
        return 1;
    else
        return 0;
}

int main(void)
{
    string jelszo;

    do
    {
        jelszo = get_string("Adj meg egy jelszot: ");
        printf("\n");

        printf("A jelszo %s\n", eros_e(jelszo) ? "eros" : "nem eros");

    } while (strcmp(jelszo, "*") != 0);

    return 0;
}