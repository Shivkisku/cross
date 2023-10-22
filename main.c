#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 0; i <= 20; i++) {
        for (j = 0, k = 20; j <= 20; j++, k--) {
            if (i == j || j == k) {
                printf("*");
            } else {
                printf(" ");
            }
        } //inner for
        printf("\n");
    } //outer for

    return 0;
}
