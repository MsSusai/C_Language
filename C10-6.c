//
// Created on 2020/8/25.
//习题10-4 递归求简单交错幂级数的部分和 (15分)
#include <stdio.h>

double fn(double x, int n);

int main()
{
	double x;
	int n;

	scanf("%lf %d", &x, &n);
	printf("%.2f\n", fn(x, n));

	return 0;
}

/* 你的代码将被嵌在这里 */
double fn(double x, int n)
{
	int i;
	double f = 1.0;
	for (i = 1; i <= n; i++)
		f = f * x;
	if (n % 2 == 0)
		f = f * (-1);
	if (n == 1)
		return x;
	else return (f + fn(x, n - 1));
}



