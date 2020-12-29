/* Below program accept a number and print its addtion of digits. */

#include <stdio.h>

void program_08() {

	int a, d;
	int ans = 0;

	printf("Enter Number: ");
	scanf("%d", &a);

	while (a !=0) {
		d = a % 10;
		ans = ans + d;
		a = a / 10;
	}
	printf("%d", ans);

}
