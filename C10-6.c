//
// Created on 2020/8/25.
//ϰ��10-4 �ݹ���򵥽����ݼ����Ĳ��ֺ� (15��)
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

/* ��Ĵ��뽫��Ƕ������ */
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



