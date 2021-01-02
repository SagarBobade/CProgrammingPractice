/* Below program accept a number and print its addtion of digits. */

#include <stdio.h>

void program_08() {

	int no, d;
	int ans = 0;

	printf("Enter Number: ");
	scanf("%d", &no);

	while (no != 0) {
		d = no % 10;
		ans = ans + d;
		no = no / 10;
	}
	printf("%d", ans);

}
