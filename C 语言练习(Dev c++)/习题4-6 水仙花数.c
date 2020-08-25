#include <stdio.h>
int pow_(int n ,int p);
int main()
{
	int n,start,end;
	scanf("%d",&n);
	start = pow_(10,n-1);
	end = pow_(10,n);
	
	for (; start<=end ; start++)
	{
		int temp = start;
		int sum = 0;
		int i = 0;
		for (i=1;i<=n;i++)
		{
			sum += pow_(temp % 10, n);
            temp /= 10;
		}
		if (sum == start)
		{
			printf("%d\n", sum);
		}
	
	}
	
	
	return 0;
}

int pow_ (int n, int p)
{
  	int result = 1;
  	int i = 1;
  	for (i = 1 ; i <= p;i++)
      	result *= n;
    return result;
}
