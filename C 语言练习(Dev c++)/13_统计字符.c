#include <stdio.h>
int main()
{
	int i,blank,other,letter,digit;
	char ch;
	blank=other=letter=digit=0;
	
	for (i=1;i<=10;i++)
	{
		ch = getchar ();
		
		if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
		{
		letter++;	
		}
		else if (ch>='0' && ch<='9')
		{
		digit++;
		}
		else if (ch==' ' || ch=='\n')
		{
		blank++;
		}
		else 
		{
		other++;
		}
		
	}
	
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
	
	return 0;
}
