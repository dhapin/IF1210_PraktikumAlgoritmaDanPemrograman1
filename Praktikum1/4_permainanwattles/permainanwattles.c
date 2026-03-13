#include <stdio.h>

int main() {
    int d, m, a, b, c, e;
    scanf("%d %d", &d, &m);

    while (d != m && (d >= 0 || m >= 0)) {
        // printf("%d %d\n", d, m);
        if (d < 0) {
            printf("Mebel\n");
            return 0;
        } else if (m < 0) {
            printf("Deeper\n");
            return 0;
        }
        a = d;
        b = m;
        c = a % 10;
        e = b % 10;
        while (a >= 10) {
            a /= 10;
        }
        while (b >= 10) {
            b /= 10;
        }

        d -= b+e;
        m -= a+c;
    }
    printf("Wattles\n");

    return 0;
}
