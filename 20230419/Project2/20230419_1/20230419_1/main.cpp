//미래모빌리티공학과 202315007 박승민 2023-04-19
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

	printf("1부터100까지 숫자 중 하나를 선택하세요:");

	do
	{
		printf("숫자를 입력하세요:");
		scanf("%d", &num2);
		tries++;
		if (num2 > num1)
		{
			printf("숫자가 큽니다.\n");
		}
		else if (num2 < num1)
		{
			printf("숫자가 작습니다.\n");
		}
		else
		{
			printf("정답입니다. 시도횟수는 %d입니다." & tries);
		}
	} while (num2 != num1);
}