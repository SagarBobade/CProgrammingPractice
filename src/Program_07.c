/* Below program accept a number and print its multiplication table. */

#include <stdio.h>

void program_07() {

	int a, i, ans;

	printf("Enter Number: ");
	scanf("%d", &a);
	i = 10;
	while (i != 0) {
		ans = a * i;
		printf("%d\n", ans);
		i--;
	}

}
