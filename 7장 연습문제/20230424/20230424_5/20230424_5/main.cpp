#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    double r, result = 1.0;
    int n, i;

    printf("실수값을 입력하시오: ");
    scanf("%lf", &r);

    printf("거듭 제곱 횟수를 입력하시오: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        result *= r;
    }

    printf("결과값은 : 2%lf\n",result);
}
