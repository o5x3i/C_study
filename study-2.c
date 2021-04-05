#include <stdio.h>

int main()
{
	int number = 1;
	int mul = 1;
	int input;

	scanf_s("%d", &input);

	do
	{
		number++;
		mul *= number;
	} while (number <= input);

	printf("%d", mul);

	return 0;
}