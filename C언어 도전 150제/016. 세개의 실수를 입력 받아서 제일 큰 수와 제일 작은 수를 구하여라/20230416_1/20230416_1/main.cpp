#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    float n1, n2, n3;
    float n4, n5;

    printf("세 개의 실수를 입력하세요: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    n4 = n1;
    n5 = n1;

    if (n2 > n4) 
    {
        n4 = n2;
    }
    if (n3 > n4)
    {
        n4 = n3;
    }

    if (n2 < n5)
    {
        n5 = n2;
    }
    if (n3 < n5)
    {
        n5 = n3;
    }

    printf("제일 큰 수: %.2f\n", n4);
    printf("제일 작은 수: %.2f\n", n5);

}
