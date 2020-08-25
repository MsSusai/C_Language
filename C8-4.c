//
// Created on 2020/8/9.
//
#include <stdio.h>

#define MAXN 10

int ArrayShift(int a[], int n, int m);

int main() {
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for (i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
int ArrayShift(int a[], int n, int m) {
    int b[MAXN];
    if (m > n) {
        int a;
        a = m % n;
        m = a;
    }
    if (m == 0) {
        ;
    } else {
        for (int i = 0; i < m; ++i) {
            b[i] = a[n - m + i];
        }
        for (int j = 0; j < n - m; ++j) {
            b[j + m] = a[j];
        }
        for (int k = 0; k < n; ++k) {
            a[k] = b[k];
        }
    }
}

