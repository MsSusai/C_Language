//水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。
//本题要求编写两个函数，一个判断给定整数是否水仙花数，另一个按从小到大的顺序打印出给定区间(m,n)内所有的水仙花数。
//
//函数接口定义：
//int narcissistic( int number );
//void PrintN( int m, int n );
//函数narcissistic判断number是否为水仙花数，是则返回1，否则返回0。
//
//函数PrintN则打印开区间(m, n)内所有的水仙花数，每个数字占一行。题目保证100≤m≤n≤10000。
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

/* 你的代码将被嵌在这里 */
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

