#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int a; 
	printf("叫块计:");
	scanf("%d", &a);
	if (a % 2 == 0) printf("%d案计", a);
	else printf("%d计", a);
	return 0;
}