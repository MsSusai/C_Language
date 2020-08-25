# include <stdio.h>
# include <math.h>

int main()
{
	float x;
	float y;
	scanf ("%f" , &x);
	
	if (x<0){
		y = pow (x + 1 , 2) + 2*x + 1/x;
		printf ("f(%.2f) = %.2f",x,y);
	}
	
	else {
		y = sqrt(x);
		printf ("f(%.2f) = %.2f",x,y);
	}
	return 0;
}
