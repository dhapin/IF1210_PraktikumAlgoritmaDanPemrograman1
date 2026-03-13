#include <stdio.h>

int cekpanjang(int n, char p[]) {
    if (n >= 8) {
        return 1;
    }
    return 0;
}

int cekangka(int n, char p[]) {
    for (int i = 0; i < n; i++) {
        int code = (p[i]-'0');
        if (0 <= code && code <= 9) {
            return 1;
        }
    }
    return 0;
}

int cekbesar(int n, char p[]) {
    for (int i = 0; i < n; i++) {
        int code = (p[i]-'A');
        if (0 <= code && code <= 25) {
            return 1;
        }
    }
    return 0;
}

int cekkecil(int n, char p[]) {
    for (int i = 0; i < n; i++) {
        int code = (p[i]-'a');
        if (0 <= code && code <= 25) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d ", &n);

    // char *p = malloc((n+1)*sizeof(char));
    char p[n];

    for (int i = 0; i < n; i++) {
        scanf("%c ", &p[i]);
    }

    // for (int i = 0; i < n; i++) {
    //     printf("%c", p[i]);
    // }
    // printf("\n");
    // printf("%d\n", cekpanjang(n, p));
    // printf("%d\n", cekangka(n, p));
    // printf("%d\n", cekbesar(n, p));
    // printf("%d\n", cekkecil(n, p));

    if (
        cekpanjang(n, p) &&
        cekangka(n, p) &&
        cekbesar(n, p) &&
        cekkecil(n, p)
    ) {
        printf("KUAT\n");
    } else {
        printf("LEMAH\n");
    }

    return 0;
}
