#include <stdio.h>
#include <math.h>
int main()
{
	double x=0,sum=1,end=1,fact=1;   
	int i=1,n=1;                
	scanf("%lf",&x);
	
	while (end>0.00001)
	{
	fact = 1;
		for (i=1;i<=n;i++)
		{
			fact = fact*(1.0/i);
		}
	end = pow(x,n)*fact;
	sum = sum + end;
	n++;
	}
	printf("%.4lf",sum);
	
	return 0;
}
