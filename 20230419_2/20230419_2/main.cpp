//�̷������Ƽ���а� 202315007 �ڽ¹� 2023-04-19
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	char letter;

	while (1)
	{
		printf("�ҹ��ڸ� �Է��Ͻÿ�:");
		scanf("%c", &letter);

		if (letter == 'Q')
			break;
		if (letter < 'a' || letter > 'z')
			continue;

		letter -= 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);
	}
}