#include <stdio.h>
#include <math.h>
int main()
{
	int fenmu=1,flag=1;
	double sum=0,eps;
	scanf ("%lf",&eps);
	
	while (1.0/fenmu > eps)
	{
		sum = sum+(flag*1.0/fenmu);
		fenmu = fenmu + 3;
		flag = -flag;
		//printf("%d %lf\n",fenmu,sum);
	}
	sum = sum + (flag*1.0/fenmu);
	
	printf("sum = %.6lf\n",sum);
	return 0;
}
