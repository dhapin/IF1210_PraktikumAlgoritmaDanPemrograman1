#include <stdio.h>

int fpb(int a, int b) {
    if (b == 0) {
        return a;
    }
    return fpb(b, a % b);
}

int main() {
    int n;
    scanf("%d ", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d ", &a[i]);
    }

    int pembagi;
    if (n == 1) {
        pembagi = a[0];
    } else {
        pembagi = fpb(a[0], a[1]);
        for (int i = 2; i < n; i++) {
            pembagi = fpb(pembagi, a[i]);
        }
    }

    int sum = 0;
    for (int i = 0; i< n; i++) {
        sum += a[i] / pembagi;
    }

    printf("%d\n", sum);

    return 0;
}
