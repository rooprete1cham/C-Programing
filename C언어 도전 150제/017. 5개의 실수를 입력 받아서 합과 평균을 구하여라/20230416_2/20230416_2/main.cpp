#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    float n1, n2, n3, n4, n5;
    float sum, aver;

    printf("5개의 실수를 입력하세요:");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    sum = n1 + n2 + n3 + n4 + n5;
    aver = sum / 5;

    printf("합입니다.: %.2f\n", sum);
    printf("평균 값 입니다.: %.2f\n", aver);

}
