#include <stdio.h>
int main()
{
	int s, c;
	printf("number\tsquare\tcude\n");
	for (int i = 0; i <= 10; i++) 
	{
		s = i *i; c = s*i;
		printf("%d\t%d\t%d \n",i,s,c);
	}
	return 0;
}