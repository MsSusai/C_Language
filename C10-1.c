//
// Created on 2020/8/17.
//��ϰ10-1 ʹ�õݹ麯������1��n֮�� (10��)
#include <stdio.h>

int sum( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int sum( int n ){
    int result = 0;
    if (n<=0){
        result = 0;
    } else{
        result = n + sum(n-1);
    }
    return result;
}
