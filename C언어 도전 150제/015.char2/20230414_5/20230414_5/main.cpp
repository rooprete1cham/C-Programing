#include <stdio.h>

void main()
{
	const char* str = "대한민국";

	printf("%s\n\n", str);
	printf("char*은 문자열을 저장할때 쓰고,그냥 char을 사용하면 'char*'형식의 엔터티를 초기화할 수 없습니다.라고 출력 되기 때문에 char*앞에 'const'를 붙혀주면 해결된다.\n\n\n\n");
}