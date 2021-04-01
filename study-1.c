#include <stdio.h>

int main()

{
	int a;
	float b;


	b = 3.14;
	const float c = 3.141592;


	scanf_s("%d", &a);
	a = a << 3;

	printf("%d\n", a);
	printf("%f\n", b);
	printf("%.3f\n", c);


	return 0;

}