#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime( int p )
{
	int i=2,reg=1;
	if(p>=2){
	
	for(i=2;i<p;i++){
		if(p%i==0){
			reg = 0;
			break;
		}
	}
}else{
	reg = 0;
}
	return reg;
}

int PrimeSum( int m, int n )
{
	int sum=0;
	int p;
	for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
           sum = sum + p;
    }
    return sum;
} 

 
