#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int height, ft;
    double inch;

    printf("키를 입력하세요: ");
    scanf("%d", &height);

    ft = (height / 2.54 / 12);
    inch = (height - ft * 2.54 * 12) / 2.54;

    printf("%dcm는 %d피트 %.2f인치 입니다.\n", height, ft, inch);

    return 0;
}
