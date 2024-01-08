#include <stdio.h>

int main() {
	int input;
	scanf("%d", &input);

	for (int i = 1; i <= input; i++) {
		for (int j = input - i; j > 0; j--) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}