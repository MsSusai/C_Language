//
// Created on 2020/7/25.
//习题7-1 选择法排序 (20分)
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int flag = 1;
    int t;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n; ++j) {
        for (int i = j; i < n; ++i) {
            if (a[j] < a[i]) {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
    for (int k = 0; k < n; ++k) {

        if (flag == 1) {
            printf("%d", a[k]);
            flag = 0;
        } else {
            printf(" %d", a[k]);
        }
    }
    return 0;
}
