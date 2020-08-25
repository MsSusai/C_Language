#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int mynumber,yournumber,i,n;
	scanf("%d %d",&mynumber,&n);
	
	for (i=1;i<=n;i++)
	{
		scanf("%d",&yournumber);
			if (mynumber==yournumber && i==1)
			{
				printf("Bingo!\n");
				break;
			}
			else if (mynumber==yournumber && i<=3 && i>1)
			{
				printf("Lucky You!\n");
				break;
			}
			else if (mynumber==yournumber && i<=n && i>3) 
			{
				printf("Good Guess!\n");
				break;
			}
			else if (mynumber>yournumber)
			{
				printf("Too small\n");
			}
			else if (mynumber<yournumber)
			{
				printf("Too big\n");
			}
			else
			{
				printf("Game Over\n");
				break;
			}
	}
	return 0;
}
