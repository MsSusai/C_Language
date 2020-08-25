# include <stdio.h>
int main()
{
	int amount;
	int price;
	
	printf ("please enter your money:\n");
	scanf("%d" , &price);
	printf ("please enter your dollor:\n");
	scanf ("%d" , &amount);
	
	if (amount>=price){
	int change;
	change = amount - price;
	
	printf ("your change is: %d\n" , change);
	}
	else {
		printf("your money is not enough");
	}
	
	return 0;
}
