#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define pi 3.141592
int main(void)
{
	float radius;

	printf("���� �������� �Է��ϼ���: ");
	scanf("%f", &radius);

	printf("���� ǥ����: %.2f\n", 4.0 * pi * radius * radius);
	printf("���� ü��: %.2f\n", (4.0 / 3.0) * pi * radius * radius * radius);

	return 0;
}



