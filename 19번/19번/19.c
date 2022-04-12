#include <stdio.h>
int main()
{
	double x, y, sum; 

	printf("x와 y를 입력하시오\n");

	scanf_s("%lf %lf", &x, &y); 

	sum = x + y;
	printf("%lf", sum); 

	return 0;

}