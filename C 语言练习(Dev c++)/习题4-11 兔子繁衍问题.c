//һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӡ�С���ӳ�����3���º�ÿ��������һ�����ӡ�
//�������Ӷ����������ʵ�1���³�����һ�����ӣ�������Ҫ���ܵ��ڼ�����ʱ���������ſ��ԴﵽN�ԣ�
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
