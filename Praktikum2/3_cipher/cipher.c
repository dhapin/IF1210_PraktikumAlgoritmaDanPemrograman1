#include <stdio.h>

int isprime(int x) {
    if (x < 2) {
        return 0;
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int iscipher(int x) {
    if (!isprime(x)) {
        return 0;
    }
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        if (!isprime(x % 10)) {
            return 0;
        }
        x /= 10;
    }
    if (!isprime(sum)) {
        return 0;
    }
    return 1;
}

int main() {
    int x;
    scanf("%d", &x);

    printf("%d\n", iscipher(x));

    return 0;
}
