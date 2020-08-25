//
// Created on 2020/8/15.
//习题9-4 查找书籍 (20分)
#include <stdio.h>

struct book {
    char name[50];
    double price;
} max, min, sample;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("\n");
        gets(sample.name);
        scanf("%lf", &sample.price);
        if (i == 0) {
            max = min = sample;
        }
        if (max.price < sample.price) {
            max = sample;
        }
        if (min.price > sample.price) {
            min = sample;
        }
    }

    printf("%.2lf, %s\n",max.price,max.name);
    printf("%.2lf, %s\n",min.price,min.name);
    return 0;
}