#include <stdio.h>
int main()
{
	int fen5=0,fen2=0,fen1=0,total=0,count=0,money=0;
	scanf("%d",&money);
	
	for(fen1=0;fen1<=100;fen1++)
		for(fen2=0;fen2<=50;fen2++)
			for (fen5=0;fen5<=20;fen5++)
		if (fen5*5+fen2*2+fen1*1==money && fen5>0 && fen2>0 && fen1>0)
		{
			total = fen5 + fen2 + fen1;
			printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",fen5,fen2,fen1,total);
			count++;
		}
	printf("count = %d\n",count);
	return 0;
}
