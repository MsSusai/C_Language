//练习7-3 将数组中的数逆序存放
// Created on 2020/7/24.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int flag = 1;

    for (int i = 0; i < n; ++i) {
        int number;
        scanf("%d", &number);
        a[i] = number;
    }

    for (int j = 0; j < n / 2; ++j) {
        int first = a[j];
        int last = a[n - j - 1];
        a[j] = last;
        a[n - j - 1] = first;
    }

    for (int k = 0; k < n; ++k) {

        if (flag == 1) {
            printf("%d", a[k]);
            flag = 0;
        } else {
            printf(" %d", a[k]);
        }
    }
    printf("\n");
    return 0;
}
