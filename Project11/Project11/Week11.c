#include <stdio.h>

int main(void) {
	int i, j;
	int sum = 0;
	int grade[5];

	for (i = 0; i < 5; i++) {
		printf("grade[%i] = ", i);
		scanf_s("%d", &grade[i]);
	}

	for (j = 0; j < 5; j++) {
		printf("grade[%i] = %i\n", j, *(grade+j));
		sum = sum + *(grade + j);
	}

	printf("average: %d\n", sum/5);

	return 0;
}