/* Below program accept a number and print its addition of digits till addition becomes single digit. */

#include <stdio.h>
#include<stdbool.h>

void program_09() {

	int no, d;
	int ans = 0;
	bool flag = true;

	printf("Enter Number: ");
	scanf("%d", &no);

//	if (flag == true) {
//		flag=false;
	while (ans >= 9) {
		while (no != 0) {
			d = no % 10;
			ans = ans + d;
			no = no / 10;
		}
		printf("%d", ans);
	}
//	}
}
