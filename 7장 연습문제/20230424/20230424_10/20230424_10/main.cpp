#define _CRT_SCURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int j, i;
	for (i = 2; i <= 100; i++) 
	{
		for (j = 2; j < i; j++) 
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d ", i);
	}
}
