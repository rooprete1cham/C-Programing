#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int temp;
	int day;

	printf("���ְ�ü���µ��� �Է��ϼ���:\n");
	scanf("%d", &temp);

	printf("�µ��� ���ӵ� ���� �Է��ϼ���:\n");
	scanf("%d", &day);

	if(temp >= 33 and temp < 35 and day >= 2)
	{
		printf("�������Ǻ� �߷�\n");
	}
	else if (temp >= 35 and day >= 2)
	{
		printf("�����溸 �߷�\n");
	}
	else
	{
		printf("�����ҽ��� �����ϴ�.\n");
	}
}