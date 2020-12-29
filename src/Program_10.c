/* Below program accept a number and print its addtion of digits. */

#include <stdio.h>
#include<stdbool.h>

void program_10() {

	int a, b, ch, ans;

	printf("Enter Number 1: ");
	scanf("%d", &a);

	printf("Enter Number 2: ");
	scanf("%d", &b);

	printf("You can choose from following -> ");
	printf("1. Addition of %d and %d", a,b);
	printf("2. Substraction of %d and %d", a,b);
	printf("3. Multiplication of %d and %d", a,b);
	printf("4. Division of %d and %d", a,b);

	printf("Enter your choice: ");
	scanf("%d", &ch);

	switch (ch) {

	case 1:
		ans = a + b;
		break;
	case 2:
		ans = a - b;
		break;
	case 3:
		ans = a * b;
		break;
	case 4:
		ans = a / b;
		break;

	}

}
