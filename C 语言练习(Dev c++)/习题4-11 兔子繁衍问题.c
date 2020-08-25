//一对兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第3个月后每个月又生一对兔子。
//假如兔子都不死，请问第1个月出生的一对兔子，至少需要繁衍到第几个月时兔子总数才可以达到N对？
#include <stdio.h>
int main()
{
	int month=1,n,pre=1,now=1,sum=1;
	scanf("%d",&n);
	
	if(n==1)
	{
		printf("%d",n);
	}else{
	
	while(sum<=n)
	{
		month++;
		sum=pre+now;
		pre=now;
		now=sum;
		}
		printf("%d",month);
	}		
	
	return 0;
}
