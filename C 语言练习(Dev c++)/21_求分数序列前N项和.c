#include <stdio.h>
int main()
{
	double sum=0,n=0,a=2,b=1,i=1,c=0;
	scanf("%lf",&n);
	
	while (i<=n)
	{
		sum = sum + 1.0*a/b;
		c = a;
		a = a+b;
		b = c;
		i++;
	}
	printf("%.2lf",sum);
	
	return 0;
}
