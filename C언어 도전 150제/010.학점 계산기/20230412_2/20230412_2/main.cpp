#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a; //����

	printf("���� ������ �Է��Ͻÿ�:");
	scanf("%d", &a);

	if (a <= 100 && a >= 90)
	{
		printf("A�Դϴ�.\n");
	}
	else if (a <= 89 && a >= 80)
	{
		printf("B�Դϴ�.\n");
	}
	else if (a <= 79 && a >= 70)
	{
		printf("C�Դϴ�.\n");
	}
	else if (a <= 69 && a >= 60)
	{
		printf("D�Դϴ�.\n");
	}
	else
	{
		printf("F�Դϴ�.\n");
	}

}