//
// Created on 2020/8/25.
//ϰ��10-1 �ж�������������λ�� (15��)
#include <stdio.h>
#include <math.h>

int search(int n);

int main()
{
	int number;
	scanf("%d", &number);
	printf("count=%d\n", search(number));

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int search(int n)
{
	int a, b, c, cnt = 0;
	for (int i = 10; i < 32; ++i)
	{
		for (int j = 101; j <= n; ++j)
		{
			if (j == i * i)
			{
				a = j % 10;
				b = j / 10 % 10;
				c = j / 100;
				if (a == b || a == c || b == c)
				{
					cnt++;
				}
			}
		}
	}
	return cnt;
}
