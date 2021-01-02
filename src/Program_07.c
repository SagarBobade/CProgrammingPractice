/* Below program accept a number and print its multiplication table. */

#include <stdio.h>

void program_07() {

	int no, i, ans;

	printf("Enter Number: ");
	scanf("%d", &no);
	i = 10;
	while (i != 0) {
		ans = no * i;
		printf("%d\n", ans);
		i--;
	}

}
