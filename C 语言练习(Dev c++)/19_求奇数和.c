#include <stdio.h>
int main()
{
	int i=0,sum=0;
	
	do 
	{
		scanf("%d",&i);
		if (i>0 && i%2!=0)
		{
			sum = sum + i;
		}	
	}while (i>0);
	
	printf("%d",sum);
	return 0;
}
