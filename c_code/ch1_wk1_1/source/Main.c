#include <stdio.h>
int main()
{
	for (int j = 1; j <= 9; j++) 
	{
		if(j==1|j==9)
		{
			for (int i = 1; i <= 9; i++)
			{
				printf("*");
			}
			for (int i = 1; i <= 12; i++)
			{
				printf(" ");
			}
			for (int i = 1; i <= 3; i++)
			{
				printf("*");
			}
			for (int i = 1; i <= 14; i++)
			{
				printf(" ");
			}
			printf("*");
			for (int i = 1; i <= 11; i++)
			{
				printf(" ");
			}
			printf("*\n");
		}
		else
		{
			for (int i = 1; i <= 9; i++)
			{
				if (i == 1 ||i == 9) printf("*");
				else printf(" ");
			}
			for (int i = 1; i <= 9; i++)
			{
				printf(" ");
			}
			for (int i = 1; i <= 9; i++)
			{
				if ((j == 2 || j == 8) && (i == 2 || i == 8)) printf("*");
				else if (j != 2 && j != 8&&(i == 1 || i == 9)) printf("*");
				else printf(" ");
			}
			for (int i = 1; i <= 9; i++)
			{
				printf(" ");
			}
			for (int i = 1; i <= 5; i++)
			{
				if(i==3)printf("*");
				else if (j == 2 && (i == 2 || i == 4)) printf("*");
				else if (j == 3) printf("*");
				else printf(" ");
			}
			for (int i = 1; i <= 5; i++)
			{
				printf(" ");
			}
			for (int i = 1; i <= 9; i++)
			{
				if ((j == 2 || j == 8) && (i == 4 || i == 6)) printf("*");
				else if ((j == 3 || j == 7) && (i == 3 || i == 7)) printf("*");
				else if ((j == 4 || j == 6) && (i == 2 || i == 8)) printf("*");
				else if (j == 5 && (i == 1 || i == 9)) printf("*");
				else printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}