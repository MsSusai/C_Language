#include <stdio.h>
int main()
{
	double price = 0;
	float km = 0;
	int hour = 0;
	scanf("%f %d",&km,&hour);
	
	if (km<=3)
	{
		price = 10;
	}
	else if (km<=10)
	{
		price = 10 + 2*(km-3);
	}
	else 
	{
		price = 24 + 3*(km-10);
	}
	
	if (hour<5)
	{
		;
	}
	else 
	{
		price = price + 2*(hour/5);
	}
	
	printf ("%.0lf",price);
	
	return 0;
}
