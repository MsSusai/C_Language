//练习7-2 求最大值及其下标
// Created on 2020/7/24.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int number[n];
    int a = 0;
    for (int i = 0; i < n; ++i) {
        number[i] = 0;
    }
    for (int j = 0; j < n; ++j) {
        int k;
        scanf("%d", &k);
        number[j] = k;
    }

    for (int bigger = 1; bigger < n; ++bigger) {
        if (number[a] < number[bigger]) {
            a = bigger;
        }
    }
    printf("%d %d\n", number[a], a);
    return 0;
}
