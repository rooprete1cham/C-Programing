#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define pi 3.141592
int main(void)
{
	float radius;

	printf("구의 반지름을 입력하세요: ");
	scanf("%f", &radius);

	printf("구의 표면적: %.2f\n", 4.0 * pi * radius * radius);
	printf("구의 체적: %.2f\n", (4.0 / 3.0) * pi * radius * radius * radius);

	return 0;
}



