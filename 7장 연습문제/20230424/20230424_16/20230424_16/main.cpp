#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int n,d;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	do 
	{
		d = n % 10;
		n /= 10;
		printf("%d", d);
	} while (n != 0);
}
