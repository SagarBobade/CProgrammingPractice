/* Below program accept a number and print its factorial. */

#include <stdio.h>

void program_06() {

	int a, i, factorial;

	printf("Enter Number: ");
	scanf("%d", &a);

	i = a;
	while (i != 0) {
		factorial = factorial * i;
		i--;
	}

	printf("Factorial of %d is= %d", a, factorial);

}
