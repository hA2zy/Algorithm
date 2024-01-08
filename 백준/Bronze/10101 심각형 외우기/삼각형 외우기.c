#include <stdio.h>

int main() {
	int ang1, ang2, ang3;
	scanf("%d %d %d", &ang1, &ang2, &ang3);

	int add = ang1 + ang2 + ang3;

	if (ang1 == 60 && ang1 == ang2 &&ang2 == ang3 && ang1 == ang3) {
		printf("Equilateral");
	}
	else if ((ang1 == ang2 || ang1 == ang3 || ang2 == ang3) && add == 180) {
		printf("Isosceles");
	}
	else if (ang1 + ang2 + ang3 == 180) {
		printf("Scalene");
	}
	else {
		printf("Error");
	}
}