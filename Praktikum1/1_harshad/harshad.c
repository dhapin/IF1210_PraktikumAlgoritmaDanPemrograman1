#include <stdio.h>

int main() {
    int n, a, b = 0;
    scanf("%d", &n);
    a = n;

    while (n > 0) {
        b += n % 10;
        n /= 10;
    }

    if (a % b == 0) {
        printf("1\n");
    } else {
        printf("0\n")
        ;
    }

    return 0;
}
