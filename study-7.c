#include <stdio.h>

void swap(int, int);
void swap_p(int*, int*);

void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = a;
}
void swap_p(int* a_p, int* b_p)
{
	int temp;

	temp = *a_p;
	*a_p = *b_p;
	*b_p = temp;

}
int main()
{
	int a = 10, b = 100;
	int temp;

	printf("before swap | a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("after swap | a = %d, b = %d\n", a, b);


	printf("before swap_p | a = %d, b = %d\n", a, b);
	swap_p(&a, &b);
	printf("after swap_p | a = %d, b = %d\n", a, b);

	return 0;
}