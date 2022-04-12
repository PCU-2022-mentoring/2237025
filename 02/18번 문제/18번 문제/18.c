#include <stdio.h>
int main()
{
	int a, b, sum;

	printf("x와 y를 입력하시오>>\n");

	scanf_s("%d %d", &a, &b);

	sum = a + b;

	printf("두 수의 합은 %d", sum);

	return 0;
}