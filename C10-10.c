//
// Created on 2020/8/25.
//ϰ��10-8 �ݹ�ʵ��˳��������� (15��)
#include <stdio.h>

void printdigits(int n);

int main()
{
	int n;

	scanf("%d", &n);
	printdigits(n);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void printdigits(int n)
{
	if (n < 10)
		printf("%d\n", n);
	else
	{
		printdigits(n / 10);
		printf("%d\n", n % 10);
	}

}
