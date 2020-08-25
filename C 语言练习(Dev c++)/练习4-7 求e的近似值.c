#include <stdio.h>
double fact (int n);
int main()
{
	int i=1;   //分母 
	int a=1; //分子 
	int n;
	double sum = 1;
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		sum = sum + (1/fact (i));
	}
	printf("%.8lf\n",sum);
	return 0;
}

//定义阶乘 
double fact (int n)
{
	int i;
	double result=1;
	
	for (i=1;i<=n;i++)
	{
		result = result * i;
	}
	return result;
}
