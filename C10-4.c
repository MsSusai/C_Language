//
// Created on 2020/8/25.
//ϰ��10-2 �ݹ���׳˺� (15��)
#include <stdio.h>

double fact(int n);
double factsum(int n);

int main()
{
	int n;

	scanf("%d", &n);
	printf("fact(%d) = %.0f\n", n, fact(n));
	printf("sum = %.0f\n", factsum(n));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
double fact(int n)
{
	double sum;
	if (n == 1 || n == 0)
		sum = 1;
	else
		sum = fact(n - 1) * n;
	return sum;
}
double factsum(int n)
{
	double sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		sum = sum + fact(i);
	}
	return sum;
}