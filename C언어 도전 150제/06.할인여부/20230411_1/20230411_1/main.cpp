#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int age;

	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);

	if (age < 20)
	{
		printf("������ ������ �� �ֽ��ϴ�.\n");
	}
	else
	{
		printf("������ ������ �� �����ϴ�.\n");
	}
}