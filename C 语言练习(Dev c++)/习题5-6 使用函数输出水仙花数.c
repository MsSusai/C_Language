//ˮ�ɻ�����ָһ��Nλ��������N��3��������ÿ��λ�ϵ����ֵ�N����֮�͵���������
//����Ҫ���д����������һ���жϸ��������Ƿ�ˮ�ɻ�������һ������С�����˳���ӡ����������(m,n)�����е�ˮ�ɻ�����
//
//�����ӿڶ��壺
//int narcissistic( int number );
//void PrintN( int m, int n );
//����narcissistic�ж�number�Ƿ�Ϊˮ�ɻ��������򷵻�1�����򷵻�0��
//
//����PrintN���ӡ������(m, n)�����е�ˮ�ɻ�����ÿ������ռһ�С���Ŀ��֤100��m��n��10000��
#include <stdio.h>
#include <math.h>
int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int narcissistic( int number ){
	int exm, sum = 0, cnt = 0;
	exm = number;
	while( exm ){
		cnt ++;
		exm /= 10;
	}
	exm = number;
	int i; 
	while( exm ){
		i = exm % 10;
		sum += pow( i, cnt );
		exm /= 10;
	}
	if( sum == number){
		return 1;
	}else {
		return 0;
	}
}

void PrintN( int m, int n ){
	int i;
	for(i = m+1;i < n;i ++){
		if( narcissistic(i) ){
			printf("%d\n", i);
		}
	}
}

