#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char op;
	int a, b;
	printf("**********");
	printf("\nA----Add");
	printf("\nS----Subtract");
	printf("\nM----Multiply");
	printf("\nD----Divide");
	printf("\nQ----Qutit");
	printf("\n**********");
	do 
	{
		printf("\n������ �����Ͻÿ�: ");
		scanf("%c", &op);

		if (op == 'Q')
			break;
		printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
		scanf("%d %d", &a, &b);
		if (op == 'A') 
		{
			printf("\n%d\n", a + b);
			break;
		}
		else if (op == 'S') 
		{
			printf("\n%d\n", a - b);
			break;
		}
		else if (op == 'M') 
		{
			printf("\n%d\n", a * b);
			break;
		}
		else if (op == 'D') 
		{
			printf("\n%d\n", a / b);
			break;
		}
	} while (1);
}
