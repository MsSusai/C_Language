# include <stdio.h>
int main()
{
	double sum=0,denominator=1;
	int i=1,n=0,flag=1;
	
	printf ("����n\n");
	scanf ("%d" , &n);
	
	for (i=1 ; i<=n ; i++){
		sum = sum + flag*(1/denominator);
		denominator = denominator + 2;
		flag = -flag;
	}
	printf ("ǰn��֮��Ϊ%lf" , sum);
	
	return 0;
 } 
