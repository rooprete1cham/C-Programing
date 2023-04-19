#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int temp;
	int day;

	printf("일최고체감온도를 입력하세요:\n");
	scanf("%d", &temp);

	printf("온도가 지속된 날을 입력하세요:\n");
	scanf("%d", &day);

	if(temp >= 33 and temp < 35 and day >= 2)
	{
		printf("폭염주의보 발령\n");
	}
	else if (temp >= 35 and day >= 2)
	{
		printf("폭염경보 발령\n");
	}
	else
	{
		printf("폭염소식이 없습니다.\n");
	}
}