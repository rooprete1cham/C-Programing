#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int m;//money

	printf("돈을 투입해주세요:\n");
	scanf("%d", &m);

	if (m >= 500)
	{
		printf("음료수가 나왔습니다.\n");
	}
	if (m > 500)
	{
		printf("%d원이 반환되었습니다.\n", m - 500);
	}
	else
	{
		printf("%d원이 반환되었습니다.\n",m);
	}
}