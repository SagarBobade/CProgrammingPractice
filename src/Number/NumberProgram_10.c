/* Below program accepts two numbers and creates simple calculator application. */

#include <stdio.h>

void numberProgram_10() {

	int no1, no2, ch, ans;

	printf("Enter Number 1: ");
	scanf("%d", &no1);

	printf("Enter Number 2: ");
	scanf("%d", &no2);

	printf("You can choose from following -> ");
	printf("1. Addition of %d and %d", no1, no2);
	printf("2. Substraction of %d and %d", no1, no2);
	printf("3. Multiplication of %d and %d", no1, no2);
	printf("4. Division of %d and %d", no1, no2);

	printf("Enter your choice: ");
	scanf("%d", &ch);

	switch (ch) {

	case 1:
		ans = no1 + no2;
		break;
	case 2:
		ans = no1 - no2;
		break;
	case 3:
		ans = no1 * no2;
		break;
	case 4:
		ans = no1 / no2;
		break;

	}

}
