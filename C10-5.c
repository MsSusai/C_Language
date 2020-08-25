//
// Created on 2020/8/25.
//习题10-3 递归实现指数函数 (15分)
#include <stdio.h>

double calc_pow(double x, int n);

int main()
{
	double x;
	int n;

	scanf("%lf %d", &x, &n);
	printf("%.0f\n", calc_pow(x, n));

	return 0;
}

/* 你的代码将被嵌在这里 */
double calc_pow(double x, int n)
{
	double sum;
	if (n==1)
		sum = x;
	else
		sum = calc_pow(x , n-1) * x;
	return sum;
}
