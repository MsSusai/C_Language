//
// Created on 2020/8/15.
//习题9-3 平面向量加法 (15分)
#include <stdio.h>
#include <math.h>
struct vector {
    double x;
    double y;
};

int main() {
    struct vector vector1, vector2,vectorout;
    scanf("%lf %lf", &vector1.x, &vector1.y);
    scanf("%lf %lf", &vector2.x, &vector2.y);
    vectorout.x = vector1.x + vector2.x;
    vectorout.y = vector1.y + vector2.y;
    if (fabs(vectorout.x) < 0.05){
        vectorout.x = fabs(vectorout.x);
    }
    if (fabs(vectorout.y) < 0.05){
        vectorout.y = fabs(vectorout.y);
    }
    printf("(%.1f, %.1f)",vectorout.x,vectorout.y);
    return 0;
}
