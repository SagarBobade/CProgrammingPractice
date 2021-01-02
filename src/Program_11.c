/* Below program accept a number and print it's digits in reverse. */

#include <stdio.h>
#include<stdbool.h>

void program_11() {

	int no = 0, reverse = 0, digit = 0;

	printf("Enter Number: ");
	scanf("%d", &no);

	while (no != 0) {
		digit = no % 10;
		reverse = reverse * 10 + digit;
		no = no / 10;
	}
	printf("%d", reverse);

}
