//
// Created on 2020/8/9.
//ϰ��8-1 ���ʵ����������С������ (15��)
#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart );

int main()
{
    float x, fracpart;
    int intpart;

    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void splitfloat( float x, int *intpart, float *fracpart ){
    *intpart = (int)x;
    *fracpart = x - *intpart;
}
