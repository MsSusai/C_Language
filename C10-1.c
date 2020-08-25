//
// Created on 2020/8/17.
//练习10-1 使用递归函数计算1到n之和 (10分)
#include <stdio.h>

int sum( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int sum( int n ){
    int result = 0;
    if (n<=0){
        result = 0;
    } else{
        result = n + sum(n-1);
    }
    return result;
}
