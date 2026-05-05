#include <stdio.h>

int main() {
    int a, b, c, d, e, f;

    for (a = 1; a <= 45; a++) {
        for (b = a + 1; b <= 45; b++) {
            for (c = b + 1; c <= 45; c++) {
                for (d = c + 1; d <= 45; d++) {
                    for (e = d + 1; e <= 45; e++) {
                        for (f = e + 1; f <= 45; f++) {

                            if (a + b + c + d + e + f == 90 &&
                                a * b * c * d * e * f == 996300) {

                                printf("%d %d %d %d %d %d\n",
                                       a, b, c, d, e, f);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}