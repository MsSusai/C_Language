//
// Created on 2020/8/25.
//习题10-7 十进制转换二进制 (15分)
#include <stdio.h>

void dectobin(int n);

int main()
{
	int n;

	scanf("%d", &n);
	dectobin(n);

	return 0;
}

/* 你的代码将被嵌在这里 */
void dectobin(int n)
{
	if (n == 0 || n == 1)
		printf("%d", n);
	else
	{
		dectobin(n / 2);
		printf("%d", n % 2);
	}
}
