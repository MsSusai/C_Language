#include <stdio.h>
int main()
{
	double height,n;
	scanf("%lf %lf",&height,&n);
	double sum=0,height1=0;
	
	int i;
	if (n==1)
	{
		sum = sum + height;
		printf("%lf %lf",sum,sum/2);
	}
	else if (n>=2)
	{
		sum = sum + height;
		height = height/2;
		for (i=2;i<=n;i++)
			{
				sum = sum + height*2;
				height = height/2;
			}
		
		printf("%.1lf %.1lf",sum,height);
	}
	
	else 
	{
		printf("0.0 0.0");
	}
	
	return 0;
}
