#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int num, i;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    printf("���: ", num);
    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
