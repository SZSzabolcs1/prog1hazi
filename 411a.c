#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define MIN_LENGTH 8


int contains_lowercase(const char *str) {
    while (*str) {
        if (islower(*str)) {
            return 1;
        }
        str++;
    }
    return 0;
}


int contains_uppercase(const char *str) {
    while (*str) {
        if (isupper(*str)) {
            return 1;
        }
        str++;
    }
    return 0;
}


int contains_digit(const char *str) {
    while (*str) {
        if (isdigit(*str)) {
            return 1;
        }
        str++;
    }
    return 0;
}


int contains_special_char(const char *str) {
    const char *special_chars = ".,;'";
    while (*str) {
        for (int i = 0; special_chars[i]; i++) {
            if (*str == special_chars[i]) {
                return 1;
            }
        }
        str++;
    }
    return 0;




}

int main() {
    srand(time(NULL)); 

    int length = MIN_LENGTH + (rand() % 4); 
    char password[length + 1]; 

    while (!(contains_lowercase(password) && contains_uppercase(password) && 
             contains_digit(password) && contains_special_char(password))) {
        int i = 0;
        for (; i < length; i++) {
            if (rand() % 2 == 0) {
                password[i] = 'a' + rand() % 26;
            } else if (rand() % 3 == 0) {
                password[i] = 'A' + rand() % 26;
            } else if (rand() % 4 == 0) {
                password[i] = '0' + rand() % 10;
            } else {
                password[i] = ".,;'"[rand() % 4];
            }
        }
        password[i] = '\0';
    }

    printf("Generalt eros jelszo: %s\n", password);
    return 0;
}

