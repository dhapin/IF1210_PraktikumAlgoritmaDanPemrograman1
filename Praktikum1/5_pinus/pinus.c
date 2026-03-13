#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i > 1; i--) {
        // printf("i=%d\n", i);
        for (int j = n-i+1; j <= n; j++) {
            // printf("j=%d\n", j);
            for (int k = 0; k < n-j; k++) {
                printf(" ");
            }
            for (int k = 0; k < j*2-1; k++) {
                printf("*");
            }
            printf("\n");
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-2; j++) {
            printf(" ");
        }
        printf("***\n");
    }

    return 0;
}
