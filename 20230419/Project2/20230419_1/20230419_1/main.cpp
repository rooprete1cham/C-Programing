//�̷������Ƽ���а� 202315007 �ڽ¹� 2023-04-19
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdib.h>
#include <time.h>

void main()
{
	int num1, num2;
	int tries = 0;

	srand(time(NULL));

	num1 = rand() % 100 + 1;

	printf("1����100���� ���� �� �ϳ��� �����ϼ���:");

	do
	{
		printf("���ڸ� �Է��ϼ���:");
		scanf("%d", &num2);
		tries++;
		if (num2 > num1)
		{
			printf("���ڰ� Ů�ϴ�.\n");
		}
		else if (num2 < num1)
		{
			printf("���ڰ� �۽��ϴ�.\n");
		}
		else
		{
			printf("�����Դϴ�. �õ�Ƚ���� %d�Դϴ�." & tries);
		}
	} while (num2 != num1);
}