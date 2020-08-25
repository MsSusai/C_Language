#include <stdio.h>

#define MAXN 10

int even( int n );
int OddSum( int List[], int N );
//其中函数even将根据用户传入的参数n的奇偶性返回相应值：当n为偶数时返回1，否则返回0。
//函数OddSum负责计算并返回传入的N个整数List[]中所有奇数的和
int main()
{    
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for ( i=0; i<N; i++ ) {
        scanf("%d", &List[i]);
        if ( even(List[i])==0 )
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
//int even( int n )
//{
//	if(n%2==0)
//	{
//		return 1;
//	}else return 0;
//}
//
//int OddSum( int List[], int N )
//{
//	int sum=0;
//	int i;
//	for(i=1;i<=N;i++){
//		if(List[i]%2!=0){
//			sum=sum+List[i];
//		}
//	}
//	return sum;
//}
even( int n )
{
	if(n % 2)
	return 0;
	else
	return 1;
 } 
 
 OddSum( int List[], int N )
 {
 	int sum = 0;
 	int i;
 	for(i=0;i<N;i++)
 	{
 		if(List[i] % 2)
 		{
 			sum += List[i]; 
		 }
	 }
	 return sum;
 }
