# include <stdio.h>
# include <math.h>
int main()
{
	int n=0;
	int i=0;
	int power;
	scanf ("%d", &n);
	
	for (i=0 ; i<=n ; i++){
		power = pow (3,i);
		printf ("pow(3,%d) = %d\n" , i , power);
	}
	return 0;
}
