/* Below program accept a number and print its factorial. */

#include <stdio.h>

void NumbeProgram_06() {

	int no, i, factorial;

	printf("Enter Number: ");
	scanf("%d", &no);

	i = no;
	while (i != 0) {
		factorial = factorial * i;
		i--;
	}

	printf("Factorial of %d is= %d", no, factorial);

}
