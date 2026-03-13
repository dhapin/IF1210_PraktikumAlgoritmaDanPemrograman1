#include <stdio.h>

int main() {
    int h1, h2, m1, m2, s1, s2;
    scanf("%d %d %d", &h1, &m1, &s1);
    scanf("%d %d %d", &h2, &m2, &s2);

    printf("%d %d %d\n", h2-h1, m2-m1, s2-s1);

    return 0;
}
