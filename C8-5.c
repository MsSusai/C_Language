//
// Created on 2020/8/9.
//ϰ��8-4 ���� (20��)
#include <stdio.h>

#define MAXN 20

void CountOff(int n, int m, int out[]);

int main() {
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff(n, m, out);
    for (i = 0; i < n; i++)
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void CountOff(int n, int m, int out[]) {
    int i = 0, j = 0, count = 0, b[n];
    for (int k = 0; k < n; ++k) {
        b[k] = k + 1;
    }
    while (count < n) {
        if (b[i] != 0) {
            j++;
        }
        if (j == m) {
            count++;
            out[i] = count;
            b[i] = 0;
            j = 0;
        }
        i++;
        if (i == n) {
            i = 0;
        }
    }
}
