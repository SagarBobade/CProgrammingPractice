/* Below program accepts a number and finds it's factors. */

#include <stdio.h>

void numberProgram_12() {

	int no = 0;

	printf("Enter Number: ");
	scanf("%d", &no);

	factorsOf(no);
}

void factorsOf(int no) {

	printf("Factors of %d: \n", no);

	for (int i = 2; i < no; i++) {

		if (no % i == 0) {
			printf("%d\n", i);
		}
	}

}
