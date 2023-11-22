#include <stdio.h>

int main() {
	int n, sum = 0;

	for (int i = 1; i <= 5; i++) {
		scanf("%d", &n);

		if (n < 40){
			sum += 40;
		}
		else {
			sum += n;
		}
	}
	printf("%d", sum / 5);
}