//最大公约数=两数之积/最小公倍数，所以只要求出一个另
//外一个自然通过简单的计算求出来了。
//辗转相除法									
//有两整数a和b：
// a%b得余数c
// 若c=0，则b即为两数的最大公约数
// 若c≠0，则a=b，b=c，再回去执行
//例如求35和15的最大公约数过程为：
//35÷15 余5，,15÷5余0，5即为最大公约数
 
#include <stdio.h>  
#include <math.h>
 
int main(){       //浮点错误是所求值不存在 除以0之类了
	int m,n;
	scanf("%d %d",&m,&n);
	int yushu;
	yushu=m%n;
	int  x;
	x=m*n;//记录m*n为后面求公倍数 
	
	if(yushu==0){
		printf("%d %d",n,x/n);
	}else{
		
		while(yushu!=0){
			m=n;
			n=yushu;
			yushu=m%n;		 
		}
		printf("%d %d",n,x/n);
	}					         
    return 0;  
 } 
 
 
