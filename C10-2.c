//
// Created on 2020/8/17.
//ººÅµËşÎÊÌâ
#include <stdio.h>

void hanio(int n, char a, char b, char c);

int main()
{
	int n;

	printf("input the number of disk: \n");
	scanf("%d", &n);

	printf("the steps for %d disk are: \n", n);
	hanio(n, 'a', 'b', 'c');

	return 0;
}

void hanio(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("%c-->%c\n", a, b);        //a-->b
	}
	else
	{
		hanio(n - 1, a, c, b);                 //a-->c
		printf("%c-->%c\n", a, b);        //a-->b
		hanio(n - 1, c, b, a);                 //c-->b
	}
}