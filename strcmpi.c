#include <stdio.h>
#include <ctype.h>
#include <string.h>

int strcmpi(const char* s1, const char* s2) {
    while (*s1 && *s2) {
        unsigned char c1 = (unsigned char)*s1++;
        unsigned char c2 = (unsigned char)*s2++;
        if (tolower(c1) != tolower(c2)) {
            return tolower(c1) - tolower(c2);
        }
    }
    
    if (*s1) {
        return tolower((unsigned char)*s1);
    }
    if (*s2) {
        return -tolower((unsigned char)*s2);
    }
    return 0;
}

int main() {
    char str1[100];
    char str2[100];
    
    printf("Elso string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    
    printf("Masodik string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;
    
    int result = strcmpi(str1, str2);
    printf("'%s' vs '%s': %d\n", str1, str2, result);
    
    if (result == 0) {
        printf("A ket string ugyan az,\n");
    } else if (result < 0) {
        printf("Az elso string hosszabb mint a masodik.\n");
    } else {
        printf("A masodik string hosszabb mint az elso.\n");
    }

    return 0;
}