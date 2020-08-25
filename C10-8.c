//
// Created on 2020/8/25.
//习题10-6 递归求Fabonacci数列 (10分)
#include <stdio.h>

int f( int n );

int main()
{
	int n;

	scanf("%d", &n);
	printf("%d\n", f(n));

	return 0;
}

/* 你的代码将被嵌在这里 */
int f(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return f(n - 1) + f(n - 2);

}

