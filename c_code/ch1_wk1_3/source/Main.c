#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int a; 
	printf("�п�J�@�ӼƦr:");
	scanf("%d", &a);
	if (a % 2 == 0) printf("%d������", a);
	else printf("%d���_��", a);
	return 0;
}