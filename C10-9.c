//
// Created on 2020/8/25.
//ϰ��10-7 ʮ����ת�������� (15��)
#include <stdio.h>

void dectobin(int n);

int main()
{
	int n;

	scanf("%d", &n);
	dectobin(n);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
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
