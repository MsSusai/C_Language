#include <stdio.h>
#include <math.h>
int main()
{
	int a,n,i=0;
	double sum=0,number=0;
	scanf("%d %d",&a,&n);
	
	while (i<n)
	{
		number = a*pow(10,i) + number;
		sum = number + sum;
		i++;
	}
	printf("s = %.0lf",sum);
	return 0;
}
