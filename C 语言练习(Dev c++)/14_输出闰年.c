#include <stdio.h>
int main()
{
	int year;
	int end;
	int i=2000;
	scanf("%d",&end);
	
if (end>2000 && end<3000)
{
	for (i=2001 ; end>=i ; i++)
	{
		if ((i%4==0 && i%100!=0) || (i%400==0))
		{
			year = i;
			printf("%d\n",year);
		}
		else if(end>=2000 && end<2004)
		{
			printf("Invalid year!");
		}
	}
}
else 
{
printf("Invalid year!");
}
	
	return 0;
}
