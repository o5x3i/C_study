#include <stdio.h>

int main()
{
	float sub[7];
	float grade = 0;
	int i;

	for (i = 0; i <= 7; i++) {
		printf("������ �Է��ϼ��� :");
		scanf_s("%f", &sub[i]);
	}


	for (i = 0; i <= 7; i++) {

			grade += sub[i];
		}

		printf("���� ��� : %f", grade / 8);


		return 0;
}