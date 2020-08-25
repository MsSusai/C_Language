//
// Created on 2020/7/27.
//习题7-4 求矩阵各行元素之和 (15分)
#include <stdio.h>

int main() {
    int x, y, sum = 0;
    int x1 = 0;
    scanf("%d %d", &x, &y);
    int a[x][y];

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    while (x != 0) {
        for (int i = 0; i < y; ++i) {
            sum = sum + a[x1][i];
        }
        printf("%d\n", sum);
        sum = 0;
        x1++;
        x--;
    }
    return 0;
}