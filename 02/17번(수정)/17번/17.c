#include <stdio.h>
int main()
{
	int radius, area;

	printf("반지름을 입력하시오\n");
	scanf_s("%d", &radius);

	area = radius * radius * 3.14;

	printf("원의 면적은 %d", area);

	return 0;

}
