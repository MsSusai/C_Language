//
// Created on 2020/8/10.
//习题8-10 输出学生成绩 (20分)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int max, min;
	double average, sum;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}

	for (int j = 0; j < n; ++j)
	{
		sum += a[j];
	}
	average = sum / n;
	max = 0, min = 0;
	for (int k = 1; k < n; ++k)
	{
		if (a[k] > a[max])
		{
			max = k;
		}
		if (a[k] < a[min])
		{
			min = k;
		}
	}
	printf("average = %.2lf\n"
		   "max = %d.00\n"
		   "min = %d.00", average, a[max], a[min]);
	return 0;
}
