#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a; //점수

	printf("시험 점수를 입력하시오:");
	scanf("%d", &a);

	if (a <= 100 && a >= 90)
	{
		printf("A입니다.\n");
	}
	else if (a <= 89 && a >= 80)
	{
		printf("B입니다.\n");
	}
	else if (a <= 79 && a >= 70)
	{
		printf("C입니다.\n");
	}
	else if (a <= 69 && a >= 60)
	{
		printf("D입니다.\n");
	}
	else
	{
		printf("F입니다.\n");
	}

}