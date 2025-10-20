#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a,&b);
	if (a% b == 0) printf("%d為%d的倍數", a, b);
	else printf("%d不是%d的倍數",a,b);
	return 0;
}