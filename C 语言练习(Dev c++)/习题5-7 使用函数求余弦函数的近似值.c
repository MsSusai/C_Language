//����Ҫ��ʵ��һ������,�����й�ʽ��cos(x)�Ľ���ֵ����ȷ�����һ��ľ���ֵС��e
//�����ӿڶ���
//double funcos( double e, double x );
//�����û�����Ĳ���Ϊ�������e���Ա���x������funcosӦ�����ø�����ʽ��������������������Ҫ���cos(x)�Ľ���ֵ
//�����������˫���ȷ�Χ��.
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

/* ��Ĵ��뽫��Ƕ������ */
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
