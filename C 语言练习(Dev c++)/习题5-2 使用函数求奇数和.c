#include <stdio.h>

#define MAXN 10

int even( int n );
int OddSum( int List[], int N );
//���к���even�������û�����Ĳ���n����ż�Է�����Ӧֵ����nΪż��ʱ����1�����򷵻�0��
//����OddSum������㲢���ش����N������List[]�����������ĺ�
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

/* ��Ĵ��뽫��Ƕ������ */
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
