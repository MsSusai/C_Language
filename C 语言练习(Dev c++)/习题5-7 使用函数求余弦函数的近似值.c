//本题要求实现一个函数,用下列公式求cos(x)的近似值，精确到最后一项的绝对值小于e
//函数接口定义
//double funcos( double e, double x );
//其中用户传入的参数为误差上限e和自变量x；函数funcos应返回用给定公式计算出来、并且满足误差要求的cos(x)的近似值
//输入输出均在双精度范围内.
#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos( double e, double x )
{
	double cifang=0,flag=1,fenmu=1,i=0;
	double sum=0;
	while(pow(x,cifang)/fenmu>=e){
		fenmu=1;
		for(i=1;i<=cifang;i++){
			fenmu*=i;
		}
		sum=sum+flag*pow(x,cifang)/fenmu;
		flag=-flag;
		cifang+=2;
	}
	return sum;
}

//double funcos( double e, double x ){
//	int flag=-1;
//	double item=1,m=2,sum=1;
//	double fenmu=1, fenzi;
//	
//	while(item>e){
//		for(int i=1;i<=m;i++){
//			fenmu=fenmu*i;
//		}	 
//		fenzi=pow(x,m);
//		item=fenzi/fenmu;
//		sum=sum+flag*item;
//		m=m+2;
//		fenmu=1;
//		flag=-flag;
//	}	
//	return sum;	
//}
