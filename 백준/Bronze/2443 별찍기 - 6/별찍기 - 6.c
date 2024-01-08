#include <stdio.h>

int main() {
	int input;
	scanf("%d", &input);

	for (int i = input; i >= 1; i--) {
		for (int j = i; j <= input; j++) {
			if (j != i) {
				printf(" ");
			}
		}
		for (int j = 0; j < (i * 2 - 1); j++) {
			printf("*");
		}
		printf("\n");
	}

}