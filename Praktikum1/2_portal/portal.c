#include <stdio.h>

int main() {
    int n, a = 0;
    scanf("%d", &n);

    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n *= 3;
            n += 1;
        }
        a++;
    }

    printf("%d\n", a);
}
